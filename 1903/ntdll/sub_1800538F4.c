/*
 * XREFs of sub_1800538F4 @ 0x1800538F4
 * Callers:
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 */

void __fastcall sub_1800538F4(PRTL_BALANCED_NODE Node)
{
  RtlAcquireSRWLockExclusive(&stru_180166440);
  RtlRbRemoveNode(&Tree, Node);
  memset(Node, 171, sizeof(_RTL_BALANCED_NODE));
  RtlReleaseSRWLockExclusive(&stru_180166440);
}
