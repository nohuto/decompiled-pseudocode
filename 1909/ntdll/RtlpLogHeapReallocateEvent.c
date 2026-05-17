/*
 * XREFs of RtlpLogHeapReallocateEvent @ 0x180103650
 * Callers:
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180044EDC (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReallocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
