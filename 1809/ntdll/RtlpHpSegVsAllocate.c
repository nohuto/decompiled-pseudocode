/*
 * XREFs of RtlpHpSegVsAllocate @ 0x1800820C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegVsAllocate(__int64 a1, unsigned int a2, char a3, _DWORD *a4, _DWORD *a5)
{
  return RtlpHpSegSubAllocate(a1, a2, a3 & 1 | 0xC000000u, a4, a5);
}
