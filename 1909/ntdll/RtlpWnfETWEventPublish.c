/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800DD9D8
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007CED0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180083C00 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
