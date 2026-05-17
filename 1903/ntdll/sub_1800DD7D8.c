/*
 * XREFs of sub_1800DD7D8 @ 0x1800DD7D8
 * Callers:
 *     sub_180006950 @ 0x180006950 (sub_180006950.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_1800DD7D8()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
