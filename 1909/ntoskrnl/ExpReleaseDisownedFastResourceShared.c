/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x14016C4AC
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14016C430 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x1403399B0 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeWakeWaitChain @ 0x140125CEC (KeWakeWaitChain.c)
 *     KeAbCrossThreadRelease @ 0x14016C6B4 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14016C788 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceShared @ 0x14016CB50 (ExpPrepareToWakeResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r15
  __int64 *v6; // rcx
  __int64 **v7; // rax
  LONG_PTR result; // rax
  _QWORD *v9; // rsi
  volatile __int64 *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+98h] [rbp+48h] BYREF
  __int64 *v23; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  memset(&v20, 0, sizeof(v20));
  v23 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v5 = a2[4];
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 2056);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 2056));
  if ( !*((_BYTE *)a2 + 18) )
  {
LABEL_3:
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v7 == a2 )
    {
      *v7 = v6;
      v6[1] = (__int64)v7;
      *a2 = 0LL;
      a2[1] = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_7;
    }
LABEL_29:
    __fastfail(3u);
  }
  v9 = a2 + 5;
  v20.LockQueue.Next = 0LL;
  v10 = (volatile __int64 *)(a1 + 96);
  v20.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (_QWORD *)*v9 != v9 )
  {
    KxAcquireQueuedSpinLock((__int64)&v20, v10);
    LOBYTE(v17) = 1;
    ExpRotateFastOwnerEntrySublistHead(a1, a2, v17);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
    goto LABEL_3;
  }
  KxAcquireQueuedSpinLock((__int64)&v20, v10);
  ExpPrepareToWakeResourceShared(a1, &v23, &v24, &v22, v20.LockQueue.Next, v20.LockQueue.Lock, *(_QWORD *)&v20.OldIrql);
  v11 = a2 + 7;
  v12 = a2[7];
  v13 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v12 + 8) != a2 + 7 )
    goto LABEL_29;
  if ( (_QWORD *)*v13 != v11 )
    goto LABEL_29;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
  *((_BYTE *)a2 + 18) = 0;
  v14 = (__int64 *)*a2;
  v15 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v15 != a2 )
    goto LABEL_29;
  *v15 = v14;
  v14[1] = (__int64)v15;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v9 = 0LL;
  a2[6] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v23, 0, 2 * (v24 != 0) + 1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v19);
  }
  __writecr8(CurrentIrql);
  v16 = *((_BYTE *)a2 + 16);
  if ( v16 )
    KeAbCrossThreadRelease(a1, v16, v5);
  result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_7:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
