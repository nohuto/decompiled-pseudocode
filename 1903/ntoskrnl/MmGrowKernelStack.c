/*
 * XREFs of MmGrowKernelStack @ 0x1402C4810
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x140135DE0 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, 24576LL);
}
