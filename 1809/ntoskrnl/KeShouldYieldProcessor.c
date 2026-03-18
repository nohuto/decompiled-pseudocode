/*
 * XREFs of KeShouldYieldProcessor @ 0x1400F9CC0
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressSpan @ 0x140075EA0 (MiQueryAddressSpan.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiProbePacketContended @ 0x14009659C (MiProbePacketContended.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400B3D70 (NtUnlockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FC18 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x1401229D0 (MiReplaceRotateWithDemandZero.c)
 *     MiLargeFreePageToMdl @ 0x14012B8C8 (MiLargeFreePageToMdl.c)
 *     MiInitializeZeroedPfns @ 0x14013C99C (MiInitializeZeroedPfns.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CC74 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5AB8 (MiUpdatePrivateDemandZeroView.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC124 (MiDeleteSessionPoolRange.c)
 *     MiFreePhysicalPages @ 0x1402B07E0 (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x1402B1288 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiSetGraphicsPtes @ 0x1402B1DA4 (MiSetGraphicsPtes.c)
 *     MiWriteAwePtes @ 0x1402B2178 (MiWriteAwePtes.c)
 *     MiDecrementLargeSubsections @ 0x1402B5714 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1402B5BC4 (MiEnableLargeSubsection.c)
 *     MiAddPagesToEnclave @ 0x1402BC7E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BCE34 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD0D4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE020 (MiProtectEnclavePages.c)
 *     MiConvertPfnsForLargePage @ 0x1402C50EC (MiConvertPfnsForLargePage.c)
 *     MiUpdateLargePagePfns @ 0x1402C5BF8 (MiUpdateLargePagePfns.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiScrubLargeMappedPage @ 0x1402CF138 (MiScrubLargeMappedPage.c)
 *     MiTransferPartitionPageRun @ 0x1402D25F8 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB3A8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x14031040C (EtwTraceShouldYieldProcessor.c)
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
