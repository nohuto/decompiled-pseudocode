/*
 * XREFs of ExpReleaseFastResourceShared @ 0x14016C1E0
 * Callers:
 *     ExReleaseFastResource @ 0x14016C150 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceShared @ 0x14033A1A0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     ExpReplaceListEntry @ 0x14016C41C (ExpReplaceListEntry.c)
 *     ExpPrepareToWakeResourceShared @ 0x14016C460 (ExpPrepareToWakeResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 **v5; // rdi
  volatile __int64 *v6; // rdx
  __int64 *v7; // r10
  __int64 *v8; // rax
  char v9; // al
  __int64 v10; // r10
  __int64 *v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 *v20; // rcx
  __int64 **v21; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v25; // [rsp+78h] [rbp+10h] BYREF
  __int64 *v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( !*((_BYTE *)a2 + 18) )
  {
    v14 = (__int64 *)*a2;
    v15 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v15 == a2 )
      goto LABEL_9;
    goto LABEL_19;
  }
  v5 = (__int64 **)(a2 + 5);
  LockHandle.LockQueue.Next = 0LL;
  v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  if ( *v5 != (__int64 *)v5 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
    v7 = *v5;
    v8 = (__int64 *)**v5;
    if ( (__int64 **)(*v5)[1] == v5 && (__int64 *)v8[1] == v7 )
    {
      *v5 = v8;
      v8[1] = (__int64)v5;
      *((_BYTE *)v7 + 18) = 1;
      v9 = *((_BYTE *)a2 + 16);
      *((_BYTE *)a2 + 18) = 0;
      *((_BYTE *)v7 + 16) = v9;
      *((_BYTE *)a2 + 16) = 0;
      ExpReplaceListEntry(a2, v7);
      ExpReplaceListEntry(v5, v10 + 40);
      v13 = *v11;
      if ( *(__int64 **)(*v11 + 8) == v11 )
      {
        a2[1] = (__int64)v11;
        *a2 = v13;
        *(_QWORD *)(v13 + 8) = a2;
        *v11 = (__int64)a2;
        ExpReplaceListEntry(a2 + 7, v12 + 56);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v14 = (__int64 *)*a2;
        v15 = (__int64 **)a2[1];
        if ( *(__int64 **)(*a2 + 8) == a2 && *v15 == a2 )
        {
LABEL_9:
          *v15 = v14;
          v14[1] = (__int64)v15;
          *a2 = 0LL;
          a2[1] = 0LL;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          goto LABEL_11;
        }
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
  ExpPrepareToWakeResourceShared(
    BugCheckParameter2,
    &v26,
    &v27,
    &v25,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock,
    *(_QWORD *)&LockHandle.OldIrql);
  v17 = a2[7];
  v18 = a2 + 7;
  v19 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v17 + 8) != a2 + 7 )
    goto LABEL_19;
  if ( (_QWORD *)*v19 != v18 )
    goto LABEL_19;
  *v19 = v17;
  *(_QWORD *)(v17 + 8) = v19;
  *v18 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v26, 0, 2 * (v27 != 0) + 1);
  *((_BYTE *)a2 + 18) = 0;
  v20 = (__int64 *)*a2;
  v21 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v21 != a2 )
    goto LABEL_19;
  *v21 = v20;
  v20[1] = (__int64)v21;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v23 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v23);
  }
  __writecr8(CurrentIrql);
  result = *((unsigned __int8 *)a2 + 16);
  if ( (_BYTE)result )
    result = KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)(unsigned __int8)result);
LABEL_11:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
