/*
 * XREFs of sub_180103BDC @ 0x180103BDC
 * Callers:
 *     sub_1800F14C0 @ 0x1800F14C0 (sub_1800F14C0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_180103BDC()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
