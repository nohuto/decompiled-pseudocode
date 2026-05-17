/*
 * XREFs of sub_180103570 @ 0x180103570
 * Callers:
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_180044EDC @ 0x180044EDC (sub_180044EDC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_180103570()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
