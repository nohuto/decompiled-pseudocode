/*
 * XREFs of MiUnlockPageTableInternal @ 0x140104B10
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiUnlockFaultPageTable @ 0x14001BC3C (MiUnlockFaultPageTable.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiLockPageLeafPageTable @ 0x140041DD0 (MiLockPageLeafPageTable.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14006B770 (MiClearPteAccessed.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140070A20 (MiGetNextPageTablePte.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiDeleteKernelStack @ 0x14007A5A0 (MiDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAA0 (MiOutPageSingleKernelStack.c)
 *     MiComputePageCommitment @ 0x140083940 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093794 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x1400939CC (MiEncodeProtoFill.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140098414 (MiUnlockNestedPageTableWritePte.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiMarkPteDirty @ 0x1400ADF40 (MiMarkPteDirty.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7B00 (MiMakeSystemCachePteValid.c)
 *     MiSetPagingOfDriver @ 0x1400DAE7C (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiConvertAndFlushWsleVas @ 0x1400EEC60 (MiConvertAndFlushWsleVas.c)
 *     MiInitializeWorkingSetList @ 0x1400F3230 (MiInitializeWorkingSetList.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReleaseWalkLocks @ 0x140122868 (MiReleaseWalkLocks.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 *     MiMakeProtoLeafValid @ 0x14012743C (MiMakeProtoLeafValid.c)
 *     MiDirtySystemCachePte @ 0x140128FD4 (MiDirtySystemCachePte.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C2DC (MiFlushDirtyBitsToPfn.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiLockPageTableRange @ 0x140155FEC (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x140157DD8 (MiUnlockPageTableRange.c)
 *     MiJumpStackTarget @ 0x14015EA10 (MiJumpStackTarget.c)
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x1401845A8 (MiGetNextNonGapPfnPage.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140191CE0 (MiGetWsAndMakePageTablesNx.c)
 *     MiUnlockPageTable @ 0x140192E68 (MiUnlockPageTable.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5594 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 *     MiFaultInPagedPool @ 0x1402A5B5C (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5DA8 (MiUpdatePrivateDemandZeroView.c)
 *     MiReacquireWalkLocks @ 0x1402A8058 (MiReacquireWalkLocks.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC414 (MiDeleteSessionPoolRange.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiDeleteAwePageTable @ 0x1402B0424 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1402B1E4C (MiScrubAwePage.c)
 *     MiSetGraphicsPtes @ 0x1402B2094 (MiSetGraphicsPtes.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiCommitHotPatchTable @ 0x1402B9590 (MiCommitHotPatchTable.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BD124 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402BEC18 (MiWriteEnclavePte.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402BF4D4 (MiWorkingSetInfoCheckPageTable.c)
 *     MiReleaseLargePteMappings @ 0x1402C3B8C (MiReleaseLargePteMappings.c)
 *     MiInsertLargeUserMapping @ 0x1402C59E0 (MiInsertLargeUserMapping.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 *     MiMarkBootKernelStack @ 0x1409B7464 (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     MiReturnDriverLoadPages @ 0x1409F87A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  char v2; // di
  __int64 v4; // rsi
  char v5; // di
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rbx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  struct _KPRCB *v9; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v11; // di
  __int64 v12; // rax
  volatile signed __int32 *PageTableLockBuffer; // r8
  int v14; // r9d
  volatile signed __int32 v15; // ett
  int v16; // edx
  signed __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v23; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v4 = a1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v5 = v2 & 7;
    if ( v5 )
    {
      if ( v5 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v5 == 5 )
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        else
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      result = KiReleaseQueuedSpinLockInstrumented(SelfmapLockHandle, retaddr);
LABEL_15:
      v9 = KeGetCurrentPrcb();
      SchedulerAssist = v9->SchedulerAssist;
      if ( SchedulerAssist && v9->NestingLevel <= 1u )
      {
        result = (unsigned int)(SchedulerAssist[5] - 1);
        SchedulerAssist[5] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(v9);
      }
      return result;
    }
    _m_prefetchw(SelfmapLockHandle);
    result = (__int64)SelfmapLockHandle->LockQueue.Next;
    if ( !SelfmapLockHandle->LockQueue.Next )
    {
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
                 0LL,
                 (signed __int64)SelfmapLockHandle);
      if ( SelfmapLockHandle == (_KLOCK_QUEUE_HANDLE *)result )
        goto LABEL_15;
      result = KxWaitForLockChainValid((__int64 *)SelfmapLockHandle);
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    goto LABEL_15;
  }
  v11 = v2 & 7;
  if ( !v11 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    a1 = *(_QWORD *)&PsGetCurrentProcess()[1].IdealGlobalNode;
    v12 = *(_QWORD *)(a1 + 552);
    if ( v12 )
      return ExReleaseSpinLockRegardlessFromDpcLevel(v12 + 4 * ((a2 >> 3) & 0x1FF));
  }
  if ( v11 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v4, a2, &v23);
    v14 = ~(3 << v23);
    v15 = *PageTableLockBuffer;
    result = (unsigned int)_InterlockedCompareExchange(
                             PageTableLockBuffer,
                             *PageTableLockBuffer & v14,
                             *PageTableLockBuffer);
    if ( v15 != (_DWORD)result )
    {
      do
      {
        v16 = result;
        result = (unsigned int)_InterlockedCompareExchange(PageTableLockBuffer, result & v14, result);
      }
      while ( (_DWORD)result != v16 );
    }
  }
  else
  {
    v17 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(a1, v17)
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8 * ((a2 >> 3) & 0x1FF));
        v20 = v17 | 0x20;
        if ( (v19 & 0x20) == 0 )
          v20 = v17;
        v17 = v20;
        if ( (v19 & 0x42) != 0 )
          v17 = v20 | 0x42;
      }
    }
    result = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v17 & 0xCFFFFFFFFFFFFFFFuLL, v17);
    if ( v17 != result )
    {
      do
      {
        v21 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)a2, result & 0xCFFFFFFFFFFFFFFFuLL, result);
      }
      while ( result != v21 );
    }
  }
  return result;
}
