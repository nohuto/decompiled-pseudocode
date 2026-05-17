/*
 * XREFs of RtlpLogHeapWalkEvent @ 0x1801065E4
 * Callers:
 *     RtlpWalkHeap @ 0x1800F41F0 (RtlpWalkHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapWalkEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
