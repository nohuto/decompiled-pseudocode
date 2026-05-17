/*
 * XREFs of sub_18010FD3C @ 0x18010FD3C
 * Callers:
 *     sub_18002F180 @ 0x18002F180 (sub_18002F180.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010FD3C()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
