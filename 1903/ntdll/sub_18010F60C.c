/*
 * XREFs of sub_18010F60C @ 0x18010F60C
 * Callers:
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F60C()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
