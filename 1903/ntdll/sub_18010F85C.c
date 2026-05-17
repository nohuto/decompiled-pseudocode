/*
 * XREFs of sub_18010F85C @ 0x18010F85C
 * Callers:
 *     sub_1800327D4 @ 0x1800327D4 (sub_1800327D4.c)
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F85C()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
