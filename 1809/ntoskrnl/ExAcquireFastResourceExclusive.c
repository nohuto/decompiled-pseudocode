/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x1401653D0
 * Callers:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164BD4 (ExpFastResourceLegacyAcquireExclusive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExpTryAcquireResourceExclusive @ 0x140050D30 (ExpTryAcquireResourceExclusive.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140120E84 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFindFastOwnerEntryForThread @ 0x140166184 (ExpFindFastOwnerEntryForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140166238 (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r12
  _KLOCK_ENTRY *v7; // rsi
  unsigned __int8 v8; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r14
  PRTL_BALANCED_NODE v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // bp
  _QWORD *v18; // r9
  _QWORD *v19; // r8
  __int64 v20; // rdx
  unsigned __int8 v21; // r10
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  __int64 FastOwnerEntryForThread; // rax
  ULONG_PTR *v27; // rcx
  __int64 v28; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v30; // rcx
  volatile signed __int64 *v31[3]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v32[7]; // [rsp+48h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
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
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  *(_BYTE *)(a2 + 17) |= 4u;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 )
  {
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v27 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v28 = FastOwnerEntryForThread + 40;
      if ( *v27 == v28 )
      {
        *(_QWORD *)a2 = v28;
        v17 = 1;
        *(_QWORD *)(a2 + 8) = v27;
        *v27 = a2;
        *(_QWORD *)(v28 + 8) = a2;
LABEL_18:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v21 && v13 < v21 )
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
  v7 = (_KLOCK_ENTRY *)v14;
  if ( v14 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * (LOBYTE(v14[1].Children[0]) - 50)) / 96)) | 1;
  v31[0] = 0LL;
  v31[1] = (volatile signed __int64 *)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)v31, (volatile __int64 *)(BugCheckParameter2 + 96), v15);
  v17 = ExpTryAcquireResourceExclusive(BugCheckParameter2);
  if ( v17 )
  {
    v18 = *(_QWORD **)(BugCheckParameter2 + 56);
    v19 = (_QWORD *)(a2 + 56);
    if ( *v18 != BugCheckParameter2 + 48 )
      goto LABEL_52;
    *v19 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v18;
    *v18 = v19;
    *(_QWORD *)(BugCheckParameter2 + 56) = v19;
    KxReleaseQueuedSpinLock(v31);
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v20, 0LL, a2);
LABEL_17:
    v21 = 2;
    goto LABEL_18;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KxReleaseQueuedSpinLock(v31);
    goto LABEL_17;
  }
  if ( v7 )
    KeAbPreWait((__int64)v7, v16);
  v23 = *(_QWORD **)(BugCheckParameter2 + 56);
  v24 = (_QWORD *)(a2 + 56);
  if ( *v23 != BugCheckParameter2 + 48 )
    goto LABEL_52;
  *(_QWORD *)(a2 + 64) = v23;
  *v24 = BugCheckParameter2 + 48;
  *v23 = v24;
  *(_QWORD *)(BugCheckParameter2 + 56) = v24;
  *(_BYTE *)(a2 + 19) = 1;
  ExpPrepareToWaitForResourceExclusive(BugCheckParameter2, (__int64)CurrentThread, v32);
  KxReleaseQueuedSpinLock(v31);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v25, 0LL, a2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    v30 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v30);
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v32, 0x10224u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, &v7->TreeNode, 0);
  v17 = 1;
LABEL_20:
  if ( v7 )
  {
    if ( v17 )
      v7->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v17;
}
