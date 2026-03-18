/*
 * XREFs of RtlpHpSegVsAllocate @ 0x1401274A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x1401274CC (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegVsAllocate(__int64 a1, __int64 a2, char a3)
{
  return RtlpHpSegSubAllocate(a1, a2, a3 & 1 | 0xC000000u);
}
