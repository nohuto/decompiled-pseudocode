/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x180103550
 * Callers:
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpHpSegFree @ 0x180044D74 (RtlpHpSegFree.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapFreeEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
