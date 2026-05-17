/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180053994
 * Callers:
 *     EtwNotificationUnregister @ 0x180053850 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall EtwpRemoveRegistrationFromTable(void *a1)
{
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode((unsigned __int64 *)&EtwpRegistrationTable, (unsigned __int64)a1);
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
