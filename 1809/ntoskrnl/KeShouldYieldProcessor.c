/*
 * XREFs of KeShouldYieldProcessor @ 0x1400F9D60
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressSpan @ 0x140075E90 (MiQueryAddressSpan.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiProbePacketContended @ 0x1400964DC (MiProbePacketContended.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 *     MiLargeFreePageToMdl @ 0x14012B9B8 (MiLargeFreePageToMdl.c)
 *     MiInitializeZeroedPfns @ 0x14013CABC (MiInitializeZeroedPfns.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5DA8 (MiUpdatePrivateDemandZeroView.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC414 (MiDeleteSessionPoolRange.c)
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x1402B1578 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiSetGraphicsPtes @ 0x1402B2094 (MiSetGraphicsPtes.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1402B5EB4 (MiEnableLargeSubsection.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BD124 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiConvertPfnsForLargePage @ 0x1402C53DC (MiConvertPfnsForLargePage.c)
 *     MiUpdateLargePagePfns @ 0x1402C5EE8 (MiUpdateLargePagePfns.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x1403106FC (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  LOGICAL v1; // edi
  __int64 DpcRequestSummary; // rdx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // ebp
  unsigned int v5; // esi
  _KTHREAD *NextThread; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v5 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_8;
      goto LABEL_18;
    }
LABEL_5:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v5 )
    {
LABEL_15:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentPrcb, DpcRequestSummary);
      _enable();
      v5 = 0;
      goto LABEL_8;
    }
LABEL_18:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v5 = 5;
      goto LABEL_8;
    }
    if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
    {
      v5 = 6;
      goto LABEL_8;
    }
    goto LABEL_15;
  }
  v5 = 0;
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v5 = 2;
  }
  else
  {
    if ( !CurrentPrcb->QuantumEnd )
    {
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v5 = 4;
        goto LABEL_8;
      }
      goto LABEL_5;
    }
    v5 = 3;
  }
LABEL_8:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v5, DpcWatchdogCount, DpcTimeCount);
  LOBYTE(v1) = v5 != 0;
  return v1;
}
