/*
 * XREFs of MiReleasePageFileInfo @ 0x14002A628
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x140039750 (MiDeleteBatch.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiOutSwapWorkingSetPte @ 0x14003DD60 (MiOutSwapWorkingSetPte.c)
 *     MiLockPageTablePage @ 0x1400403C0 (MiLockPageTablePage.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiDeleteValidSystemPage @ 0x14007A860 (MiDeleteValidSystemPage.c)
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpace @ 0x140081320 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140081800 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileSpace @ 0x1400823A4 (MiReleasePageFileSpace.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiLockPageAndSetDirty @ 0x140086028 (MiLockPageAndSetDirty.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086780 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiDeleteSubsectionPages @ 0x140094F80 (MiDeleteSubsectionPages.c)
 *     MiDeleteTransitionPte @ 0x140095430 (MiDeleteTransitionPte.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiRevertValidPte @ 0x1400B2340 (MiRevertValidPte.c)
 *     MiWsleFree @ 0x1400B2C50 (MiWsleFree.c)
 *     MiTrimSystemImagePages @ 0x1400DB1B4 (MiTrimSystemImagePages.c)
 *     MmPurgeSection @ 0x1400E7CE0 (MmPurgeSection.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiInPageSingleKernelStack @ 0x14013D480 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x1401408F0 (MiLockPagedAddress.c)
 *     MiStoreWriteModifiedPages @ 0x14014CB80 (MiStoreWriteModifiedPages.c)
 *     MiBuildReservationCluster @ 0x14015009C (MiBuildReservationCluster.c)
 *     MiStoreMarkLockedPagesModified @ 0x140153EB0 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x1401541A0 (MiUnlockStoreLockedPages.c)
 *     MiPurgeImageSection @ 0x140176600 (MiPurgeImageSection.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14018F9A4 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4268 (MiMakeOutswappedPageResident.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1402AB0CC (MmReplaceImportEntry.c)
 *     MiFreeModifiedReservations @ 0x1402B8068 (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8970 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBB04 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1406B8EB4 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x140853450 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCoalescePageFileBitmapsCache @ 0x14002A820 (MiCoalescePageFileBitmapsCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC990 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     MiStoreSetEvictPageFile @ 0x1401560BC (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x140156868 (MiClearPageFileHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiReleasePageFileInfo(struct _KEVENT *a1, unsigned __int64 a2, char a3)
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

  v5 = a2;
  if ( qword_14043A0C0 && (a2 & 0x10) == 0 )
    v5 = a2 & ~qword_14043A0C0;
  v6 = HIDWORD(v5);
  v7 = 0;
  v8 = *((_QWORD *)&a1[297].Header.WaitListHead.Flink + ((unsigned __int16)a2 >> 12));
  v9 = (a2 >> 1) & 1;
  v10 = (a2 >> 2) & 1;
  if ( (a3 & 1) != 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 232);
    KxAcquireQueuedSpinLock(&LockHandle);
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
      (volatile __int32 *)(*(_QWORD *)(v8 + 256) + 856LL),
      (*(_DWORD *)(*(_QWORD *)(v8 + 256) + 856LL) & 0xFFFFFC00 | 0x200) + 1024);
  }
LABEL_13:
  KxReleaseQueuedSpinLock(&LockHandle);
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
    return KeSetEvent(a1 + 36, 0, 0);
  return result;
}
