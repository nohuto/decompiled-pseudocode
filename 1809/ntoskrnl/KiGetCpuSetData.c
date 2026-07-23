/*
 * XREFs of KiGetCpuSetData @ 0x14013BB0C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x14075BA04 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
