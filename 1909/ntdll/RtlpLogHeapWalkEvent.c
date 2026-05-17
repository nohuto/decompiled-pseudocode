/*
 * XREFs of RtlpLogHeapWalkEvent @ 0x180103CBC
 * Callers:
 *     RtlpWalkHeap @ 0x1800F15A0 (RtlpWalkHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapWalkEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
