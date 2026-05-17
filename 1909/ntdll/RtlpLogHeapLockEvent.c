/*
 * XREFs of RtlpLogHeapLockEvent @ 0x1801035D4
 * Callers:
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapLockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
