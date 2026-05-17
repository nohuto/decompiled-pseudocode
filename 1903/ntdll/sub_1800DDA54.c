/*
 * XREFs of sub_1800DDA54 @ 0x1800DDA54
 * Callers:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_1800DDA54()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
