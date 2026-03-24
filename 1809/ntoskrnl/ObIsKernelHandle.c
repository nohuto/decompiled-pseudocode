/*
 * XREFs of ObIsKernelHandle @ 0x1402D2CB0
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x14066BDA8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140088ED8 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((unsigned __int64)Handle, 0);
}
