/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x14033A648
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14016BD40 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x140339E40 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x140339F50 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     KeAbCrossThreadRelease @ 0x14016BFC4 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14016C098 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14016C7A8 (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceExclusive(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r15
  _QWORD *v6; // rsi
  volatile __int64 *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  LONG_PTR result; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _KPRCB *v17; // rcx
  unsigned __int8 v18; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF
  __int64 *v22; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v22 = 0LL;
  *(_QWORD *)&v20.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v5 = *(_QWORD *)(a2 + 32);
  v20.LockQueue.Next = 0LL;
  v20.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 2056);
  KxAcquireQueuedSpinLock((__int64)&v20, (volatile __int64 *)(v5 + 2056));
  if ( !*(_BYTE *)(a2 + 18) )
  {
LABEL_8:
    v8 = *(_QWORD *)a2;
    v9 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v9 == a2 )
    {
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_28;
    }
LABEL_29:
    __fastfail(3u);
  }
  v6 = (_QWORD *)(a2 + 40);
  LockHandle.LockQueue.Next = 0LL;
  v7 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (_QWORD *)*v6 != v6 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v7);
    ExpRotateFastOwnerEntrySublistHead(a1, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_8;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v7);
  ExpPrepareToWakeResourceExclusive(a1, &v22, &v23, &v21);
  v12 = (_QWORD *)(a2 + 56);
  v13 = *(_QWORD *)(a2 + 56);
  v14 = *(_QWORD **)(a2 + 64);
  if ( *(_QWORD *)(v13 + 8) != a2 + 56 )
    goto LABEL_29;
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_29;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_BYTE *)(a2 + 18) = 0;
  v15 = *(_QWORD *)a2;
  v16 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v16 != a2 )
    goto LABEL_29;
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v6 = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
  KeWakeWaitChain(&v22, 0, 2 * (v23 != 0) + 1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v17);
  }
  __writecr8(CurrentIrql);
  v18 = *(_BYTE *)(a2 + 16);
  if ( v18 )
    KeAbCrossThreadRelease(a1, v18, v5);
  result = ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 32), 0x746C6644u);
LABEL_28:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
