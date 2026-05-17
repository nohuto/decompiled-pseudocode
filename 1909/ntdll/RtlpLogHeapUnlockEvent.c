/*
 * XREFs of RtlpLogHeapUnlockEvent @ 0x180103BC4
 * Callers:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapUnlockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
