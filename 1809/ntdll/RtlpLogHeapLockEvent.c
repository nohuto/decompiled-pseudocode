/*
 * XREFs of RtlpLogHeapLockEvent @ 0x180105EFC
 * Callers:
 *     RtlLockHeap @ 0x18006D5A0 (RtlLockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapLockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
