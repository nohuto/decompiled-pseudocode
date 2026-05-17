/*
 * XREFs of sub_18010F414 @ 0x18010F414
 * Callers:
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_18010F414()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
