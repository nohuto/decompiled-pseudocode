/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800DFE18
 * Callers:
 *     RtlPublishWnfStateData @ 0x1800814A0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800877C0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
