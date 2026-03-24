/*
 * XREFs of MiGetProcessPartition @ 0x14004D19C
 * Callers:
 *     MmPerformMemoryListCommand @ 0x14056EA20 (MmPerformMemoryListCommand.c)
 *     MiChargeFullProcessCommitment @ 0x1405E0510 (MiChargeFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x1405EC220 (MiDecommitRegion.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1405F2998 (MiReturnFullProcessCommitment.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140608CFC (MiDeleteVadBitmap.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     MiInSwapStore @ 0x1406D0DCC (MiInSwapStore.c)
 *     MiAllocateProcessShadow @ 0x1406D1AEC (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406D1BCC (MiAllocateTopLevelPage.c)
 *     MiSessionCreate @ 0x140715008 (MiSessionCreate.c)
 *     MiGetAweInfoPartition @ 0x14084FED0 (MiGetAweInfoPartition.c)
 *     MiCreateVsmEnclave @ 0x140859DA8 (MiCreateVsmEnclave.c)
 *     MiLogCommitRequestFailed @ 0x14085B938 (MiLogCommitRequestFailed.c)
 *     MiMapUserLargePages @ 0x14085D558 (MiMapUserLargePages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14085EA70 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x14085ECDC (MmInSwapVirtualAddresses.c)
 *     MiScrubProcesses @ 0x14085FBC0 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x1408B0778 (VmpPauseResumeNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(a1 + 1454));
}
