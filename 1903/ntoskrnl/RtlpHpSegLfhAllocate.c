/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x140127470
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x1401274CC (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegLfhAllocate(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r8

  v3 = a3 & 1;
  LODWORD(v3) = v3 | 0x8000000;
  return RtlpHpSegSubAllocate(a1, a2, v3);
}
