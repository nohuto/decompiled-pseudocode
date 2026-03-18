/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x14016AF00
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14011D3E8 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14033A330 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x14003B680 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForResource @ 0x140042F70 (ExpWaitForResource.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     ExpGetThreadResourceHint @ 0x1400B8B70 (ExpGetThreadResourceHint.c)
 *     ExpBoostIoAfterAcquire @ 0x140100ED8 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140122CA4 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x140123F40 (ExpFindEmptyEntry.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14013A180 (ExpPrepareToWaitForResourceShared.c)
 *     ExpTryAcquireResourceShared @ 0x14016C188 (ExpTryAcquireResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140331138 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140331658 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  _QWORD *v4; // r8
  ERESOURCE_THREAD CurrentThread; // rsi
  bool v6; // r15
  unsigned int v7; // r14d
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v11; // rdx
  __int16 v12; // ax
  unsigned int ThreadResourceHint; // eax
  ERESOURCE_THREAD *v14; // rax
  ERESOURCE_THREAD *v15; // rcx
  int v16; // eax
  int v17; // edi
  unsigned int v18; // edi
  ULONG ActiveEntries; // edx
  unsigned int v20; // edi
  __int64 Next; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int8 v24; // si
  __int64 v25; // rcx
  unsigned int v26; // eax
  BOOLEAN v27; // di
  ULONG v29; // ecx
  unsigned __int8 OldIrql; // si
  unsigned __int8 v31; // bl
  int v32; // eax
  _QWORD *EmptyEntry; // rax
  _QWORD *v34; // r12
  ULONG v35; // edi
  ULONG v36; // edi
  unsigned __int8 v37; // si
  struct _KPRCB *v38; // rcx
  int v39; // eax
  struct _KPRCB *v40; // rcx
  unsigned __int8 v41; // r13
  struct _KPRCB *v42; // rcx
  _QWORD *v43; // rax
  int v44; // ecx
  unsigned __int8 v45; // di
  struct _KPRCB *v46; // rcx
  struct _KPRCB *v47; // rcx
  struct _KPRCB *v48; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v50[56]; // [rsp+48h] [rbp-1h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+5Fh]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v50, 0, 0x30uLL);
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63BCu);
  v7 = 0;
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v32 = SchedulerAssist[5];
      SchedulerAssist[5] = v32 + 1;
      if ( v32 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &Resource->SpinLock);
  }
  else
  {
    v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&LockHandle);
    if ( v11 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v11);
  }
  do
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v27 = ExpTryAcquireResourceShared(Resource);
        v29 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = CurrentThread;
        Resource->OwnerEntry.TableSize = v29 | 8;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v48 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v48);
        }
        __writecr8(OldIrql);
        __incgsdword(0x63C4u);
        __incgsdword(0x6364u);
        if ( v6 )
          PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return v27;
      }
      v12 = Resource->Flag & 0x80;
      if ( v12 && Resource->OwnerEntry.OwnerThread == CurrentThread )
      {
        v35 = Resource->OwnerEntry.TableSize + 8;
        Resource->OwnerEntry.TableSize = v35;
        v36 = v35 >> 3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v37 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v38 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v38);
        }
        __writecr8(v37);
        __incgsdword(0x63C0u);
        __incgsdword(0x6364u);
        if ( v6 )
          PerfLogExecutiveResourceAcquire(65585LL, Resource, v36, Resource->ContentionCount);
        return 1;
      }
      if ( !v12 && !Resource->NumberOfExclusiveWaiters )
        break;
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v31 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v47 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v47);
        }
        __writecr8(v31);
        __incgsdword(0x63D0u);
        return 0;
      }
      if ( !v12 )
      {
        v34 = 0LL;
LABEL_67:
        ExpPrepareToWaitForResourceShared((__int64)Resource, CurrentThread, (__int64)v50);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v41 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v42 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v42);
        }
        __writecr8(v41);
        __incgsdword(0x63CCu);
        if ( v6 )
          PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
        ExpApplyPrewaitBoost();
        ExpWaitForResource(
          &Resource->SystemResourcesList,
          (__int64)v50,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( !v34 )
        {
          KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
          do
            v43 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, 0);
          while ( !v43 );
          v44 = v43[1] & 7;
          *v43 = CurrentThread;
          *((_DWORD *)v43 + 2) = v44 | 8;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v45 = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v46 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v46);
          }
          __writecr8(v45);
        }
        if ( (CurrentThread & 3) == 0 )
          v7 = *(unsigned __int8 *)(CurrentThread + 649);
        ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, v7);
        __incgsdword(0x63C4u);
        __incgsdword(0x6364u);
        if ( !v6 )
          return 1;
        PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return 1;
      }
      EmptyEntry = ExpFindEmptyEntry((__int64)Resource, (__int64)&LockHandle, v4);
      v34 = EmptyEntry;
      if ( EmptyEntry )
      {
        *EmptyEntry = CurrentThread;
        *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
        goto LABEL_67;
      }
    }
    ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
    v14 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, ThreadResourceHint);
    v15 = v14;
  }
  while ( !v14 );
  v16 = *((_DWORD *)v14 + 2);
  v17 = v16 & 7;
  if ( *v15 )
  {
    v18 = v17 | (v16 + 8) & 0xFFFFFFF8;
    *((_DWORD *)v15 + 2) = v18;
  }
  else
  {
    v18 = v17 | 8;
    *v15 = CurrentThread;
    *((_DWORD *)v15 + 2) = v18;
    ActiveEntries = Resource->ActiveEntries;
    if ( !ActiveEntries || (Resource->ReservedLowFlags & 0x80u) == 0 && !Resource->NumberOfExclusiveWaiters )
    {
      Resource->ActiveCount = 1;
      Resource->ActiveEntries = ActiveEntries + 1;
      v18 = *((_DWORD *)v15 + 2);
    }
  }
  v20 = v18 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_20;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_20:
  v22 = KeGetCurrentPrcb();
  v23 = v22->SchedulerAssist;
  if ( v23 )
  {
    if ( v22->NestingLevel <= 1u )
    {
      v39 = v23[5] - 1;
      v23[5] = v39;
      if ( !v39 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  v24 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v40 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v40);
  }
  __writecr8(v24);
  if ( v20 == 1 )
  {
    v25 = 65601LL;
    v26 = 25540;
  }
  else
  {
    v25 = 65617LL;
    v26 = 25544;
  }
  __incgsdword(v26);
  __incgsdword(0x63C8u);
  if ( !v6 )
    return 1;
  PerfLogExecutiveResourceAcquire(v25, Resource, 1LL, Resource->ContentionCount);
  return 1;
}
