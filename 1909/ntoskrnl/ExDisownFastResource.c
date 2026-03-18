/*
 * XREFs of ExDisownFastResource @ 0x14016B8B0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14016BB84 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14016BBDC (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14016C788 (ExpRotateFastOwnerEntrySublistHead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned int v2; // edi
  char v3; // r15
  unsigned int v6; // r12d
  unsigned __int64 *CurrentThread; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v9; // rcx
  ULONG_PTR v10; // r9
  unsigned __int8 v11; // cl
  __int64 v12; // r8
  unsigned __int64 *v13; // r14
  _QWORD *v14; // r15
  volatile __int64 *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  ULONG_PTR *v22; // rax
  __int64 v23; // rcx
  LONG_PTR result; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  ULONG_PTR *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // r14
  ULONG_PTR *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 v46; // [rsp+90h] [rbp+30h]

  v2 = 0;
  memset(&v45, 0, sizeof(v45));
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  CurrentThread = (unsigned __int64 *)KeGetCurrentThread();
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v9 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (v9->MiscFlags & 0x400) == 0 && !v9->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v10 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v10 != v9 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v10, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  v11 = KeGetCurrentIrql();
  v46 = v11;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v45.LockQueue.Lock = CurrentThread + 257;
  v45.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v45, (volatile __int64 *)CurrentThread + 257);
  v13 = (unsigned __int64 *)CurrentThread[258];
  if ( v13 == CurrentThread + 258 )
    goto LABEL_31;
  while ( v13[3] != BugCheckParameter2 )
  {
    v13 = (unsigned __int64 *)*v13;
    if ( v13 == CurrentThread + 258 )
      goto LABEL_31;
  }
  if ( !v13 )
  {
LABEL_31:
    if ( *(_BYTE *)(a2 + 18) )
    {
      v25 = (_QWORD *)(a2 + 40);
      if ( (_QWORD *)*v25 == v25 )
      {
        v6 = *(unsigned __int8 *)(a2 + 16);
        v3 = 1;
        *(_BYTE *)(a2 + 18) = 0;
        v26 = *(_QWORD *)a2;
        v27 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v27 != a2 )
          goto LABEL_38;
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        *v25 = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      else
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
        ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 0LL);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v41 = *(_QWORD *)a2;
        v3 = 1;
        v42 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v42 != a2 )
          goto LABEL_38;
        *v42 = v41;
        *(_QWORD *)(v41 + 8) = v42;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
      }
      LOBYTE(v12) = 1;
    }
    else
    {
      v37 = *(_QWORD *)a2;
      v38 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_38;
      if ( *v38 != a2 )
        goto LABEL_38;
      *v38 = v37;
      *(_QWORD *)(v37 + 8) = v38;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
      ++*(_DWORD *)(BugCheckParameter2 + 64);
      v39 = *(_QWORD **)(BugCheckParameter2 + 56);
      v40 = (_QWORD *)(a2 + 56);
      if ( *v39 != BugCheckParameter2 + 48 )
        goto LABEL_38;
      *v40 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v39;
      *v39 = v40;
      *(_QWORD *)(BugCheckParameter2 + 56) = v40;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v3 = 1;
      v12 = 1LL;
    }
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v26, v12, a2);
  }
  else if ( *(_BYTE *)(a2 + 18) )
  {
    v14 = (_QWORD *)(a2 + 40);
    LockHandle.LockQueue.Next = 0LL;
    v15 = (volatile __int64 *)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v14 == v14 )
    {
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v15);
      --*(_DWORD *)(BugCheckParameter2 + 64);
      v16 = (_QWORD *)(a2 + 56);
      v17 = *(_QWORD *)(a2 + 56);
      v18 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v17 + 8) == a2 + 56 && (_QWORD *)*v18 == v16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *v16 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        *(_BYTE *)(a2 + 18) = 0;
        v19 = *(_QWORD *)a2;
        v20 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v20 == a2 )
        {
          *v20 = v19;
          v21 = v13 + 5;
          *(_QWORD *)(v19 + 8) = v20;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v14 = 0LL;
          *(_QWORD *)(a2 + 48) = 0LL;
          v2 = *(unsigned __int8 *)(a2 + 16);
          *(_BYTE *)(a2 + 16) = 0;
          v22 = (ULONG_PTR *)v21[1];
          if ( (_QWORD *)*v22 == v21 )
          {
            *(_QWORD *)a2 = v21;
            v3 = 0;
            *(_QWORD *)(a2 + 8) = v22;
            *v22 = a2;
            v21[1] = a2;
            goto LABEL_22;
          }
        }
      }
LABEL_38:
      __fastfail(3u);
    }
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v15);
    LOBYTE(v32) = 1;
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, v32);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v33 = *(_QWORD *)a2;
    v34 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
      goto LABEL_38;
    if ( *v34 != a2 )
      goto LABEL_38;
    *v34 = v33;
    v35 = v13 + 5;
    *(_QWORD *)(v33 + 8) = v34;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v36 = (ULONG_PTR *)v35[1];
    if ( (_QWORD *)*v36 != v35 )
      goto LABEL_38;
    *(_QWORD *)a2 = v35;
    v3 = 0;
    *(_QWORD *)(a2 + 8) = v36;
    *v36 = a2;
    v35[1] = a2;
  }
  else
  {
    v28 = *(_QWORD *)a2;
    v29 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
      goto LABEL_38;
    if ( *v29 != a2 )
      goto LABEL_38;
    *v29 = v28;
    v30 = v13 + 5;
    *(_QWORD *)(v28 + 8) = v29;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v31 = (ULONG_PTR *)v30[1];
    if ( (_QWORD *)*v31 != v30 )
      goto LABEL_38;
    *(_QWORD *)a2 = v30;
    *(_QWORD *)(a2 + 8) = v31;
    *v31 = a2;
    v30[1] = a2;
  }
LABEL_22:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v45);
  if ( v6 )
    KeAbMarkCrossThreadReleasable(v23, v6);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v46 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v46;
  __writecr8(v46);
  if ( v3 )
    result = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  if ( v2 )
    return KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)v2);
  return result;
}
