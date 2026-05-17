/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800DFF54
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18005DDCC (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventUnsubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
