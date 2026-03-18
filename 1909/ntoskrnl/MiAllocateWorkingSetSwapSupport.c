/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1400D99CC
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400D9974 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x1400DC0BC (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x140143DDC (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateWorkingSetSwapSupport(__int64 a1)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * a1 + 40, 0x53576D4Du);
  if ( result )
  {
    result[2] = 0LL;
    result[3] = 0LL;
    result[4] = 0LL;
    result[1] = a1;
    *result = ((unsigned __int64)result + 47) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
