/*
 * XREFs of KiGetCpuSetData @ 0x14013DB1C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140783CB0 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
