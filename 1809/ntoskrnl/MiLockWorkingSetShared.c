/*
 * XREFs of MiLockWorkingSetShared @ 0x140076050
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiDeleteSystemPageTables @ 0x140027FD4 (MiDeleteSystemPageTables.c)
 *     MiClearNonPagedPtes @ 0x1400282C4 (MiClearNonPagedPtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068270 (MiGetVadWakeList.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiProtectPrivateMemory @ 0x140070DC0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressSpan @ 0x140075EA0 (MiQueryAddressSpan.c)
 *     MiIsCfgBitMapPageShared @ 0x140076150 (MiIsCfgBitMapPageShared.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiDeleteKernelStack @ 0x14007A5B0 (MiDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     MiSplitPrivatePage @ 0x140083B70 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084410 (MiCopyToUserVa.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085B00 (MiSetReadOnlyOnSectionView.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetOptimal @ 0x140088344 (MiLockWorkingSetOptimal.c)
 *     MiComparePteProtections @ 0x1400883A8 (MiComparePteProtections.c)
 *     MiLockProbePacketWorkingSet @ 0x14009380C (MiLockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x140093A8C (MiEncodeProtoFill.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiLockProtoPage @ 0x1400962A4 (MiLockProtoPage.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiInPagePageTable @ 0x1400987E0 (MiInPagePageTable.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400B3D90 (NtUnlockVirtualMemory.c)
 *     MiAllocateKernelStackPages @ 0x1400B5660 (MiAllocateKernelStackPages.c)
 *     MiSetPagingOfDriver @ 0x1400DADFC (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB410 (MiMakeDriverPagesPrivate.c)
 *     MiTranslatePageForCopy @ 0x1400E9C30 (MiTranslatePageForCopy.c)
 *     MiSynchronizeSystemVa @ 0x1400E9F68 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400EDC14 (MiLockStealUserVm.c)
 *     MiConvertAndFlushWsleVas @ 0x1400EEBE0 (MiConvertAndFlushWsleVas.c)
 *     MmQueryWorkingSetInformation @ 0x1400F10E8 (MmQueryWorkingSetInformation.c)
 *     MiAllowProtectionChange @ 0x1400F15E8 (MiAllowProtectionChange.c)
 *     MiInitializeWorkingSetList @ 0x1400F31B0 (MiInitializeWorkingSetList.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FC38 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x1401229F0 (MiReplaceRotateWithDemandZero.c)
 *     MiMakeProtoLeafValid @ 0x14012736C (MiMakeProtoLeafValid.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C20C (MiFlushDirtyBitsToPfn.c)
 *     MiSwapStackPage @ 0x14012D180 (MiSwapStackPage.c)
 *     MmQueryCommitReleaseState @ 0x140130954 (MmQueryCommitReleaseState.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130A34 (MmQuerySystemWorkingSetInformation.c)
 *     MmCheckProcessShadow @ 0x140135C00 (MmCheckProcessShadow.c)
 *     MmRemoveExecuteGrants @ 0x140139FA4 (MmRemoveExecuteGrants.c)
 *     MiCombineWorkingSet @ 0x14013DB80 (MiCombineWorkingSet.c)
 *     MiLockPagedAddress @ 0x140140910 (MiLockPagedAddress.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142220 (MiEmptyWorkingSetInitiate.c)
 *     MiLockPageTableRange @ 0x140155EEC (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x140157CD8 (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x140157FBC (MmStoreDecommitVirtualMemory.c)
 *     MiJumpStackTarget @ 0x14015E910 (MiJumpStackTarget.c)
 *     MiReturnNonPagedPoolPde @ 0x1401616A0 (MiReturnNonPagedPoolPde.c)
 *     MiMapWithLargePages @ 0x140183460 (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CC94 (MiInsertViewOfPhysicalSection.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140191BA0 (MiGetWsAndMakePageTablesNx.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5454 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A39CC (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x1402A5360 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x1402A587C (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402A596C (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5BB8 (MiUpdatePrivateDemandZeroView.c)
 *     MiGetFileOnlyRanges @ 0x1402A64A8 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x1402A7E68 (MiReacquireWalkLocks.c)
 *     MiSetPagesModified @ 0x1402AA7EC (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402AB1CC (MmReplaceImportEntry.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB6BC (MiDeprioritizeVirtualAddresses.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC224 (MiDeleteSessionPoolRange.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE6AC (MmRemoveSystemCacheFromDump.c)
 *     MiLeapPrefetch @ 0x1402AEAE8 (MiLeapPrefetch.c)
 *     MiSwitchToTransition @ 0x1402AF640 (MiSwitchToTransition.c)
 *     MiFreePhysicalPages @ 0x1402B08E0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402B15BC (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1402B1C5C (MiScrubAwePage.c)
 *     MiSetGraphicsPtes @ 0x1402B1EA4 (MiSetGraphicsPtes.c)
 *     MiWriteAwePtes @ 0x1402B2278 (MiWriteAwePtes.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4374 (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x1402B93A0 (MiCommitHotPatchTable.c)
 *     MiLockHotPatchPageRange @ 0x1402B96B4 (MiLockHotPatchPageRange.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9994 (MiPrepareImagePagesForHotPatch.c)
 *     MiAddPagesToEnclave @ 0x1402BC8E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BCF34 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1402BD154 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE120 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402BEA28 (MiWriteEnclavePte.c)
 *     MiGetWorkingSetInfoEx @ 0x1402BEE54 (MiGetWorkingSetInfoEx.c)
 *     MiReleaseLargePteMappings @ 0x1402C399C (MiReleaseLargePteMappings.c)
 *     MiInsertLargeUserMapping @ 0x1402C57F0 (MiInsertLargeUserMapping.c)
 *     MiScrubLargeMappedPage @ 0x1402CF238 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x140715720 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootKernelStack @ 0x1409B6464 (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x1409B905C (MiMarkLargePageMappings.c)
 *     MiAddLoaderHalIoMappings @ 0x1409BCC18 (MiAddLoaderHalIoMappings.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 *     MiReturnDriverLoadPages @ 0x1409F77A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E77A0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C164 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  unsigned __int8 v1; // al
  LONG *v2; // rbx
  unsigned __int8 v3; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v6; // ett
  unsigned __int8 CurrentIrql; // r8
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax

  v1 = *(_BYTE *)(a1 + 184) & 7;
  if ( v1 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    return CurrentIrql;
  }
  else
  {
    if ( v1 == 2 )
      v2 = &dword_14043B700;
    else
      v2 = (LONG *)(a1 + 192);
    v3 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, v3);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = SchedulerAssist[5];
          SchedulerAssist[5] = v10 + 1;
          if ( v10 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v2);
      v6 = *v2 & 0x7FFFFFFF;
      if ( v6 != _InterlockedCompareExchange(v2, v6 + 1, v6) )
      {
        v9 = CurrentPrcb->SchedulerAssist;
        if ( v9 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v11 = v9[5] - 1;
            v9[5] = v11;
            if ( !v11 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v2, v3);
      }
    }
    if ( v2[1] )
      _InterlockedExchange(v2 + 1, 0);
    return v3;
  }
}
