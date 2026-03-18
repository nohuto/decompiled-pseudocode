/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x14016C5EC
 * Callers:
 *     ExReleaseFastResource @ 0x14016C150 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceExclusive @ 0x14033A070 (ExReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared @ 0x14033A1A0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14016C098 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14016C7A8 (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall ExpReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  volatile __int64 *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int8 result; // al
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KPRCB *v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  char v18; // [rsp+88h] [rbp+48h] BYREF
  __int64 *v19; // [rsp+90h] [rbp+50h] BYREF
  __int64 v20; // [rsp+98h] [rbp+58h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v19 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( *(_BYTE *)(a2 + 18) )
  {
    v5 = (_QWORD *)(a2 + 40);
    LockHandle.LockQueue.Next = 0LL;
    v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v5 == v5 )
    {
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
      ExpPrepareToWakeResourceExclusive(
        BugCheckParameter2,
        &v19,
        &v20,
        &v18,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
      v7 = (_QWORD *)(a2 + 56);
      v8 = *(_QWORD *)(a2 + 56);
      v9 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v8 + 8) == a2 + 56 && (_QWORD *)*v9 == v7 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        KeWakeWaitChain(&v19, 0, 2 * (v20 != 0) + 1);
        *(_BYTE *)(a2 + 18) = 0;
        v10 = *(_QWORD *)a2;
        v11 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v11 == a2 )
        {
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v5 = 0LL;
          v5[1] = 0LL;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(CurrentIrql);
          result = *(_BYTE *)(a2 + 16);
          if ( result )
            result = KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)result);
          goto LABEL_11;
        }
      }
LABEL_18:
      __fastfail(3u);
    }
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = *(_QWORD *)a2;
    v14 = *(_QWORD **)(a2 + 8);
  }
  else
  {
    v13 = *(_QWORD *)a2;
    v14 = *(_QWORD **)(a2 + 8);
  }
  if ( *(_QWORD *)(v13 + 8) != a2 || *v14 != a2 )
    goto LABEL_18;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v15);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_11:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
