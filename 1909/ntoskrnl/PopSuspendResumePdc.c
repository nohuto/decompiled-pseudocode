/*
 * XREFs of PopSuspendResumePdc @ 0x140728088
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*PopSuspendResumePdc())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14046BAE8;
  if ( qword_14046BAE8 )
    return (__int64 (*)(void))qword_14046BAE8();
  return result;
}
