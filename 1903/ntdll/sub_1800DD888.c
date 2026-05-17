/*
 * XREFs of sub_1800DD888 @ 0x1800DD888
 * Callers:
 *     sub_180006ECC @ 0x180006ECC (sub_180006ECC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_1800DD888()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
