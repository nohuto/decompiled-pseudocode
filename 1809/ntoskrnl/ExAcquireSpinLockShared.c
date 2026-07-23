/*
 * XREFs of ExAcquireSpinLockShared @ 0x14009D700
 * Callers:
 *     RtlpHpAcquireLockShared @ 0x140009644 (RtlpHpAcquireLockShared.c)
 *     RtlpCSparseBitmapLock @ 0x14000AB40 (RtlpCSparseBitmapLock.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x14000D2EC (RtlpHpVaMgrCtxAlloc.c)
 *     ExProtectPoolEx @ 0x14000DED8 (ExProtectPoolEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiEndingOffsetWithLock @ 0x140031000 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x1400310D8 (MiStartingOffsetNeedLock.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     MiLocateSubsectionNode @ 0x140077B30 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x140077D08 (MiGetControlAreaPtes.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140088AE0 (ExReferenceCallBackBlock.c)
 *     MiFindLastSubsection @ 0x140092D30 (MiFindLastSubsection.c)
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     MiAllocateCombineProto @ 0x14009B7E0 (MiAllocateCombineProto.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6A08 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x1400ACC54 (PsGetWorkOnBehalfThread.c)
 *     PfSnGetFileInformation @ 0x1400D4E20 (PfSnGetFileInformation.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1400D9C50 (SepGetSingletonEntryFromIndexNumber.c)
 *     MmIsFileObjectAPagingFile @ 0x1400DEA08 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEC40 (IoSetDiskIoAttributionFromThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1400DF2C8 (IopReferenceIoAttributionFromProcess.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiTrimSection @ 0x1400EAC24 (MiTrimSection.c)
 *     PopPepLockActivityLink @ 0x1400FFB20 (PopPepLockActivityLink.c)
 *     IopFindDiskIoAttribution @ 0x1401057C0 (IopFindDiskIoAttribution.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     MiLookupIoPageNode @ 0x140110160 (MiLookupIoPageNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x140119C68 (MiSystemImageHasPrivateFixups.c)
 *     PsGetNextPartitionUnsafe @ 0x1401201EC (PsGetNextPartitionUnsafe.c)
 *     MiIsProbeActive @ 0x140122F4C (MiIsProbeActive.c)
 *     MiGetPrototypePteRanges @ 0x1401252E4 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x1401304F0 (MiReferencePfBackedSection.c)
 *     ExpRemoveTagForBigPages @ 0x14013E560 (ExpRemoveTagForBigPages.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14014184C (PopPepGetDevicePlatformStateDependents.c)
 *     MiKernelStackVaToStackNode @ 0x140155BC0 (MiKernelStackVaToStackNode.c)
 *     PopFxLockDevice @ 0x14015B158 (PopFxLockDevice.c)
 *     MiRestrictRangeToNode @ 0x14017F3EC (MiRestrictRangeToNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14018EA60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1402A9A10 (MmUnmapReservedMapping.c)
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
 *     SepValidateAndCopyGlobalEntry @ 0x140300928 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14030B7FC (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x14031BE44 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x14057F5CC (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v5; // ett
  _DWORD *v7; // rcx
  int v8; // eax
  int v9; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[5];
        SchedulerAssist[5] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v9 = v7[5] - 1;
          v7[5] = v9;
          if ( !v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
