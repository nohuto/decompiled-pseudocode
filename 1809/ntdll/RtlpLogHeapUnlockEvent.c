/*
 * XREFs of RtlpLogHeapUnlockEvent @ 0x1801064EC
 * Callers:
 *     RtlUnlockHeap @ 0x18006D640 (RtlUnlockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapUnlockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
