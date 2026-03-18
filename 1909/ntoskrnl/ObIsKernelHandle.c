/*
 * XREFs of ObIsKernelHandle @ 0x140144A80
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1406517C8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140082CB0 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((unsigned __int64)Handle, 0);
}
