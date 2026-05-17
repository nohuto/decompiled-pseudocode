/*
 * XREFs of sub_18010F72C @ 0x18010F72C
 * Callers:
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F72C()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
