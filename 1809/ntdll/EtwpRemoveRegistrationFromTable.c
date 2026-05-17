/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x18004EAC4
 * Callers:
 *     EtwNotificationUnregister @ 0x18004E980 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001ECC0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall EtwpRemoveRegistrationFromTable(
        void *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  RtlRbRemoveNode((__int64)&EtwpRegistrationTable, (unsigned __int64)a1);
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
