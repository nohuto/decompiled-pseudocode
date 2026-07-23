/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180053994
 * Callers:
 *     EtwNotificationUnregister @ 0x180053850 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 */

void __fastcall EtwpRemoveRegistrationFromTable(PRTL_BALANCED_NODE Node)
{
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, Node);
  memset(Node, 171, sizeof(_RTL_BALANCED_NODE));
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
