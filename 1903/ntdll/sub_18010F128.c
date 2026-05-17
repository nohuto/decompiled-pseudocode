/*
 * XREFs of sub_18010F128 @ 0x18010F128
 * Callers:
 *     sub_180030680 @ 0x180030680 (sub_180030680.c)
 *     sub_180030770 @ 0x180030770 (sub_180030770.c)
 *     sub_180032D70 @ 0x180032D70 (sub_180032D70.c)
 *     sub_180082050 @ 0x180082050 (sub_180082050.c)
 *     sub_18010EC80 @ 0x18010EC80 (sub_18010EC80.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F128()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
