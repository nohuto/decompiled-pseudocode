/*
 * XREFs of PopSuspendResumePdc @ 0x1407261E8
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*PopSuspendResumePdc())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14046BDA8;
  if ( qword_14046BDA8 )
    return (__int64 (*)(void))qword_14046BDA8();
  return result;
}
