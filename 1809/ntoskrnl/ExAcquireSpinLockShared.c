/*
 * XREFs of ExAcquireSpinLockShared @ 0x14009D7C0
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
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiLogPageAccess @ 0x14006BDB0 (MiLogPageAccess.c)
 *     MiLocateSubsectionNode @ 0x140077B40 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x140077D18 (MiGetControlAreaPtes.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140088AF0 (ExReferenceCallBackBlock.c)
 *     MiFindLastSubsection @ 0x140092DF0 (MiFindLastSubsection.c)
 *     ExFreeLargePool @ 0x14009ADD0 (ExFreeLargePool.c)
 *     MiAllocateCombineProto @ 0x14009B8A0 (MiAllocateCombineProto.c)
 *     MiPageToNode @ 0x14009D010 (MiPageToNode.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6AA8 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x1400ACCF4 (PsGetWorkOnBehalfThread.c)
 *     PfSnGetFileInformation @ 0x1400D4D80 (PfSnGetFileInformation.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1400D9BB0 (SepGetSingletonEntryFromIndexNumber.c)
 *     MmIsFileObjectAPagingFile @ 0x1400DE968 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEBA0 (IoSetDiskIoAttributionFromThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1400DF228 (IopReferenceIoAttributionFromProcess.c)
 *     MiSystemFault @ 0x1400E88E0 (MiSystemFault.c)
 *     MiTrimSection @ 0x1400EAB84 (MiTrimSection.c)
 *     PopPepLockActivityLink @ 0x1400FFA80 (PopPepLockActivityLink.c)
 *     IopFindDiskIoAttribution @ 0x140105720 (IopFindDiskIoAttribution.c)
 *     MiCountSharedPages @ 0x14010AC50 (MiCountSharedPages.c)
 *     MiLookupIoPageNode @ 0x1401100C0 (MiLookupIoPageNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x140119BD8 (MiSystemImageHasPrivateFixups.c)
 *     PsGetNextPartitionUnsafe @ 0x14012015C (PsGetNextPartitionUnsafe.c)
 *     MiIsProbeActive @ 0x140122E5C (MiIsProbeActive.c)
 *     MiGetPrototypePteRanges @ 0x1401251F4 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x140130400 (MiReferencePfBackedSection.c)
 *     ExpRemoveTagForBigPages @ 0x14013E440 (ExpRemoveTagForBigPages.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14014172C (PopPepGetDevicePlatformStateDependents.c)
 *     MiKernelStackVaToStackNode @ 0x140155AA0 (MiKernelStackVaToStackNode.c)
 *     PopFxLockDevice @ 0x14015B038 (PopFxLockDevice.c)
 *     MiRestrictRangeToNode @ 0x14017F28C (MiRestrictRangeToNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14018E900 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1402A9720 (MmUnmapReservedMapping.c)
 *     MiGenerateAccessViolation @ 0x1402BBF20 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD0D4 (MiDecommitHardwareEnclavePages.c)
 *     MiFreePageToSlabAllocator @ 0x1402C1E80 (MiFreePageToSlabAllocator.c)
 *     MiGetPageFromSlabAllocator @ 0x1402C2580 (MiGetPageFromSlabAllocator.c)
 *     MiGetPrototypePteBoundaries @ 0x1402C7564 (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x1402CC058 (MiTransientCombineAddress.c)
 *     MiTransientPageListWriter @ 0x1402CD794 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x1402DCBC4 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402DCCA0 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1402DCD5C (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402DCE54 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1402DD8BC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1402DDAFC (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x1402E9F60 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1402EA37C (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300638 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14030B50C (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x14031BB54 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x14057E5CC (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7780 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C064 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
