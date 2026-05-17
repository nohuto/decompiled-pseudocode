/*
 * XREFs of sub_18010F590 @ 0x18010F590
 * Callers:
 *     sub_1800327D4 @ 0x1800327D4 (sub_1800327D4.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F590()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
