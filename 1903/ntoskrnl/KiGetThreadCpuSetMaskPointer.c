/*
 * XREFs of KiGetThreadCpuSetMaskPointer @ 0x1400F8F08
 * Callers:
 *     KeQueryCpuSetsThread @ 0x1402ACEA0 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadCpuSetMaskPointer(__int64 a1, _DWORD *a2)
{
  if ( (*(_DWORD *)(a1 + 1760) & 0x20000) != 0 )
  {
    if ( a2 )
      *a2 = (unsigned __int16)KiMaximumGroups;
    return *(_QWORD *)(a1 + 2000);
  }
  else
  {
    if ( a2 )
      *a2 = 1;
    return a1 + 2000;
  }
}
