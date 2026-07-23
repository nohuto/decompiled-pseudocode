/*
 * XREFs of ExDisownFastResource @ 0x140165770
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140165244 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpFindFastOwnerEntryForThread @ 0x140166184 (ExpFindFastOwnerEntryForThread.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1401661E0 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140166238 (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3)
{
  volatile signed __int64 *CurrentThread; // r13
  unsigned int v6; // r12d
  char v7; // si
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v9; // rcx
  ULONG_PTR v10; // r9
  unsigned __int8 v11; // r15
  __int64 v12; // r8
  __int64 FastOwnerEntryForThread; // rax
  char v14; // cl
  __int64 v15; // r8
  __int64 v16; // r14
  _QWORD *v17; // rsi
  volatile __int64 *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  ULONG_PTR *v24; // rcx
  __int64 v25; // rcx
  LONG_PTR result; // rax
  _QWORD *v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  ULONG_PTR *v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  ULONG_PTR *v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v45; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v46; // [rsp+38h] [rbp-28h]
  volatile signed __int64 *v47[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v48; // [rsp+A8h] [rbp+48h]

  CurrentThread = (volatile signed __int64 *)KeGetCurrentThread();
  v48 = 0;
  v6 = 0;
  v7 = 0;
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
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v47[1] = CurrentThread + 255;
  v47[0] = 0LL;
  KxAcquireQueuedSpinLock((__int64)v47, CurrentThread + 255, a3);
  LOBYTE(v12) = 1;
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, v12, 0LL);
  v14 = *(_BYTE *)(a2 + 18);
  v15 = 0LL;
  v16 = FastOwnerEntryForThread;
  if ( FastOwnerEntryForThread )
  {
    if ( v14 )
    {
      v17 = (_QWORD *)(a2 + 40);
      v45 = 0LL;
      v18 = (volatile __int64 *)(BugCheckParameter2 + 96);
      v46 = BugCheckParameter2 + 96;
      if ( (_QWORD *)*v17 == v17 )
      {
        KxAcquireQueuedSpinLock((__int64)&v45, v18, 0LL);
        --*(_DWORD *)(BugCheckParameter2 + 64);
        v19 = (_QWORD *)(a2 + 56);
        v20 = *(_QWORD *)(a2 + 56);
        v21 = *(_QWORD **)(a2 + 64);
        if ( *(_QWORD *)(v20 + 8) == a2 + 56 && (_QWORD *)*v21 == v19 )
        {
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          *v19 = 0LL;
          *(_QWORD *)(a2 + 64) = 0LL;
          KxReleaseQueuedSpinLock(&v45);
          *(_BYTE *)(a2 + 18) = 0;
          v22 = *(_QWORD *)a2;
          v23 = *(_QWORD **)(a2 + 8);
          if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v23 == a2 )
          {
            *v23 = v22;
            *(_QWORD *)(v22 + 8) = v23;
            *(_QWORD *)a2 = 0LL;
            *(_QWORD *)(a2 + 8) = 0LL;
            *v17 = 0LL;
            *(_QWORD *)(a2 + 48) = 0LL;
            v6 = *(unsigned __int8 *)(a2 + 16);
            *(_BYTE *)(a2 + 16) = 0;
            v24 = *(ULONG_PTR **)(v16 + 48);
            if ( *v24 == v16 + 40 )
            {
              v7 = 0;
              *(_QWORD *)a2 = v16 + 40;
              *(_QWORD *)(a2 + 8) = v24;
              *v24 = a2;
              *(_QWORD *)(v16 + 48) = a2;
              goto LABEL_20;
            }
          }
        }
LABEL_38:
        __fastfail(3u);
      }
      KxAcquireQueuedSpinLock((__int64)&v45, v18, 0LL);
      ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
      KxReleaseQueuedSpinLock(&v45);
      v35 = *(_QWORD *)a2;
      v36 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_38;
      if ( *v36 != a2 )
        goto LABEL_38;
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v37 = *(ULONG_PTR **)(v16 + 48);
      if ( *v37 != v16 + 40 )
        goto LABEL_38;
      *(_QWORD *)a2 = v16 + 40;
      v7 = 0;
      *(_QWORD *)(a2 + 8) = v37;
      *v37 = a2;
      *(_QWORD *)(v16 + 48) = a2;
    }
    else
    {
      v31 = *(_QWORD *)a2;
      v32 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_38;
      if ( *v32 != a2 )
        goto LABEL_38;
      *v32 = v31;
      v33 = FastOwnerEntryForThread + 40;
      *(_QWORD *)(v31 + 8) = v32;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v34 = *(ULONG_PTR **)(v33 + 8);
      if ( *v34 != v33 )
        goto LABEL_38;
      *(_QWORD *)a2 = v33;
      *(_QWORD *)(a2 + 8) = v34;
      *v34 = a2;
      *(_QWORD *)(v33 + 8) = a2;
    }
  }
  else
  {
    if ( v14 )
    {
      v27 = (_QWORD *)(a2 + 40);
      if ( (_QWORD *)*v27 == v27 )
      {
        v28 = *(unsigned __int8 *)(a2 + 16);
        v7 = 1;
        *(_BYTE *)(a2 + 18) = 0;
        v29 = *(_QWORD *)a2;
        v48 = v28;
        v30 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v30 != a2 )
          goto LABEL_38;
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        *v27 = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      else
      {
        v45 = 0LL;
        v46 = BugCheckParameter2 + 96;
        KxAcquireQueuedSpinLock((__int64)&v45, (volatile __int64 *)(BugCheckParameter2 + 96), 0LL);
        ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 0);
        KxReleaseQueuedSpinLock(&v45);
        v42 = *(_QWORD *)a2;
        v7 = 1;
        v43 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v43 != a2 )
          goto LABEL_38;
        *v43 = v42;
        *(_QWORD *)(v42 + 8) = v43;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
      }
      LOBYTE(v15) = 1;
    }
    else
    {
      v38 = *(_QWORD *)a2;
      v39 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_38;
      if ( *v39 != a2 )
        goto LABEL_38;
      *v39 = v38;
      *(_QWORD *)(v38 + 8) = v39;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v46 = BugCheckParameter2 + 96;
      v45 = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v45, (volatile __int64 *)(BugCheckParameter2 + 96), 0LL);
      ++*(_DWORD *)(BugCheckParameter2 + 64);
      v40 = *(_QWORD **)(BugCheckParameter2 + 56);
      v41 = (_QWORD *)(a2 + 56);
      if ( *v40 != BugCheckParameter2 + 48 )
        goto LABEL_38;
      *v41 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v40;
      *v40 = v41;
      *(_QWORD *)(BugCheckParameter2 + 56) = v41;
      KxReleaseQueuedSpinLock(&v45);
      v7 = 1;
      LOBYTE(v15) = 1;
    }
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v29, v15, a2);
  }
LABEL_20:
  KxReleaseQueuedSpinLock(v47);
  if ( v48 )
    KeAbMarkCrossThreadReleasable(v25, v48);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v11;
  __writecr8(v11);
  if ( v7 )
    result = ObfReferenceObjectWithTag((PVOID)CurrentThread, 0x746C6644u);
  if ( v6 )
    return KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)v6);
  return result;
}
