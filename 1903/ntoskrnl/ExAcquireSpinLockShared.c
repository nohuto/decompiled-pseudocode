/*
 * XREFs of ExAcquireSpinLockShared @ 0x140061980
 * Callers:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     PsGetWorkOnBehalfThread @ 0x14000D38C (PsGetWorkOnBehalfThread.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     RtlpHpAcquireLockShared @ 0x14001D7C0 (RtlpHpAcquireLockShared.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     MiGetControlAreaPtes @ 0x140072510 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1400734A0 (MiLocateSubsectionNode.c)
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14008573C (SepGetSingletonEntryFromIndexNumber.c)
 *     InsertEventEntryInLookUpTable @ 0x14008A8AC (InsertEventEntryInLookUpTable.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140092040 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PfSnGetFileInformation @ 0x140094D90 (PfSnGetFileInformation.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MmIsFileObjectAPagingFile @ 0x1400A78B8 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400A7AE0 (IoSetDiskIoAttributionFromThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1400A9B88 (IopReferenceIoAttributionFromProcess.c)
 *     PopPepLockActivityLink @ 0x1400B2370 (PopPepLockActivityLink.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiStartingOffsetNeedLock @ 0x1400D8D08 (MiStartingOffsetNeedLock.c)
 *     MiTrimSection @ 0x1400E0D30 (MiTrimSection.c)
 *     IopFindDiskIoAttribution @ 0x1400E72C0 (IopFindDiskIoAttribution.c)
 *     MiFindLastSubsection @ 0x1400EAE78 (MiFindLastSubsection.c)
 *     PsGetNextPartitionUnsafe @ 0x1400F97DC (PsGetNextPartitionUnsafe.c)
 *     MiCountSharedPages @ 0x1401007A0 (MiCountSharedPages.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x14010F1B8 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x14010FE44 (RtlpCSparseBitmapLock.c)
 *     MiIsProbeActive @ 0x140116C04 (MiIsProbeActive.c)
 *     ExRemovePoolTag @ 0x140117888 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x140119340 (MiLookupIoPageNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x14011C30C (MiSystemImageHasPrivateFixups.c)
 *     ExProtectPoolEx @ 0x14012496C (ExProtectPoolEx.c)
 *     MiGetPrototypePteRanges @ 0x1401280EC (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x14012EB2C (MiReferencePfBackedSection.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14015A5DC (PopPepGetDevicePlatformStateDependents.c)
 *     MiKernelStackVaToStackNode @ 0x140164A04 (MiKernelStackVaToStackNode.c)
 *     PopFxLockDevice @ 0x140173BF0 (PopFxLockDevice.c)
 *     MiRestrictRangeToNode @ 0x140188DA4 (MiRestrictRangeToNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401986D0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1402C1100 (MmUnmapReservedMapping.c)
 *     MiGenerateAccessViolation @ 0x1402D285C (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiCheckSlabPage @ 0x1402DB76C (MiCheckSlabPage.c)
 *     MiFreePageToSlabAllocator @ 0x1402DB960 (MiFreePageToSlabAllocator.c)
 *     MiGetPageFromSlabAllocator @ 0x1402DC02C (MiGetPageFromSlabAllocator.c)
 *     MiGetSlabStandbyListWorker @ 0x1402DC590 (MiGetSlabStandbyListWorker.c)
 *     MiGetPrototypePteBoundaries @ 0x1402E18E8 (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x1402E6740 (MiTransientCombineAddress.c)
 *     MiTransientPageListWriter @ 0x1402E7AB4 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x1402F9470 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402F954C (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1402F9608 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402F9700 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1402FA29C (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1402FAB88 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140307B50 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140307F64 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14031E9AC (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1403292F8 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x14033972C (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x14033AB64 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1405AE4D4 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
