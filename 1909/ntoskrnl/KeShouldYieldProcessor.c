/*
 * XREFs of KeShouldYieldProcessor @ 0x140108920
 * Callers:
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiCommitPoolMemory @ 0x140022E20 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140023640 (MiFillPoolCommitPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiProbePacketContended @ 0x1400CB040 (MiProbePacketContended.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400F4884 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1400F7034 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInitializeZeroedPfns @ 0x1400F91EC (MiInitializeZeroedPfns.c)
 *     MiQueryAddressSpan @ 0x140104A80 (MiQueryAddressSpan.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiReadyLargePageToFree @ 0x140146F40 (MiReadyLargePageToFree.c)
 *     MiLargeFreePageToMdl @ 0x14017C02C (MiLargeFreePageToMdl.c)
 *     MiInsertViewOfPhysicalSection @ 0x14019773C (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCCAC (MiUpdatePrivateDemandZeroView.c)
 *     MiSetGraphicsPtes @ 0x1402C2DA0 (MiSetGraphicsPtes.c)
 *     MiShouldYieldProcessor @ 0x1402C4884 (MiShouldYieldProcessor.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x1402CB72C (MiEnableLargeSubsection.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402D35E0 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x1402D6CB0 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiUpdateLargePagePfns @ 0x1402E00FC (MiUpdateLargePagePfns.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 *     MiScrubLargeMappedPage @ 0x1402EC2C8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140108A18 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x14032DE0C (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  LOGICAL v1; // edi
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // ebp
  unsigned int v5; // esi
  _KTHREAD *NextThread; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
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
      KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
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
