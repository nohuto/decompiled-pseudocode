/*
 * XREFs of sub_18010F7A8 @ 0x18010F7A8
 * Callers:
 *     sub_1800326A0 @ 0x1800326A0 (sub_1800326A0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F7A8()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
