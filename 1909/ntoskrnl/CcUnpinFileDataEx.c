/*
 * XREFs of CcUnpinFileDataEx @ 0x140079100
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x1400780F0 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x140078B60 (CcGetDirtyPagesHelper.c)
 *     CcReleaseByteRangeFromWrite @ 0x140078FE8 (CcReleaseByteRangeFromWrite.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     CcZeroDataInCache @ 0x1400FEBC4 (CcZeroDataInCache.c)
 *     CcMapDataForOverwrite @ 0x14011D758 (CcMapDataForOverwrite.c)
 *     CcUnpinRepinnedBcb @ 0x14027D570 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x14060C5E0 (CcUnpinData.c)
 *     CcMapData @ 0x14064DF90 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x140822C20 (CcUnpinDataForThread.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcDeallocateBcb @ 0x140079788 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14007A5F4 (CcDeductDirtyPages.c)
 *     CcAdjustVacbLevelLockCount @ 0x14007B3E4 (CcAdjustVacbLevelLockCount.c)
 *     ExpReleaseFastMutexContended @ 0x1400C6530 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011E8D0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // rbx
  char result; // al
  __int64 v7; // rsi
  struct _KEVENT *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v15; // edx
  ULONG_PTR *v16; // rbp
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  volatile signed __int32 *v19; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v21; // rcx
  char v22; // dl
  __int64 v23; // r13
  int SessionId; // eax
  bool v25; // zf
  unsigned __int8 v26; // r14
  int v27; // eax
  int v28; // eax
  __int64 v29; // r14
  unsigned __int8 v30; // bl
  unsigned __int32 v31; // eax
  struct _KEVENT *v32; // rcx
  unsigned int v33; // ebx
  unsigned __int8 v34; // r8
  unsigned int v35; // eax
  unsigned __int8 OldIrql; // bl
  unsigned __int32 v37; // eax
  char **v38; // rdx
  PVOID *v39; // rcx
  _DWORD *v40; // rcx
  __int64 v41; // rsi
  struct _KEVENT *v42; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v44; // eax
  int v45; // eax
  signed __int32 v46; // eax
  int v47; // eax
  struct _KPRCB *v48; // rcx
  struct _KPRCB *v49; // rcx
  struct _KPRCB *v50; // rcx
  __int64 v51; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v54; // [rsp+A0h] [rbp+8h] BYREF
  int v55; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = -3;
  if ( *(_WORD *)P != 765 )
  {
    v7 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v8 = *(struct _KEVENT **)(v7 + 184);
      if ( v8 )
        result = KeSetEvent(v8, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 544));
    }
    return result;
  }
  v9 = *((_QWORD *)P + 22);
  v10 = *(_QWORD *)(v9 + 528);
  v51 = v10;
  if ( *(_QWORD *)(v9 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464280, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v54 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v44 = SchedulerAssist[5];
          SchedulerAssist[5] = v44 + 1;
          if ( v44 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140464280, 0x1Fu) )
      {
        v40 = CurrentPrcb->SchedulerAssist;
        if ( v40 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v45 = v40[5] - 1;
            v40[5] = v45;
            if ( !v45 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v54 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464280, CurrentIrql);
      }
      v15 = dword_140464280;
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v15 & 0x40000000) == 0 )
        {
          v46 = _InterlockedCompareExchange(&dword_140464280, v15 | 0x40000000, v15);
          v25 = v15 == v46;
          v15 = v46;
          if ( !v25 )
            continue;
        }
        KeYieldProcessorEx(&v54);
        v15 = dword_140464280;
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464280, retaddr);
    else
      dword_140464280 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v47 = v18[5] - 1;
        v18[5] = v47;
        if ( !v47 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v48 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v48);
    }
    __writecr8(CurrentIrql);
    if ( v10 != *(_QWORD *)(v16[21] + 8) )
      KeBugCheckEx(0x34u, 0x12EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v9 + 152) & 0x200) == 0 || (_DWORD)v3 == 1 )
    a2 = 1;
  v55 = 0;
  v19 = (volatile signed __int32 *)(v9 + 280);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v9 + 280, KeGetCurrentIrql(), 0LL);
  LOBYTE(v21) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v21 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v23 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v9 + 280);
      goto LABEL_87;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v21) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v22 = v21;
  _BitScanForward((unsigned int *)&v21, (unsigned __int8)v21);
  CurrentThread->AbEntrySummary = v22 & ~(1 << v21);
  v23 = (__int64)&CurrentThread->LockEntries[v21];
  if ( !v23 )
  {
LABEL_87:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_28;
  }
  if ( (unsigned __int64)v19 >= 0xFFFF800000000000uLL
    && *((_BYTE *)&MiState[1488] + (((unsigned __int64)v19 >> 39) & 0x1FF)) == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v23 + 40) = SessionId;
  *(_QWORD *)(v23 + 32) = (unsigned __int64)v19 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_28:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v9 + 280, &v55);
  v25 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v25 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v26 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v19, 0) )
    ExpAcquireFastMutexContended(v9 + 280, (PRTL_BALANCED_NODE)v23);
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  *(_QWORD *)(v9 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v9 + 328) = v26;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20470uLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v33 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v51 + 128);
      *((_QWORD *)P + 6) = 0LL;
      LockHandle.LockQueue.Next = 0LL;
      v34 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.OldIrql = v34;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v51 + 128));
      CcDeductDirtyPages(v9, v33);
      v35 = 0;
      if ( *(_DWORD *)(v51 + 456) > v33 )
        v35 = *(_DWORD *)(v51 + 456) - v33;
      *(_DWORD *)(v51 + 456) = v35;
      if ( !*(_DWORD *)(v9 + 112) && *(_DWORD *)(v9 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v9);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v49 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v49);
      }
      __writecr8(OldIrql);
    }
    v28 = *((_DWORD *)P + 16);
  }
  else
  {
    v27 = *((_DWORD *)P + 16);
    if ( !v27 )
      KeBugCheckEx(0x34u, 0x439uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v28 = v27 - 1;
    *((_DWORD *)P + 16) = v28;
  }
  if ( v28 )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    v30 = *(_BYTE *)(v9 + 328);
    *(_QWORD *)(v9 + 288) = 0LL;
    v37 = _InterlockedCompareExchange(v19, 1, 0);
    if ( v37 )
      ExpReleaseFastMutexContended(v9 + 280, v37);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v30 >= 2u )
      goto LABEL_48;
LABEL_131:
    v50 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v50);
LABEL_48:
    __writecr8(v30);
    return KeAbPostRelease(v9 + 280);
  }
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v29 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v32 = *(struct _KEVENT **)(v29 + 184);
        if ( v32 )
          KeSetEvent(v32, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v29 + 544));
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    v30 = *(_BYTE *)(v9 + 328);
    *(_QWORD *)(v9 + 288) = 0LL;
    v31 = _InterlockedCompareExchange(v19, 1, 0);
    if ( v31 )
      ExpReleaseFastMutexContended(v9 + 280, v31);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v30 >= 2u )
      goto LABEL_48;
    goto LABEL_131;
  }
  ExAcquirePushLockExclusiveEx(v9 + 104, 0LL);
  v38 = (char **)*((_QWORD *)P + 2);
  v39 = (PVOID *)*((_QWORD *)P + 3);
  if ( v38[1] != P + 16 || *v39 != P + 16 )
    __fastfail(3u);
  *v39 = v38;
  v38[1] = (char *)v39;
  if ( *(__int64 *)(v9 + 32) > 0x2000000 && (*(_DWORD *)(v9 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v9, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
  ExReleasePushLockEx(v9 + 104, 0LL);
  if ( *((_QWORD *)P + 23) )
  {
    v41 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v42 = *(struct _KEVENT **)(v41 + 184);
      if ( v42 )
        KeSetEvent(v42, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v41 + 544));
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 280));
  return CcDeallocateBcb(P);
}
