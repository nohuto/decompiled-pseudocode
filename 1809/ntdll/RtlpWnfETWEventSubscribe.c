/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x1800DFEA8
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x18005BF98 (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventSubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
