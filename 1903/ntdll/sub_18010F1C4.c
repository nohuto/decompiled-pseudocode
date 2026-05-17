/*
 * XREFs of sub_18010F1C4 @ 0x18010F1C4
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F1C4()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
