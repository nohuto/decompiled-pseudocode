/*
 * XREFs of MiUnlockPageTableInternal @ 0x1400FDF40
 * Callers:
 *     MiUnlockFaultPageTable @ 0x140007064 (MiUnlockFaultPageTable.c)
 *     MiFillHyperPtes @ 0x14001F650 (MiFillHyperPtes.c)
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x140022C50 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x140023084 (MiUnlockPoolCommitWs.c)
 *     MiFillPoolCommitPageTable @ 0x140023250 (MiFillPoolCommitPageTable.c)
 *     MiDeleteKernelStack @ 0x140023E50 (MiDeleteKernelStack.c)
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14004A9F0 (MiGetNextPageTablePte.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14004D420 (MiClearPteAccessed.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1400524E0 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D300 (MiIsCfgBitMapPageShared.c)
 *     MiEvictPageTableLock @ 0x14005E164 (MiEvictPageTableLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14005E2E0 (MiUnlockNestedPageTableWritePte.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiReleaseSystemCacheView @ 0x14006FE50 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiConvertAndFlushWsleVas @ 0x14008DB04 (MiConvertAndFlushWsleVas.c)
 *     MiLockPageLeafPageTable @ 0x14008F490 (MiLockPageLeafPageTable.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiMarkPteDirty @ 0x1400D8DA0 (MiMarkPteDirty.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MiEncodeProtoFill @ 0x1400E1F94 (MiEncodeProtoFill.c)
 *     MiInitializeWorkingSetList @ 0x1400E55C0 (MiInitializeWorkingSetList.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400EC148 (MiFlushDirtyBitsToPfn.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400EF004 (MiUnlockProbePacketWorkingSet.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiCountSharedPages @ 0x1401007A0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiRelockFaultState @ 0x1401023B0 (MiRelockFaultState.c)
 *     MiReplaceRotateWithDemandZero @ 0x140116764 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140118F14 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReleaseWalkLocks @ 0x140119A60 (MiReleaseWalkLocks.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiMakeProtoLeafValid @ 0x1401284F4 (MiMakeProtoLeafValid.c)
 *     MiDirtySystemCachePte @ 0x14012A16C (MiDirtySystemCachePte.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockPageTableRange @ 0x140159028 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x1401671A0 (MiUnlockPageTableRange.c)
 *     MiGetNextNonGapPfnPage @ 0x140185FA8 (MiGetNextNonGapPfnPage.c)
 *     MiMapWithLargePages @ 0x14018CB60 (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140196F5C (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14019BB24 (MiGetWsAndMakePageTablesNx.c)
 *     MiUnlockPageTable @ 0x14019D098 (MiUnlockPageTable.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAD8C (MiCheckCommitReleaseFromVad.c)
 *     MiFaultInPagedPool @ 0x1402BCD00 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCF4C (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiReacquireWalkLocks @ 0x1402BF6D8 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x1402C3040 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x1402C44C0 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiCommitHotPatchTable @ 0x1402CF880 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x1402D1AF4 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402D3880 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4AB8 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402D5428 (MiWriteEnclavePte.c)
 *     MiDeleteAwePageTable @ 0x1402D5948 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1402D7A00 (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402D8CA4 (MiWorkingSetInfoCheckPageTable.c)
 *     MiReleaseLargePteMappings @ 0x1402DDC3C (MiReleaseLargePteMappings.c)
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 *     MiScrubLargeMappedPage @ 0x1402EC568 (MiScrubLargeMappedPage.c)
 *     MiMarkBootKernelStack @ 0x1409EE278 (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  char v3; // dl
  signed __int64 v4; // rdx
  bool v5; // zf
  signed __int64 v6; // rax
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v8; // eax
  int v9; // edx
  signed __int32 v10; // ett
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // r9
  int v15; // eax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a1 + 184) & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v3 )
    {
      if ( v3 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&KeGetCurrentPrcb()->SelfmapLockHandle[1]);
        return;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v3 == 5 )
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
      else
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
    return;
  }
  if ( v3 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v19);
      v8 = *PageTableLockBuffer;
      v9 = ~(3 << v19);
      do
      {
        v10 = v8;
        v8 = _InterlockedCompareExchange(PageTableLockBuffer, v8 & v9, v8);
      }
      while ( v10 != v8 );
      return;
    }
  }
  else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v12 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
    if ( v12 )
    {
      v14 = (a2 >> 3) & 0x1FF;
      v15 = *(_DWORD *)(v12 + 4 * v14);
      if ( (v15 & 0x3FFFFFFF) != 0 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v12 + 4 * v14));
      }
      else
      {
        if ( v15 >= 0 )
          KeBugCheckEx(0x10u, v12 + 4 * v14, 0x100uLL, 0LL, 0LL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 4 * v14));
      }
      return;
    }
  }
  v4 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v17 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
      v18 = v4 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = *(_QWORD *)a2;
      v4 = v18;
      if ( (v17 & 0x42) != 0 )
        v4 = v18 | 0x42;
    }
  }
  do
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v4 & 0xCFFFFFFFFFFFFFFFuLL, v4);
    v5 = v4 == v6;
    v4 = v6;
  }
  while ( !v5 );
}
