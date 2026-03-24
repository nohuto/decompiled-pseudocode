/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLargeAllocSize @ 0x1400080E4 (RtlpHpLargeAllocSize.c)
 *     RtlpHpReleaseLockShared @ 0x14000817C (RtlpHpReleaseLockShared.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140009064 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpCSparseBitmapUnlock @ 0x14000A7A0 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x14000D2EC (RtlpHpVaMgrCtxAlloc.c)
 *     ExProtectPoolEx @ 0x14000DED8 (ExProtectPoolEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiStartingOffsetNeedLock @ 0x1400310D8 (MiStartingOffsetNeedLock.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x14006BDB0 (MiLogPageAccess.c)
 *     MiLocateSubsectionNode @ 0x140077B40 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x140077D18 (MiGetControlAreaPtes.c)
 *     MiAbortCombineScan @ 0x140082668 (MiAbortCombineScan.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140088AF0 (ExReferenceCallBackBlock.c)
 *     KiRundownMutants @ 0x1400898BC (KiRundownMutants.c)
 *     MiFindLastSubsection @ 0x140092DF0 (MiFindLastSubsection.c)
 *     MiLockPagableImageSection @ 0x14009ABB0 (MiLockPagableImageSection.c)
 *     ExFreeLargePool @ 0x14009ADD0 (ExFreeLargePool.c)
 *     MiAllocateCombineProto @ 0x14009B8A0 (MiAllocateCombineProto.c)
 *     MiPageToNode @ 0x14009D010 (MiPageToNode.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D1D0 (MiQueueLargeFreeZeroRebuild.c)
 *     MmIsSessionExecutionValid @ 0x14009DB10 (MmIsSessionExecutionValid.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6AC8 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x1400ACD14 (PsGetWorkOnBehalfThread.c)
 *     MiOffsetToProtos @ 0x1400AF830 (MiOffsetToProtos.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BAEA0 (RtlpHpLfhSlotAllocate.c)
 *     KeQueryBasePriorityThread @ 0x1400D2270 (KeQueryBasePriorityThread.c)
 *     PfSnGetFileInformation @ 0x1400D4DA0 (PfSnGetFileInformation.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1400D9BD0 (SepGetSingletonEntryFromIndexNumber.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400DA688 (MmUnlockLoadedModuleListShared.c)
 *     MmIsFileObjectAPagingFile @ 0x1400DE988 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEBC0 (IoSetDiskIoAttributionFromThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1400DF248 (IopReferenceIoAttributionFromProcess.c)
 *     ExpAddTagForBigPages @ 0x1400E7110 (ExpAddTagForBigPages.c)
 *     MiSystemFault @ 0x1400E8900 (MiSystemFault.c)
 *     MiTrimSection @ 0x1400EABA4 (MiTrimSection.c)
 *     KeQueryAffinityProcess @ 0x1400F11E0 (KeQueryAffinityProcess.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F5774 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     PopPepReleaseActivityLink @ 0x1400FF74C (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x1400FFAA0 (PopPepLockActivityLink.c)
 *     IopFindDiskIoAttribution @ 0x140105740 (IopFindDiskIoAttribution.c)
 *     MiLookupIoPageNode @ 0x1401100E0 (MiLookupIoPageNode.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140112488 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeSetLegacyAffinityThread @ 0x1401151F0 (KeSetLegacyAffinityThread.c)
 *     MiSystemImageHasPrivateFixups @ 0x140119BF8 (MiSystemImageHasPrivateFixups.c)
 *     PsGetNextPartitionUnsafe @ 0x14012017C (PsGetNextPartitionUnsafe.c)
 *     MiIsProbeActive @ 0x140122E7C (MiIsProbeActive.c)
 *     MiGetPrototypePteRanges @ 0x140125214 (MiGetPrototypePteRanges.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140126350 (vDbgPrintExWithPrefixInternal.c)
 *     MiReferencePfBackedSection @ 0x140130420 (MiReferencePfBackedSection.c)
 *     DbgEnumerateCallback @ 0x14013B950 (DbgEnumerateCallback.c)
 *     ExpRemoveTagForBigPages @ 0x14013E460 (ExpRemoveTagForBigPages.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14014174C (PopPepGetDevicePlatformStateDependents.c)
 *     MiKernelStackVaToStackNode @ 0x140155AC0 (MiKernelStackVaToStackNode.c)
 *     PopFxLockDevice @ 0x14015B058 (PopFxLockDevice.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1401771DC (MiGetSharedProtosAtDpcLevel.c)
 *     MiRestrictRangeToNode @ 0x14017F2AC (MiRestrictRangeToNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14018E920 (MmMapLockedPagesWithReservedMapping.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B7468 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x1402965C4 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296A80 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x14029D36C (KiSelectCandidateProcessor.c)
 *     MmUnmapReservedMapping @ 0x1402A9820 (MmUnmapReservedMapping.c)
 *     MmReadProcessPageTables @ 0x1402BB89C (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x1402BC020 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 *     MiFreePageToSlabAllocator @ 0x1402C1F80 (MiFreePageToSlabAllocator.c)
 *     MiGetPageFromSlabAllocator @ 0x1402C2680 (MiGetPageFromSlabAllocator.c)
 *     MiGetPrototypePteBoundaries @ 0x1402C7664 (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x1402CC158 (MiTransientCombineAddress.c)
 *     MiTransientPageListWriter @ 0x1402CD894 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x1402DCCC4 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402DCDA0 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1402DCE5C (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402DCF54 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1402DD9BC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1402DDBFC (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x1402EA060 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1402EA47C (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECB6C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD6FC (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1402FE038 (RtlpHpLargeAllocSetExtraPresent.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300738 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14030B690 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x14030B770 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14030BA78 (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x14030CA98 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030CE30 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14030D3F8 (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14030D8D4 (VmpSplitMemoryRange.c)
 *     ExpCheckForResource @ 0x14031BC54 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x14057E5CC (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x14093D1E4 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C2A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockSharedFromDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
  {
    v3 = SchedulerAssist[5] - 1;
    SchedulerAssist[5] = v3;
    if ( !v3 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
}
