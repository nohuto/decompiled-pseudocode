/*
 * XREFs of sub_1801032A0 @ 0x1801032A0
 * Callers:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18004C420 @ 0x18004C420 (sub_18004C420.c)
 * Callees:
 *     sub_180076E84 @ 0x180076E84 (sub_180076E84.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 __fastcall sub_1801032A0(__int64 a1)
{
  sub_180076E84(a1);
  return ZwTraceEvent();
}
