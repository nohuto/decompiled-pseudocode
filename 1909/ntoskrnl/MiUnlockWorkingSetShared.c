/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1400AC920
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiUnlockPoolCommitWs @ 0x140023474 (MiUnlockPoolCommitWs.c)
 *     MiDeleteKernelStack @ 0x140024240 (MiDeleteKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14002CE10 (MiAllocateKernelStackPages.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002EA90 (MiSetReadOnlyOnSectionView.c)
 *     MiWalkPageTablesRecursively @ 0x140049540 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140057470 (MiGetVadWakeList.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D3A0 (MiIsCfgBitMapPageShared.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MiReleaseSystemCacheView @ 0x1400700C0 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiFlushDirtyBitsToPfn @ 0x140088BA8 (MiFlushDirtyBitsToPfn.c)
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400B8110 (MiMakeSystemCacheRangeValid.c)
 *     MiMarkPteDirty @ 0x1400B8C20 (MiMarkPteDirty.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400BEC90 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiEncodeProtoFill @ 0x1400C1E14 (MiEncodeProtoFill.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 *     MiConvertAndFlushWsleVas @ 0x1400CAD14 (MiConvertAndFlushWsleVas.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiRelockFaultState @ 0x1400CBD60 (MiRelockFaultState.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D3E1C (MiMakeSystemCachePteValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400D9D04 (MmQuerySystemWorkingSetInformation.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400DE7F4 (MiUnlockProbePacketWorkingSet.c)
 *     MiAllowProtectionChange @ 0x1400E53B0 (MiAllowProtectionChange.c)
 *     MiDeleteSystemPageTables @ 0x1400E7108 (MiDeleteSystemPageTables.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MiInitializeWorkingSetList @ 0x1400EA560 (MiInitializeWorkingSetList.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400F4884 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1400F7034 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400FA0BC (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiQueryAddressSpan @ 0x140104A80 (MiQueryAddressSpan.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x14010DDA8 (MiClearNonPagedPtes.c)
 *     MiComparePteProtections @ 0x140117258 (MiComparePteProtections.c)
 *     MiReleaseWalkLocks @ 0x140117AF0 (MiReleaseWalkLocks.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x14011E578 (MiLockProtoPage.c)
 *     MmQueryWorkingSetInformation @ 0x14011FEF0 (MmQueryWorkingSetInformation.c)
 *     MiMakeProtoLeafValid @ 0x140128F14 (MiMakeProtoLeafValid.c)
 *     MiDirtySystemCachePte @ 0x14012AB8C (MiDirtySystemCachePte.c)
 *     MmQueryCommitReleaseState @ 0x140131454 (MmQueryCommitReleaseState.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MmCheckProcessShadow @ 0x140137AF0 (MmCheckProcessShadow.c)
 *     MmRemoveExecuteGrants @ 0x14013BF24 (MmRemoveExecuteGrants.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 *     MiMapRetpolineStubs @ 0x140154F68 (MiMapRetpolineStubs.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401558AC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockPageTableRange @ 0x1401596C8 (MiLockPageTableRange.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A9F8 (MiEmptyWorkingSetInitiate.c)
 *     MiUnlockPageTableRange @ 0x140166BF0 (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x140167834 (MmStoreDecommitVirtualMemory.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiMapWithLargePages @ 0x14018D3E0 (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x14019773C (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14019C2A4 (MiGetWsAndMakePageTablesNx.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAAEC (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x1402BC454 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x1402BC970 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x1402BCA60 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCCAC (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x1402BD9F4 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x1402BF438 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x1402C09C4 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x1402C2DA0 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x1402C4220 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C458C (MiDeprioritizeVirtualAddresses.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402C624C (MmRemoveSystemCacheFromDump.c)
 *     MiLeapPrefetch @ 0x1402C6688 (MiLeapPrefetch.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x1402C9574 (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x1402CF5E0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CF8F0 (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x1402D1854 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402D35E0 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1402D3800 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402D5188 (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1402D7760 (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D8538 (MiGetWorkingSetInfoEx.c)
 *     MiUnlockFaultWorkingSet @ 0x1402D8CD8 (MiUnlockFaultWorkingSet.c)
 *     MiReleaseLargePteMappings @ 0x1402DD99C (MiReleaseLargePteMappings.c)
 *     MiInsertLargeUserMapping @ 0x1402DFBE4 (MiInsertLargeUserMapping.c)
 *     MiCombineWorkingSet @ 0x1402E5F90 (MiCombineWorkingSet.c)
 *     MiScrubLargeMappedPage @ 0x1402EC2C8 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootKernelStack @ 0x1409EE190 (MiMarkBootKernelStack.c)
 *     MiAddLoaderHalIoMappings @ 0x1409F12C0 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x1409F4394 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x1409FDF14 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiCheckProcessShadow @ 0x1400ACA20 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14012A498 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033ACA4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
      v5 = &dword_140466F00;
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
