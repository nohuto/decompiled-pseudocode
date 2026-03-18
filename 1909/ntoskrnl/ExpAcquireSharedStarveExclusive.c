/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x1400B7D50
 * Callers:
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400B8A10 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x14003B680 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForResource @ 0x140042F70 (ExpWaitForResource.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     ExpGetThreadResourceHint @ 0x1400B8B70 (ExpGetThreadResourceHint.c)
 *     ExpBoostIoAfterAcquire @ 0x140100ED8 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140122CA4 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x140123F40 (ExpFindEmptyEntry.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x14012F68C (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14013A180 (ExpPrepareToWaitForResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140331138 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140331658 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  __int64 v4; // r8
  __int64 CurrentThread; // r15
  bool v6; // r14
  volatile __int64 *v7; // rdi
  unsigned int v8; // esi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v12; // rdx
  int v13; // eax
  __int64 Next; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int8 OldIrql; // di
  __int16 v19; // ax
  unsigned int ThreadResourceHint; // eax
  _QWORD *EmptyEntry; // rax
  unsigned int v22; // edi
  unsigned int v23; // edi
  unsigned __int8 v24; // si
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int8 v28; // di
  int v29; // eax
  unsigned __int8 v30; // di
  unsigned __int8 v31; // bl
  int v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // edi
  unsigned __int8 v35; // si
  struct _KPRCB *v36; // rcx
  struct _KPRCB *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  struct _KPRCB *v40; // rcx
  struct _KPRCB *v41; // rcx
  struct _KPRCB *v42; // rcx
  int v43; // eax
  struct _KPRCB *v44; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v46[56]; // [rsp+48h] [rbp-38h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v46, 0, 0x30uLL);
  CurrentThread = (__int64)KeGetCurrentThread();
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63A4u);
  v7 = (volatile __int64 *)(a1 + 96);
  v8 = 0;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
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
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
  }
  else
  {
    v12 = (_QWORD *)_InterlockedExchange64(v7, (__int64)&LockHandle);
    if ( v12 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v12);
  }
  do
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v13 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v13 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_10;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_10:
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          if ( v16 )
          {
            if ( v15->NestingLevel <= 1u )
            {
              v43 = v16[5] - 1;
              v16[5] = v43;
              if ( !v43 )
                KiRemoveSystemWorkPriorityKick(v15);
            }
          }
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v44 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v44);
          }
          __writecr8(OldIrql);
          __incgsdword(0x63ACu);
          __incgsdword(0x6364u);
          if ( !v6 )
            return 1;
          goto LABEL_79;
        }
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_10;
    }
    v19 = *(_WORD *)(a1 + 26) & 0x80;
    if ( v19 && *(_QWORD *)(a1 + 48) == CurrentThread )
    {
      v33 = *(_DWORD *)(a1 + 56) + 8;
      *(_DWORD *)(a1 + 56) = v33;
      v34 = v33 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v35 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v36 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v36);
      }
      __writecr8(v35);
      __incgsdword(0x63A8u);
      __incgsdword(0x6364u);
      if ( !v6 )
        return 1;
      v38 = v34;
      v39 = 65585LL;
      goto LABEL_80;
    }
    if ( v19 )
    {
      EmptyEntry = (_QWORD *)ExpFindEmptyEntry(a1, &LockHandle);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v12, v4);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     CurrentThread,
                     (__int64)&LockHandle,
                     1,
                     *(_DWORD *)(a1 + 76) != 0,
                     ThreadResourceHint);
    }
    v12 = EmptyEntry;
  }
  while ( !EmptyEntry );
  if ( *EmptyEntry == CurrentThread )
  {
    v22 = *((_DWORD *)EmptyEntry + 2) + 8;
    *((_DWORD *)EmptyEntry + 2) = v22;
    v23 = v22 >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v24 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v37 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v37);
    }
    __writecr8(v24);
    __incgsdword(0x63B0u);
    __incgsdword(0x6364u);
    if ( v6 )
    {
      v38 = v23;
      v39 = 65617LL;
      goto LABEL_80;
    }
    return 1;
  }
  if ( (unsigned __int8)ExpTryAcquireResourceSharedStarveExclusive(a1, EmptyEntry) )
  {
    v27 = *(_DWORD *)(v25 + 8) & 7;
    *(_QWORD *)v25 = CurrentThread;
    *(_DWORD *)(v25 + 8) = v27 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v28 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v40 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v40);
    }
    __writecr8(v28);
LABEL_25:
    if ( (CurrentThread & 3) == 0 )
      v8 = *(unsigned __int8 *)(CurrentThread + 649);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v8);
    __incgsdword(0x63ACu);
    __incgsdword(0x6364u);
    if ( !v6 )
      return 1;
LABEL_79:
    v39 = 65601LL;
    v38 = 1LL;
LABEL_80:
    PerfLogExecutiveResourceAcquire(v39, a1, v38, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v29 = *(_DWORD *)(v25 + 8) & 7;
    *(_QWORD *)v25 = CurrentThread;
    *(_DWORD *)(v25 + 8) = v29 | 8;
    ExpPrepareToWaitForResourceShared(v26, CurrentThread, v46);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v30 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v42 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v42);
    }
    __writecr8(v30);
    __incgsdword(0x63B4u);
    if ( v6 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(
      (struct _LIST_ENTRY *)a1,
      (__int64)v46,
      0x10244u,
      (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
    goto LABEL_25;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v31 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v41 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v41);
  }
  __writecr8(v31);
  __incgsdword(0x63B8u);
  return 0;
}
