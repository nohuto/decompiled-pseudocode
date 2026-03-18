/*
 * XREFs of MiReleasePageFileInfo @ 0x140088F50
 * Callers:
 *     MiDeleteValidSystemPage @ 0x140024550 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140028CD0 (MiDeleteBatch.c)
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MiReservePageFileSpace @ 0x14002F390 (MiReservePageFileSpace.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiMakePteClean @ 0x14005C050 (MiMakePteClean.c)
 *     MiLockPageAndSetDirty @ 0x14005D264 (MiLockPageAndSetDirty.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiLockPageTablePage @ 0x140090030 (MiLockPageTablePage.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiDeleteClusterPage @ 0x1400B8200 (MiDeleteClusterPage.c)
 *     MiOutSwapWorkingSetPte @ 0x1400C51D0 (MiOutSwapWorkingSetPte.c)
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiInPageSingleKernelStack @ 0x1400E3774 (MiInPageSingleKernelStack.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiTrimSystemImagePages @ 0x1400F6A48 (MiTrimSystemImagePages.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140157C10 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140157F98 (MiUnlockStoreLockedPages.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140199920 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x1402CE4C0 (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1402D2398 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x14062FE68 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x14088D120 (MiScanPagefileSpace.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140089150 (MiCoalescePageFileBitmapsCache.c)
 *     MiStoreSetEvictPageFile @ 0x140158808 (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x140159440 (MiClearPageFileHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rbp
  unsigned __int8 OldIrql; // bl
  LONG result; // eax
  __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a2;
  if ( qword_140465B00 && (a2 & 0x10) == 0 )
    v5 = a2 & ~qword_140465B00;
  v6 = HIDWORD(v5);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 7904);
  v9 = (a2 >> 1) & 1;
  v10 = (a2 >> 2) & 1;
  if ( (a3 & 1) != 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 232);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v8 + 232));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 232), &LockHandle);
  }
  v11 = *(_QWORD *)(v8 + 112);
  if ( (_DWORD)v9 )
  {
    _bittestandreset(*(signed __int32 **)(v11 + 32), v6);
    ++*(_QWORD *)(v8 + 48);
  }
  if ( (_DWORD)v10 )
  {
    if ( (a3 & 2) == 0 )
      MiClearPageFileHash(v8, (unsigned int)v6);
    if ( (*(_BYTE *)(v8 + 204) & 0x40) != 0 )
    {
      MiStoreSetEvictPageFile(v8, (unsigned int)v6);
      goto LABEL_13;
    }
    _bittestandreset(*(signed __int32 **)(v11 + 16), v6);
    v14 = ++*(_QWORD *)(v8 + 24);
    if ( (unsigned int)v6 < *(_DWORD *)(v8 + 120) )
      *(_DWORD *)(v8 + 120) = v6;
    ++*(_DWORD *)(v8 + 128);
    if ( v14 == 1 && (*(_BYTE *)(v8 + 206) & 1) != 0 )
      v7 = 1;
  }
  if ( ((_DWORD)v9 || !_bittest64(*(const signed __int64 **)(v11 + 32), v6))
    && ((_DWORD)v10 || !_bittest64(*(const signed __int64 **)(v11 + 16), v6)) )
  {
    MiCoalescePageFileBitmapsCache(v8, (unsigned int)v9, (unsigned int)v6);
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v8 + 256) + 864LL),
      (*(_DWORD *)(*(_QWORD *)(v8 + 256) + 864LL) & 0xFFFFFC00 | 0x200) + 1024);
  }
LABEL_13:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (a3 & 1) == 0 )
  {
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  result = 1;
  if ( v7 == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 872), 0, 0);
  return result;
}
