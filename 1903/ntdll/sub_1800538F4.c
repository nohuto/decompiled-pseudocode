/*
 * XREFs of sub_1800538F4 @ 0x1800538F4
 * Callers:
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall sub_1800538F4(void *a1)
{
  RtlAcquireSRWLockExclusive(&qword_180166440);
  RtlRbRemoveNode((unsigned __int64 *)&qword_180166430, (unsigned __int64)a1);
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&qword_180166440);
}
