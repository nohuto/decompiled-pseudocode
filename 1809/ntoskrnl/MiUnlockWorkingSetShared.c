/*
 * XREFs of MiUnlockWorkingSetShared @ 0x140046970
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiDeleteSystemPageTables @ 0x140027FD4 (MiDeleteSystemPageTables.c)
 *     MiClearNonPagedPtes @ 0x1400282C4 (MiClearNonPagedPtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiDeletePagablePteRange @ 0x140067FE0 (MiDeletePagablePteRange.c)
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
 *     MiReleaseSystemCacheView @ 0x1400795B0 (MiReleaseSystemCacheView.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiDeleteKernelStack @ 0x14007A5B0 (MiDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     MiSplitPrivatePage @ 0x140083B70 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084410 (MiCopyToUserVa.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085B00 (MiSetReadOnlyOnSectionView.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086780 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MiComparePteProtections @ 0x1400883A8 (MiComparePteProtections.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093854 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x140093A8C (MiEncodeProtoFill.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiLockProtoPage @ 0x1400962A4 (MiLockProtoPage.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MiMarkPteDirty @ 0x1400ADFE0 (MiMarkPteDirty.c)
 *     NtUnlockVirtualMemory @ 0x1400B3D70 (NtUnlockVirtualMemory.c)
 *     MiAllocateKernelStackPages @ 0x1400B5640 (MiAllocateKernelStackPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7A60 (MiMakeSystemCachePteValid.c)
 *     MiSetPagingOfDriver @ 0x1400DADDC (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB3F0 (MiMakeDriverPagesPrivate.c)
 *     MiSystemFault @ 0x1400E88E0 (MiSystemFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiConvertAndFlushWsleVas @ 0x1400EEBC0 (MiConvertAndFlushWsleVas.c)
 *     MmQueryWorkingSetInformation @ 0x1400F10C8 (MmQueryWorkingSetInformation.c)
 *     MiAllowProtectionChange @ 0x1400F15C8 (MiAllowProtectionChange.c)
 *     MiInitializeWorkingSetList @ 0x1400F3190 (MiInitializeWorkingSetList.c)
 *     MiCountSharedPages @ 0x14010AC50 (MiCountSharedPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FC18 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReleaseWalkLocks @ 0x140122778 (MiReleaseWalkLocks.c)
 *     MiReplaceRotateWithDemandZero @ 0x1401229D0 (MiReplaceRotateWithDemandZero.c)
 *     MiMakeProtoLeafValid @ 0x14012734C (MiMakeProtoLeafValid.c)
 *     MiDirtySystemCachePte @ 0x140128EE4 (MiDirtySystemCachePte.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C1EC (MiFlushDirtyBitsToPfn.c)
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     MmQueryCommitReleaseState @ 0x140130934 (MmQueryCommitReleaseState.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130A14 (MmQuerySystemWorkingSetInformation.c)
 *     MmCheckProcessShadow @ 0x140135BE0 (MmCheckProcessShadow.c)
 *     MmRemoveExecuteGrants @ 0x140139F84 (MmRemoveExecuteGrants.c)
 *     MiCombineWorkingSet @ 0x14013DB60 (MiCombineWorkingSet.c)
 *     MiLockPagedAddress @ 0x1401408F0 (MiLockPagedAddress.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142200 (MiEmptyWorkingSetInitiate.c)
 *     MiLockPageTableRange @ 0x140155ECC (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x140157CB8 (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x140157F9C (MmStoreDecommitVirtualMemory.c)
 *     MiJumpStackTarget @ 0x14015E8F0 (MiJumpStackTarget.c)
 *     MiReturnNonPagedPoolPde @ 0x140161680 (MiReturnNonPagedPoolPde.c)
 *     MiMapWithLargePages @ 0x140183440 (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CC74 (MiInsertViewOfPhysicalSection.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140191B80 (MiGetWsAndMakePageTablesNx.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5434 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A38CC (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x1402A5260 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x1402A577C (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402A586C (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5AB8 (MiUpdatePrivateDemandZeroView.c)
 *     MiGetFileOnlyRanges @ 0x1402A63A8 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x1402A7D68 (MiReacquireWalkLocks.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402AB0CC (MmReplaceImportEntry.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB5BC (MiDeprioritizeVirtualAddresses.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC124 (MiDeleteSessionPoolRange.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402AE5AC (MmRemoveSystemCacheFromDump.c)
 *     MiLeapPrefetch @ 0x1402AE9E8 (MiLeapPrefetch.c)
 *     MiSwitchToTransition @ 0x1402AF540 (MiSwitchToTransition.c)
 *     MiFreePhysicalPages @ 0x1402B07E0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402B14BC (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1402B1B5C (MiScrubAwePage.c)
 *     MiSetGraphicsPtes @ 0x1402B1DA4 (MiSetGraphicsPtes.c)
 *     MiWriteAwePtes @ 0x1402B2178 (MiWriteAwePtes.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402B4274 (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x1402B92A0 (MiCommitHotPatchTable.c)
 *     MiLockHotPatchPageRange @ 0x1402B95B4 (MiLockHotPatchPageRange.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9894 (MiPrepareImagePagesForHotPatch.c)
 *     MiAddPagesToEnclave @ 0x1402BC7E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BCE34 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1402BD054 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD0D4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE020 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402BE928 (MiWriteEnclavePte.c)
 *     MiGetWorkingSetInfoEx @ 0x1402BED54 (MiGetWorkingSetInfoEx.c)
 *     MiUnlockFaultWorkingSet @ 0x1402BF5C4 (MiUnlockFaultWorkingSet.c)
 *     MiReleaseLargePteMappings @ 0x1402C389C (MiReleaseLargePteMappings.c)
 *     MiInsertLargeUserMapping @ 0x1402C56F0 (MiInsertLargeUserMapping.c)
 *     MiScrubLargeMappedPage @ 0x1402CF138 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootKernelStack @ 0x1409B6464 (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x1409B905C (MiMarkLargePageMappings.c)
 *     MiAddLoaderHalIoMappings @ 0x1409BCC18 (MiAddLoaderHalIoMappings.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 *     MiReturnDriverLoadPages @ 0x1409F7790 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x140130C28 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C1A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  struct _KPRCB *v6; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  int v9; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_BYTE *)(a1 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
LABEL_27:
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 184);
    if ( (v4 & 0x8000000) != 0 || (v4 & 0x4000000) != 0 || (v4 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, a2);
      LOBYTE(v4) = *(_BYTE *)(a1 + 184);
    }
    if ( (v4 & 7) == 2 )
      v5 = &dword_14043B700;
    else
      v5 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
    }
    else
    {
      _InterlockedAnd(v5, 0xBFFFFFFF);
      _InterlockedDecrement(v5);
    }
    v6 = KeGetCurrentPrcb();
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v9 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v9;
        if ( !v9 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      goto LABEL_27;
  }
  result = a2;
  __writecr8(a2);
  return result;
}
