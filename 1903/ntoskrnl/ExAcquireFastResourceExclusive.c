/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x14016AEA0
 * Callers:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14016AB48 (ExpFastResourceLegacyAcquireExclusive.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x14003DF80 (ExpTryAcquireResourceExclusive.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     ExpWaitForResource @ 0x140043230 (ExpWaitForResource.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14009CBA0 (KeAbPreWait.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140123A4C (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14016B4EC (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14016C590 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall ExAcquireFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  _KLOCK_ENTRY *v6; // rdi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v8; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  PRTL_BALANCED_NODE v14; // rax
  char v15; // r14
  _QWORD *v16; // r9
  _QWORD *v17; // r8
  __int64 v18; // rdx
  unsigned __int8 v19; // r10
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 FastOwnerEntryForThread; // rax
  ULONG_PTR *v25; // rcx
  __int64 v26; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v28; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v30[7]; // [rsp+48h] [rbp-38h] BYREF

  memset(v30, 0, 0x30uLL);
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
  *(_BYTE *)(a2 + 17) |= 4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 )
  {
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v25 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v26 = FastOwnerEntryForThread + 40;
      if ( *v25 == v26 )
      {
        *(_QWORD *)a2 = v26;
        v15 = 1;
        *(_QWORD *)(a2 + 8) = v25;
        *v25 = a2;
        *(_QWORD *)(v26 + 8) = a2;
LABEL_18:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v19 && v13 < v19 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v13);
        goto LABEL_20;
      }
LABEL_52:
      __fastfail(3u);
    }
  }
  v14 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v6 = (_KLOCK_ENTRY *)v14;
  if ( v14 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * (LOBYTE(v14[1].Children[0]) - 50)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v15 = ExpTryAcquireResourceExclusive(BugCheckParameter2);
  if ( v15 )
  {
    v16 = *(_QWORD **)(BugCheckParameter2 + 56);
    v17 = (_QWORD *)(a2 + 56);
    if ( *v16 != BugCheckParameter2 + 48 )
      goto LABEL_52;
    *v17 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v16;
    *v16 = v17;
    *(_QWORD *)(BugCheckParameter2 + 56) = v17;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v18, 0LL, a2);
LABEL_17:
    v19 = 2;
    goto LABEL_18;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_BYTE *)(a2 + 16) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_17;
  }
  if ( v6 )
    KeAbPreWait((__int64)v6);
  v21 = *(_QWORD **)(BugCheckParameter2 + 56);
  v22 = (_QWORD *)(a2 + 56);
  if ( *v21 != BugCheckParameter2 + 48 )
    goto LABEL_52;
  *(_QWORD *)(a2 + 64) = v21;
  *v22 = BugCheckParameter2 + 48;
  *v21 = v22;
  *(_QWORD *)(BugCheckParameter2 + 56) = v22;
  *(_BYTE *)(a2 + 19) = 1;
  ExpPrepareToWaitForResourceExclusive(BugCheckParameter2, (__int64)CurrentThread, v30);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v23, 0LL, a2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    v28 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v28);
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v30, 0x10224u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v6 )
    KeAbPreAcquire(BugCheckParameter2, &v6->TreeNode, 0);
  v15 = 1;
LABEL_20:
  if ( v6 )
  {
    if ( v15 )
      v6->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return v15;
}
