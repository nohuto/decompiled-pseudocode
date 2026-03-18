/*
 * XREFs of MiGetProcessPartition @ 0x140052438
 * Callers:
 *     MmPerformMemoryListCommand @ 0x14059E438 (MmPerformMemoryListCommand.c)
 *     MiReturnFullProcessCommitment @ 0x1405EC7B0 (MiReturnFullProcessCommitment.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MiRemoveVadCharges @ 0x140605D80 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x140606890 (MiDecommitRegion.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiDeleteVadBitmap @ 0x1406708B8 (MiDeleteVadBitmap.c)
 *     MmDeleteProcessAddressSpace @ 0x1406709CC (MmDeleteProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x14068D5F8 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x14068D6D8 (MiAllocateTopLevelPage.c)
 *     MiInSwapStore @ 0x1406A4C38 (MiInSwapStore.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 *     MiCreateVsmEnclave @ 0x140893CDC (MiCreateVsmEnclave.c)
 *     MiGetAweInfoPartition @ 0x140896848 (MiGetAweInfoPartition.c)
 *     MiLogCommitRequestFailed @ 0x1408984C8 (MiLogCommitRequestFailed.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14089B930 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x14089BA2C (MmInSwapVirtualAddresses.c)
 *     MiScrubProcesses @ 0x14089D350 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x1408EDC30 (VmpPauseResumeNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 1454));
}
