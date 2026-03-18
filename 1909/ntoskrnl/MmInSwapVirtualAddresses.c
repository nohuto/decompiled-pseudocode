/*
 * XREFs of MmInSwapVirtualAddresses @ 0x14089B24C
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140143D98 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1400D9A20 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwTraceWorkingSetSwap @ 0x140673710 (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140673854 (MiContractWsSwapPageFile.c)
 */

__int64 __fastcall MmInSwapVirtualAddresses(PEPROCESS Process, PVOID P)
{
  __int64 ProcessPartition; // rbx
  _DWORD v6[10]; // [rsp+20h] [rbp-38h] BYREF

  memset(v6, 0, sizeof(v6));
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
