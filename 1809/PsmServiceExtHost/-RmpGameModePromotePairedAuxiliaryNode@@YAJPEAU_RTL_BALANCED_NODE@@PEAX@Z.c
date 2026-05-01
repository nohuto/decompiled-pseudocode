/*
 * XREFs of ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18005ED90
 * Callers:
 *     ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x1800359E8 (-RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z.c)
 * Callees:
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18005ED40 (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005F69C (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModePromotePairedAuxiliaryNode(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  struct _LIST_ENTRY *v2; // rdx
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v3; // r8

  if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a1[2].Children[1]) )
    RmpGameModePromoteAuxiliaryProcess(v3, v2);
  return 0LL;
}
