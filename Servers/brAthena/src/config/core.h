/****************************************************************************!
*                _           _   _   _                                       *    
*               | |__  _ __ / \ | |_| |__   ___ _ __   __ _                  *  
*               | '_ \| '__/ _ \| __| '_ \ / _ \ '_ \ / _` |                 *   
*               | |_) | | / ___ \ |_| | | |  __/ | | | (_| |                 *    
*               |_.__/|_|/_/   \_\__|_| |_|\___|_| |_|\__,_|                 *    
*                                                                            *
*                                                                            *
* \file src/config/core.h                                                    *
* Descri��o Prim�ria.                                                        *
* Descri��o mais elaborada sobre o arquivo.                                  *
* \author brAthena, rAthena                                                  *
* \date ?                                                                    *
* \todo ?                                                                    *  
*****************************************************************************/

#ifndef _CONFIG_CORE_H_
#define _CONFIG_CORE_H_

/// N�mero m�ximo de itens a serem exibidos quando se usa @autolootid list
#define AUTOLOOTITEM_SIZE 10

/// N�mero m�ximo de comandos de sugest�o
#define MAX_SUGGESTIONS 10

/// Comment to disable the official walk path
/// The official walkpath disables users from taking non-clear walk paths,
/// e.g. if they want to get around an obstacle they have to walk around it,
/// while with OFFICIAL_WALKPATH disabled if they click to walk around a obstacle the server will do it automatically
#define OFFICIAL_WALKPATH

/// leave this line uncommented to enable callfunc checks when processing scripts.
/// while allowed, the script engine will attempt to match user-defined functions
/// in scripts allowing direct function callback (without the use of callfunc.)
/// this CAN affect performance, so if you find scripts running slower or find
/// your map-server using more resources while this is active, comment the line
#define SCRIPT_CALLFUNC_CHECK

/// Reporte an�nimamente
/// Descomente para n�o enviar mais reports autom�ticos.
//#define STATS_OPT_OUT

/// Descomente para habilitar o script de comando query_sql e mysql logs em modo thread.
/// Ainda n�o � indicado us�-lo, tenha cuidado ao habilitar.
//#define BETA_THREAD_TEST

/// Descomente para habilitar o modo limite de c�lulas
//#define CELL_NOSTACK

/// Descomente para habilitar o modo de checagem de �rea circular.
/// Habilitando este modo, a �rea de ataque fica mais realistica conforme servidores oficiais.
/// Ainda n�o � indicado us�-lo, tenha cuidado ao habilitar.
//#define CIRCULAR_AREA

/// Uncomment to enable Non Stackable items unique ID
/// By enabling it, the system will create an unique id for each new non stackable item created
//#define NSI_UNIQUE_ID

#include "./renewal.h"
#include "./secure.h"
#include "./classes/general.h"
#include "./const.h"

#endif // _CONFIG_CORE_H_
