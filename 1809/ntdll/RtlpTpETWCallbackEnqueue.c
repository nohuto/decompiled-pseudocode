/*
 * XREFs of RtlpTpETWCallbackEnqueue @ 0x180110B04
 * Callers:
 *     TppWorkPost @ 0x180014F60 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackEnqueue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
