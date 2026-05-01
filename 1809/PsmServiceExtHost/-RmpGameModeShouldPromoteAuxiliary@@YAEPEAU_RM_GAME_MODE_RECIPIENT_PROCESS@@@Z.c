/*
 * XREFs of ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005F69C
 * Callers:
 *     ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x1800359E8 (-RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18005ED90 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RmpGameModeShouldPromoteAuxiliary(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  unsigned __int8 result; // al

  if ( *((_DWORD *)a1 + 26) != 2 )
    return 0;
  result = 1;
  if ( (*((_BYTE *)a1 + 170) & 5) != 1 )
    return 0;
  return result;
}
