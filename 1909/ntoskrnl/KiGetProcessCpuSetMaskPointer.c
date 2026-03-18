/*
 * XREFs of KiGetProcessCpuSetMaskPointer @ 0x140197010
 * Callers:
 *     KeSetCpuSetsProcess @ 0x140196A9C (KeSetCpuSetsProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1402ACAFC (KeQueryCpuSetsProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetProcessCpuSetMaskPointer(__int64 a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 1788) & 0x80u) != 0 )
  {
    *a3 = (unsigned __int16)KiMaximumGroups;
    if ( a2 )
      return *(_QWORD *)(a1 + 1992);
    else
      return *(_QWORD *)(a1 + 2000);
  }
  else
  {
    *a3 = 1;
    return a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 2000;
  }
}
