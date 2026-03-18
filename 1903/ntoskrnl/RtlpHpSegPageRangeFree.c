/*
 * XREFs of RtlpHpSegPageRangeFree @ 0x14031BBBC
 * Callers:
 *     RtlpHpSegAlloc @ 0x14005FD40 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x14001E830 (RtlpHpSegPageRangeShrink.c)
 */

__int64 __fastcall RtlpHpSegPageRangeFree(__int64 a1, __int64 a2, int a3)
{
  return RtlpHpSegPageRangeShrink(a1, a2, a3, a3);
}
