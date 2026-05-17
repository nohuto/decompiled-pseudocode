/*
 * XREFs of sub_1801030B4 @ 0x1801030B4
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18004EA3C @ 0x18004EA3C (sub_18004EA3C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_1801030B4()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
