/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050
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
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     MiLocateSubsectionNode @ 0x140077B30 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x140077D08 (MiGetControlAreaPtes.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140088AE0 (ExReferenceCallBackBlock.c)
 *     KiRundownMutants @ 0x1400898AC (KiRundownMutants.c)
 *     MiFindLastSubsection @ 0x140092D30 (MiFindLastSubsection.c)
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     MiAllocateCombineProto @ 0x14009B7E0 (MiAllocateCombineProto.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     MmIsSessionExecutionValid @ 0x14009DA50 (MmIsSessionExecutionValid.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6A08 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x1400ACC54 (PsGetWorkOnBehalfThread.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     KeQueryBasePriorityThread @ 0x1400D22F0 (KeQueryBasePriorityThread.c)
 *     PfSnGetFileInformation @ 0x1400D4E20 (PfSnGetFileInformation.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1400D9C50 (SepGetSingletonEntryFromIndexNumber.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400DA708 (MmUnlockLoadedModuleListShared.c)
 *     MmIsFileObjectAPagingFile @ 0x1400DEA08 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEC40 (IoSetDiskIoAttributionFromThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1400DF2C8 (IopReferenceIoAttributionFromProcess.c)
 *     ExpAddTagForBigPages @ 0x1400E7190 (ExpAddTagForBigPages.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiTrimSection @ 0x1400EAC24 (MiTrimSection.c)
 *     KeQueryAffinityProcess @ 0x1400F1260 (KeQueryAffinityProcess.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F57F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     PopPepReleaseActivityLink @ 0x1400FF7CC (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x1400FFB20 (PopPepLockActivityLink.c)
 *     IopFindDiskIoAttribution @ 0x1401057C0 (IopFindDiskIoAttribution.c)
 *     MiLookupIoPageNode @ 0x140110160 (MiLookupIoPageNode.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1401124F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeSetLegacyAffinityThread @ 0x140115260 (KeSetLegacyAffinityThread.c)
 *     MiSystemImageHasPrivateFixups @ 0x140119C68 (MiSystemImageHasPrivateFixups.c)
 *     PsGetNextPartitionUnsafe @ 0x1401201EC (PsGetNextPartitionUnsafe.c)
 *     MiIsProbeActive @ 0x140122F4C (MiIsProbeActive.c)
 *     MiGetPrototypePteRanges @ 0x1401252E4 (MiGetPrototypePteRanges.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140126420 (vDbgPrintExWithPrefixInternal.c)
 *     MiReferencePfBackedSection @ 0x1401304F0 (MiReferencePfBackedSection.c)
 *     DbgEnumerateCallback @ 0x14013BA50 (DbgEnumerateCallback.c)
 *     ExpRemoveTagForBigPages @ 0x14013E560 (ExpRemoveTagForBigPages.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14014184C (PopPepGetDevicePlatformStateDependents.c)
 *     MiKernelStackVaToStackNode @ 0x140155BC0 (MiKernelStackVaToStackNode.c)
 *     PopFxLockDevice @ 0x14015B158 (PopFxLockDevice.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1401772DC (MiGetSharedProtosAtDpcLevel.c)
 *     MiRestrictRangeToNode @ 0x14017F3EC (MiRestrictRangeToNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14018EA60 (MmMapLockedPagesWithReservedMapping.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x1402967B4 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x14029D55C (KiSelectCandidateProcessor.c)
 *     MmUnmapReservedMapping @ 0x1402A9A10 (MmUnmapReservedMapping.c)
 *     MmReadProcessPageTables @ 0x1402BBA8C (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x1402BC210 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiFreePageToSlabAllocator @ 0x1402C2170 (MiFreePageToSlabAllocator.c)
 *     MiGetPageFromSlabAllocator @ 0x1402C2870 (MiGetPageFromSlabAllocator.c)
 *     MiGetPrototypePteBoundaries @ 0x1402C7854 (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x1402CC348 (MiTransientCombineAddress.c)
 *     MiTransientPageListWriter @ 0x1402CDA84 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x1402DCEB4 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402DCF90 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1402DD04C (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402DD144 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1402DDBAC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1402DDDEC (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x1402EA250 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1402EA66C (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECD5C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD8EC (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1402FE228 (RtlpHpLargeAllocSetExtraPresent.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300928 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14030B880 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x14030B960 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14030BC68 (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x14030CC88 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030D020 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14030D5E8 (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14030DAC4 (VmpSplitMemoryRange.c)
 *     ExpCheckForResource @ 0x14031BE44 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x14057F5CC (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x14093E1E4 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
