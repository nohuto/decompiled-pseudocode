/*
 * XREFs of ExAcquireFastResourceSharedStarveExclusive @ 0x14016B290
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140339F74 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExpWaitForResource @ 0x140042F70 (ExpWaitForResource.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x14012F68C (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14013A180 (ExpPrepareToWaitForResourceShared.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14016BBDC (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

char __fastcall ExAcquireFastResourceSharedStarveExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  _KLOCK_ENTRY *v6; // rsi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v8; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  _KUMS_CONTEXT_HEADER *volatile *i; // rax
  ULONG_PTR *v15; // rcx
  _QWORD *v16; // rax
  char v17; // r14
  PRTL_BALANCED_NODE v19; // rax
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v27; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v29[56]; // [rsp+48h] [rbp-38h] BYREF

  memset(v29, 0, 0x30uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 2 - (a3 != 0);
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v8 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v8, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v10->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v11 != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v11, 0LL);
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
    KeBugCheckEx(0x1C6u, 2uLL, a2, v12, 0LL);
  *(_BYTE *)(a2 + 17) &= ~4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    for ( i = (_KUMS_CONTEXT_HEADER *volatile *)CurrentThread[1].WaitBlock[3].SparePtr;
          ;
          i = (_KUMS_CONTEXT_HEADER *volatile *)*i )
    {
      if ( i == &CurrentThread[1].Uch )
        goto LABEL_22;
      if ( *((_QWORD *)i + 3) == BugCheckParameter2 )
        break;
    }
    if ( i )
    {
      v15 = (ULONG_PTR *)*((_QWORD *)i + 6);
      v16 = i + 5;
      if ( (_QWORD *)*v15 == v16 )
      {
        *(_QWORD *)a2 = v16;
        v17 = 1;
        *(_QWORD *)(a2 + 8) = v15;
        *v15 = a2;
        v16[1] = a2;
        goto LABEL_18;
      }
LABEL_55:
      __fastfail(3u);
    }
  }
LABEL_22:
  v19 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v6 = (_KLOCK_ENTRY *)v19;
  if ( v19 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * (LOBYTE(v19[1].Children[0]) - 50)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v17 = ExpTryAcquireResourceSharedStarveExclusive(BugCheckParameter2);
  if ( v17 )
  {
    v20 = *(_QWORD **)(BugCheckParameter2 + 56);
    v21 = (_QWORD *)(a2 + 56);
    if ( *v20 != BugCheckParameter2 + 48 )
      goto LABEL_55;
    *v21 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v20;
    *v20 = v21;
    *(_QWORD *)(BugCheckParameter2 + 56) = v21;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v22, 0LL, a2);
LABEL_18:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v13);
    goto LABEL_20;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_BYTE *)(a2 + 16) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_18;
  }
  if ( v6 )
    KeAbPreWait((__int64)v6);
  v23 = *(_QWORD **)(BugCheckParameter2 + 56);
  v24 = (_QWORD *)(a2 + 56);
  if ( *v23 != BugCheckParameter2 + 48 )
    goto LABEL_55;
  *(_QWORD *)(a2 + 64) = v23;
  *v24 = BugCheckParameter2 + 48;
  *v23 = v24;
  *(_QWORD *)(BugCheckParameter2 + 56) = v24;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)CurrentThread, (__int64)v29);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v25, 0LL, a2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    v27 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v27);
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v29, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v6 )
    KeAbPreAcquire(BugCheckParameter2, &v6->TreeNode, 0);
  v17 = 1;
LABEL_20:
  if ( v6 )
  {
    if ( v17 )
      v6->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return v17;
}
