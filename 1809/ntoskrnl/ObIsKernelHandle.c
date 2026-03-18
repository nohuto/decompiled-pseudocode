/*
 * XREFs of ObIsKernelHandle @ 0x1402D2BB0
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x14066BDC8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140088ED8 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((unsigned __int64)Handle, 0);
}
