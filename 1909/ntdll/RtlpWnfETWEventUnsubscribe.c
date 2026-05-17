/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800DDB14
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000645C (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventUnsubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
