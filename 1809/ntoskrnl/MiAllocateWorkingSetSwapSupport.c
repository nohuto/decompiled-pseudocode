/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1400E59B4
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400E595C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x140124104 (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBC80 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiAllocateWorkingSetSwapSupport(unsigned __int64 a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 *v3; // rbx

  result = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * a1 + 40, 0x53576D4Du);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x28uLL);
    v3[1] = a1;
    *v3 = ((unsigned __int64)v3 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    return v3;
  }
  return result;
}
