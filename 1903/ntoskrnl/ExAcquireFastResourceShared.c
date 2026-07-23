/*
 * XREFs of ExAcquireFastResourceShared @ 0x14016B740
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14003B7A0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140092380 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x140092510 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1400C9360 (SepMandatoryIntegrityCheck.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1401027C0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     ExpWaitForResource @ 0x140043230 (ExpWaitForResource.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14009CBA0 (KeAbPreWait.c)
 *     ExpPrepareToWaitForResourceShared @ 0x140139AA8 (ExpPrepareToWaitForResourceShared.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14016B4EC (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpTryAcquireResourceShared @ 0x14016BA98 (ExpTryAcquireResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall ExAcquireFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  _KLOCK_ENTRY *v6; // rdi
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v8; // cl
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  _KUMS_CONTEXT_HEADER *volatile *SparePtr; // rcx
  PRTL_BALANCED_NODE v15; // rax
  unsigned __int8 v16; // bp
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *p_SparePtr; // rax
  _QWORD *v20; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rdx
  ULONG_PTR *v25; // rax
  _QWORD *v26; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v28; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v30[96]; // [rsp+48h] [rbp-60h] BYREF

  memset(v30, 0, 0x30uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = (a3 == 0) + 1;
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
    SparePtr = (_KUMS_CONTEXT_HEADER *volatile *)CurrentThread[1].WaitBlock[3].SparePtr;
    if ( SparePtr != &CurrentThread[1].Uch )
    {
      while ( *((_QWORD *)SparePtr + 3) != BugCheckParameter2 )
      {
        SparePtr = (_KUMS_CONTEXT_HEADER *volatile *)*SparePtr;
        if ( SparePtr == &CurrentThread[1].Uch )
          goto LABEL_13;
      }
      if ( SparePtr )
      {
        v25 = (ULONG_PTR *)*((_QWORD *)SparePtr + 6);
        v26 = SparePtr + 5;
        if ( (_QWORD *)*v25 == v26 )
        {
          *(_QWORD *)a2 = v26;
          v16 = 1;
          *(_QWORD *)(a2 + 8) = v25;
          *v25 = a2;
          v26[1] = a2;
LABEL_19:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(v13);
          goto LABEL_21;
        }
        goto LABEL_56;
      }
    }
  }
LABEL_13:
  v15 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v6 = (_KLOCK_ENTRY *)v15;
  if ( v15 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * (LOBYTE(v15[1].Children[0]) - 50)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v16 = ExpTryAcquireResourceShared(BugCheckParameter2);
  if ( v16 )
  {
    v17 = *(_QWORD **)(BugCheckParameter2 + 56);
    v18 = (_QWORD *)(a2 + 56);
    if ( *v17 == BugCheckParameter2 + 48 )
    {
      *v18 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v17;
      *v17 = v18;
      *(_QWORD *)(BugCheckParameter2 + 56) = v18;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *(_BYTE *)(a2 + 18) = 1;
      *(_QWORD *)(a2 + 48) = a2 + 40;
      *(_QWORD *)(a2 + 40) = a2 + 40;
      p_SparePtr = &CurrentThread[1].WaitBlock[3].SparePtr;
      v20 = CurrentThread[1].WaitBlock[3].SparePtr;
      if ( (_KUMS_CONTEXT_HEADER *volatile *)v20[1] == &CurrentThread[1].Uch )
      {
        *(_QWORD *)a2 = v20;
        *(_QWORD *)(a2 + 8) = p_SparePtr;
        v20[1] = a2;
        *p_SparePtr = a2;
        goto LABEL_19;
      }
    }
    goto LABEL_56;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_19;
  }
  if ( v6 )
    KeAbPreWait((__int64)v6);
  v22 = *(_QWORD **)(BugCheckParameter2 + 56);
  v23 = (_QWORD *)(a2 + 56);
  if ( *v22 != BugCheckParameter2 + 48 )
LABEL_56:
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v22;
  *v23 = BugCheckParameter2 + 48;
  *v22 = v23;
  *(_QWORD *)(BugCheckParameter2 + 56) = v23;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)CurrentThread, (__int64)v30);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList((__int64)CurrentThread, v24, 0, a2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    v28 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v28);
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v30, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v6 )
    KeAbPreAcquire(BugCheckParameter2, &v6->TreeNode, 0);
  v16 = 1;
LABEL_21:
  if ( v6 )
  {
    if ( v16 )
      v6->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return v16;
}
