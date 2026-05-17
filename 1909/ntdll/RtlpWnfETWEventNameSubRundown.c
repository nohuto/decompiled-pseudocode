/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800DD948
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x180006ECC (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventNameSubRundown()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
