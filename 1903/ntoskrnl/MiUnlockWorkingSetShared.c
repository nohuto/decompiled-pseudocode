/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1400CCAA0
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiUnlockPoolCommitWs @ 0x140023084 (MiUnlockPoolCommitWs.c)
 *     MiDeleteKernelStack @ 0x140023E50 (MiDeleteKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1400524E0 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x1400573D0 (MiGetVadWakeList.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D300 (MiIsCfgBitMapPageShared.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiReleaseSystemCacheView @ 0x14006FE50 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MiConvertAndFlushWsleVas @ 0x14008DB04 (MiConvertAndFlushWsleVas.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     MiDeleteSystemPageTables @ 0x1400ABBF8 (MiDeleteSystemPageTables.c)
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     MiAllowProtectionChange @ 0x1400AEE60 (MiAllowProtectionChange.c)
 *     MiQueryAddressSpan @ 0x1400B7C60 (MiQueryAddressSpan.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiMarkPteDirty @ 0x1400D8DA0 (MiMarkPteDirty.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MiEncodeProtoFill @ 0x1400E1F94 (MiEncodeProtoFill.c)
 *     MiInitializeWorkingSetList @ 0x1400E55C0 (MiInitializeWorkingSetList.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400EC148 (MiFlushDirtyBitsToPfn.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400EF004 (MiUnlockProbePacketWorkingSet.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400F17D0 (MmQuerySystemWorkingSetInformation.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiCountSharedPages @ 0x1401007A0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiRelockFaultState @ 0x1401023B0 (MiRelockFaultState.c)
 *     MiLockProtoPage @ 0x140102454 (MiLockProtoPage.c)
 *     MiClearNonPagedPtes @ 0x14010E6B8 (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x140115BE8 (MiComparePteProtections.c)
 *     MiReplaceRotateWithDemandZero @ 0x140116764 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140118F14 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReleaseWalkLocks @ 0x140119A60 (MiReleaseWalkLocks.c)
 *     MmQueryWorkingSetInformation @ 0x14011F1A0 (MmQueryWorkingSetInformation.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiMakeProtoLeafValid @ 0x1401284F4 (MiMakeProtoLeafValid.c)
 *     MiDirtySystemCachePte @ 0x14012A16C (MiDirtySystemCachePte.c)
 *     MmQueryCommitReleaseState @ 0x1401308C4 (MmQueryCommitReleaseState.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MmCheckProcessShadow @ 0x140137170 (MmCheckProcessShadow.c)
 *     MmRemoveExecuteGrants @ 0x14013B904 (MmRemoveExecuteGrants.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiMapRetpolineStubs @ 0x1401548C8 (MiMapRetpolineStubs.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockPageTableRange @ 0x140159028 (MiLockPageTableRange.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A358 (MiEmptyWorkingSetInitiate.c)
 *     MiUnlockPageTableRange @ 0x1401671A0 (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x140167DE4 (MmStoreDecommitVirtualMemory.c)
 *     MiUnmapRetpolineStubs @ 0x14017FF6C (MiUnmapRetpolineStubs.c)
 *     MiMapWithLargePages @ 0x14018CB60 (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140196F5C (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14019BB24 (MiGetWsAndMakePageTablesNx.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAD8C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x1402BC6F4 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x1402BCC10 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402BCD00 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCF4C (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x1402BDC94 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x1402BF6D8 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x1402C3040 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x1402C44C0 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402C64EC (MmRemoveSystemCacheFromDump.c)
 *     MiLeapPrefetch @ 0x1402C6928 (MiLeapPrefetch.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402C9814 (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x1402CF880 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x1402D1AF4 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402D3880 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1402D3AA0 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4AB8 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402D5428 (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1402D7A00 (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D87D8 (MiGetWorkingSetInfoEx.c)
 *     MiUnlockFaultWorkingSet @ 0x1402D8F78 (MiUnlockFaultWorkingSet.c)
 *     MiReleaseLargePteMappings @ 0x1402DDC3C (MiReleaseLargePteMappings.c)
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 *     MiCombineWorkingSet @ 0x1402E6230 (MiCombineWorkingSet.c)
 *     MiScrubLargeMappedPage @ 0x1402EC568 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootKernelStack @ 0x1409EE278 (MiMarkBootKernelStack.c)
 *     MiAddLoaderHalIoMappings @ 0x1409F13B0 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x1409F4484 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x140129A78 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
      v5 = &dword_140467200;
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
