/*
 * XREFs of sub_180103470 @ 0x180103470
 * Callers:
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180044D74 @ 0x180044D74 (sub_180044D74.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 sub_180103470()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
