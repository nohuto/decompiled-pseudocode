/*
 * XREFs of MiGetProcessPartition @ 0x1400524D8
 * Callers:
 *     MmPerformMemoryListCommand @ 0x14059E418 (MmPerformMemoryListCommand.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x140605690 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MiRemoveVadCharges @ 0x140607890 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1406083A0 (MiDecommitRegion.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MmDeleteProcessAddressSpace @ 0x140644438 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x1406445A0 (MiDeleteVadBitmap.c)
 *     MiAllocateProcessShadow @ 0x14064495C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140646B08 (MiAllocateTopLevelPage.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     MiInSwapStore @ 0x1406F4C34 (MiInSwapStore.c)
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 *     MiCreateVsmEnclave @ 0x1408934FC (MiCreateVsmEnclave.c)
 *     MiGetAweInfoPartition @ 0x140896068 (MiGetAweInfoPartition.c)
 *     MiLogCommitRequestFailed @ 0x140897CE8 (MiLogCommitRequestFailed.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14089B150 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x14089B24C (MmInSwapVirtualAddresses.c)
 *     MiScrubProcesses @ 0x14089CB70 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x1408ED540 (VmpPauseResumeNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
}
