/*
 * XREFs of ExAcquireSpinLockShared @ 0x140061A20
 * Callers:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     PsGetWorkOnBehalfThread @ 0x14000D5BC (PsGetWorkOnBehalfThread.c)
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x14001D290 (ExReferenceCallBackBlock.c)
 *     RtlpHpAcquireLockShared @ 0x14001DBB0 (RtlpHpAcquireLockShared.c)
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     MiGetControlAreaPtes @ 0x140072780 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140073710 (MiLocateSubsectionNode.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140085B3C (SepGetSingletonEntryFromIndexNumber.c)
 *     MiFindLastSubsection @ 0x140088FD8 (MiFindLastSubsection.c)
 *     InsertEventEntryInLookUpTable @ 0x14008BBAC (InsertEventEntryInLookUpTable.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140090E88 (IopReferenceIoAttributionFromProcess.c)
 *     MmIsFileObjectAPagingFile @ 0x140094E58 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140095080 (IoSetDiskIoAttributionFromThread.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400B8110 (MiMakeSystemCacheRangeValid.c)
 *     MiStartingOffsetNeedLock @ 0x1400B8B88 (MiStartingOffsetNeedLock.c)
 *     MiTrimSection @ 0x1400C0BB0 (MiTrimSection.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400CF360 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PfSnGetFileInformation @ 0x1400D20B0 (PfSnGetFileInformation.c)
 *     PopPepLockActivityLink @ 0x1400E2458 (PopPepLockActivityLink.c)
 *     IopFindDiskIoAttribution @ 0x1400EC260 (IopFindDiskIoAttribution.c)
 *     ExProtectPoolEx @ 0x1400ECB9C (ExProtectPoolEx.c)
 *     MiIsProbeActive @ 0x1400F4D24 (MiIsProbeActive.c)
 *     ExRemovePoolTag @ 0x1400F59A8 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x1400F7460 (MiLookupIoPageNode.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x14010E8A8 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x14010F534 (RtlpCSparseBitmapLock.c)
 *     MiSystemImageHasPrivateFixups @ 0x14011A96C (MiSystemImageHasPrivateFixups.c)
 *     PsGetNextPartitionUnsafe @ 0x14012336C (PsGetNextPartitionUnsafe.c)
 *     MiGetPrototypePteRanges @ 0x140128B0C (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x14012F47C (MiReferencePfBackedSection.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14015AC7C (PopPepGetDevicePlatformStateDependents.c)
 *     MiKernelStackVaToStackNode @ 0x140164454 (MiKernelStackVaToStackNode.c)
 *     PopFxLockDevice @ 0x140174320 (PopFxLockDevice.c)
 *     MiRestrictRangeToNode @ 0x140189354 (MiRestrictRangeToNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140198D30 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1402C0E60 (MmUnmapReservedMapping.c)
 *     MiGenerateAccessViolation @ 0x1402D25BC (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiCheckSlabPage @ 0x1402DB4CC (MiCheckSlabPage.c)
 *     MiFreePageToSlabAllocator @ 0x1402DB6C0 (MiFreePageToSlabAllocator.c)
 *     MiGetPageFromSlabAllocator @ 0x1402DBD8C (MiGetPageFromSlabAllocator.c)
 *     MiGetSlabStandbyListWorker @ 0x1402DC2F0 (MiGetSlabStandbyListWorker.c)
 *     MiGetPrototypePteBoundaries @ 0x1402E1648 (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x1402E64A0 (MiTransientCombineAddress.c)
 *     MiTransientPageListWriter @ 0x1402E7814 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x1402F8F20 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402F8FFC (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1402F90B8 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1402F91B0 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1402F9D4C (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1402FA638 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140307600 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140307A14 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14031E3FC (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140328D48 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x14033918C (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x14033A5C4 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1405AE4B4 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
