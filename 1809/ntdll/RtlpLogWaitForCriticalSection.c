/*
 * XREFs of RtlpLogWaitForCriticalSection @ 0x1800E9884
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpLogWaitForCriticalSection()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
