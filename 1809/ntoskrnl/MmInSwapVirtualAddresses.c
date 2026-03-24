/*
 * XREFs of MmInSwapVirtualAddresses @ 0x14085ECDC
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140309180 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1400E5A94 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiContractWsSwapPageFile @ 0x14066B784 (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x14066B7C8 (EtwTraceWorkingSetSwap.c)
 */

__int64 __fastcall MmInSwapVirtualAddresses(PEPROCESS Process, PVOID P)
{
  __int64 ProcessPartition; // rbx
  _DWORD v6[10]; // [rsp+20h] [rbp-38h] BYREF

  v6[0] = 2;
  EtwTraceWorkingSetSwap(Process, 3, (__int64)v6);
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  MiProcessWsInSwapSupport((__int64)P, 2u);
  ExFreePoolWithTag(P, 0);
  MiContractWsSwapPageFile(ProcessPartition);
  v6[8] = 0;
  EtwTraceWorkingSetSwap(Process, 1, (__int64)v6);
  return 0LL;
}
