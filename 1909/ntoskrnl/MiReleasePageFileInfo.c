/*
 * XREFs of MiReleasePageFileInfo @ 0x14008A250
 * Callers:
 *     MiDeleteValidSystemPage @ 0x140024940 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1400290C0 (MiDeleteBatch.c)
 *     MiReservePageFileSpaceForPage @ 0x14002D250 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteTransitionPte @ 0x14002EEF0 (MiDeleteTransitionPte.c)
 *     MiReservePageFileSpace @ 0x14002F780 (MiReservePageFileSpace.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiMakePteClean @ 0x14005C0F0 (MiMakePteClean.c)
 *     MiLockPageAndSetDirty @ 0x14005D304 (MiLockPageAndSetDirty.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiInPageSingleKernelStack @ 0x14008F9F4 (MiInPageSingleKernelStack.c)
 *     MiDeleteClusterPage @ 0x140098070 (MiDeleteClusterPage.c)
 *     MiOutSwapWorkingSetPte @ 0x1400A5050 (MiOutSwapWorkingSetPte.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400B2260 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteSubsectionPages @ 0x1400BC810 (MiDeleteSubsectionPages.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiLockPageTablePage @ 0x1400CD620 (MiLockPageTablePage.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiTrimSystemImagePages @ 0x1400FA4E8 (MiTrimSystemImagePages.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiReleasePageFileSpace @ 0x140125564 (MiReleasePageFileSpace.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401558AC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiStoreMarkLockedPagesModified @ 0x1401582B0 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140158638 (MiUnlockStoreLockedPages.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiBuildReservationCluster @ 0x140162A00 (MiBuildReservationCluster.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140199F80 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x1402CE220 (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x140633CE8 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x14088C940 (MiScanPagefileSpace.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14008A450 (MiCoalescePageFileBitmapsCache.c)
 *     MiStoreSetEvictPageFile @ 0x140158EA8 (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x140159AE0 (MiClearPageFileHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( qword_140465800 && (a2 & 0x10) == 0 )
    v5 = a2 & ~qword_140465800;
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
