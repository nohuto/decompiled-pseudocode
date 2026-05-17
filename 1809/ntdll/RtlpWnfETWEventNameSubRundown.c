/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800DFD88
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18005E718 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventNameSubRundown()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
