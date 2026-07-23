/*
 * XREFs of MiLockWorkingSetShared @ 0x140076040
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiDeleteSystemPageTables @ 0x140027FD4 (MiDeleteSystemPageTables.c)
 *     MiClearNonPagedPtes @ 0x1400282C4 (MiClearNonPagedPtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068260 (MiGetVadWakeList.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressSpan @ 0x140075E90 (MiQueryAddressSpan.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiDeleteKernelStack @ 0x14007A5A0 (MiDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAA0 (MiOutPageSingleKernelStack.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetOptimal @ 0x140088334 (MiLockWorkingSetOptimal.c)
 *     MiComparePteProtections @ 0x140088398 (MiComparePteProtections.c)
 *     MiLockProbePacketWorkingSet @ 0x14009374C (MiLockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x1400939CC (MiEncodeProtoFill.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiLockProtoPage @ 0x1400961E4 (MiLockProtoPage.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     MiSetPagingOfDriver @ 0x1400DAE7C (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiConvertAndFlushWsleVas @ 0x1400EEC60 (MiConvertAndFlushWsleVas.c)
 *     MmQueryWorkingSetInformation @ 0x1400F1168 (MmQueryWorkingSetInformation.c)
 *     MiAllowProtectionChange @ 0x1400F1668 (MiAllowProtectionChange.c)
 *     MiInitializeWorkingSetList @ 0x1400F3230 (MiInitializeWorkingSetList.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 *     MiMakeProtoLeafValid @ 0x14012743C (MiMakeProtoLeafValid.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C2DC (MiFlushDirtyBitsToPfn.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MmQueryCommitReleaseState @ 0x140130A24 (MmQueryCommitReleaseState.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130B04 (MmQuerySystemWorkingSetInformation.c)
 *     MmCheckProcessShadow @ 0x140135CD0 (MmCheckProcessShadow.c)
 *     MmRemoveExecuteGrants @ 0x14013A0A4 (MmRemoveExecuteGrants.c)
 *     MiCombineWorkingSet @ 0x14013DC80 (MiCombineWorkingSet.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142320 (MiEmptyWorkingSetInitiate.c)
 *     MiLockPageTableRange @ 0x140155FEC (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x140157DD8 (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x1401580BC (MmStoreDecommitVirtualMemory.c)
 *     MiJumpStackTarget @ 0x14015EA10 (MiJumpStackTarget.c)
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140191CE0 (MiGetWsAndMakePageTablesNx.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5594 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x1402A5550 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x1402A5A6C (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402A5B5C (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5DA8 (MiUpdatePrivateDemandZeroView.c)
 *     MiGetFileOnlyRanges @ 0x1402A6698 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x1402A8058 (MiReacquireWalkLocks.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC414 (MiDeleteSessionPoolRange.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE89C (MmRemoveSystemCacheFromDump.c)
 *     MiLeapPrefetch @ 0x1402AECD8 (MiLeapPrefetch.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1402B1E4C (MiScrubAwePage.c)
 *     MiSetGraphicsPtes @ 0x1402B2094 (MiSetGraphicsPtes.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4564 (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x1402B9590 (MiCommitHotPatchTable.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BD124 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1402BD344 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402BEC18 (MiWriteEnclavePte.c)
 *     MiGetWorkingSetInfoEx @ 0x1402BF044 (MiGetWorkingSetInfoEx.c)
 *     MiReleaseLargePteMappings @ 0x1402C3B8C (MiReleaseLargePteMappings.c)
 *     MiInsertLargeUserMapping @ 0x1402C59E0 (MiInsertLargeUserMapping.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootKernelStack @ 0x1409B7464 (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x1409BA05C (MiMarkLargePageMappings.c)
 *     MiAddLoaderHalIoMappings @ 0x1409BDC18 (MiAddLoaderHalIoMappings.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     MiReturnDriverLoadPages @ 0x1409F87A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
      v2 = &dword_14043C7C0;
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
