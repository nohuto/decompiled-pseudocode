/*
 * XREFs of ExAcquireFastResourceShared @ 0x140165C60
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400A6D60 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1400A6F90 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400B9F90 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14010B1F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceShared @ 0x140137F00 (ExpPrepareToWaitForResourceShared.c)
 *     ExpTryAcquireResourceShared @ 0x140166154 (ExpTryAcquireResourceShared.c)
 *     ExpFindFastOwnerEntryForThread @ 0x140166184 (ExpFindFastOwnerEntryForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140166238 (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r13
  _KLOCK_ENTRY *v7; // rsi
  unsigned __int8 v8; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r14
  __int64 FastOwnerEntryForThread; // rax
  unsigned __int8 v15; // r10
  PRTL_BALANCED_NODE v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  char v19; // bp
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  _QWORD *p_SparePtr; // rax
  _QWORD *SparePtr; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  ULONG_PTR *v28; // rcx
  __int64 v29; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v31; // rcx
  volatile signed __int64 *v32[3]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v33[56]; // [rsp+48h] [rbp-60h] BYREF

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
  *(_BYTE *)(a2 + 17) &= ~4u;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v28 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v29 = FastOwnerEntryForThread + 40;
      if ( *v28 == v29 )
      {
        *(_QWORD *)a2 = v29;
        v19 = 1;
        *(_QWORD *)(a2 + 8) = v28;
        *v28 = a2;
        *(_QWORD *)(v29 + 8) = a2;
LABEL_20:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v15 && v13 < v15 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v13);
        goto LABEL_22;
      }
      goto LABEL_53;
    }
  }
  v16 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v7 = (_KLOCK_ENTRY *)v16;
  if ( v16 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * (LOBYTE(v16[1].Children[0]) - 50)) / 96)) | 1;
  v32[0] = 0LL;
  v32[1] = (volatile signed __int64 *)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)v32, (volatile __int64 *)(BugCheckParameter2 + 96), v17);
  v19 = ExpTryAcquireResourceShared(BugCheckParameter2);
  if ( v19 )
  {
    v20 = *(_QWORD **)(BugCheckParameter2 + 56);
    v21 = (_QWORD *)(a2 + 56);
    if ( *v20 == BugCheckParameter2 + 48 )
    {
      *v21 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v20;
      *v20 = v21;
      *(_QWORD *)(BugCheckParameter2 + 56) = v21;
      KxReleaseQueuedSpinLock(v32);
      *(_BYTE *)(a2 + 18) = 1;
      *(_QWORD *)(a2 + 48) = a2 + 40;
      *(_QWORD *)(a2 + 40) = a2 + 40;
      p_SparePtr = &CurrentThread[1].WaitBlock[3].SparePtr;
      SparePtr = CurrentThread[1].WaitBlock[3].SparePtr;
      if ( (_KUMS_CONTEXT_HEADER *volatile *)SparePtr[1] == &CurrentThread[1].Uch )
      {
        *(_QWORD *)a2 = SparePtr;
        *(_QWORD *)(a2 + 8) = p_SparePtr;
        SparePtr[1] = a2;
        *p_SparePtr = a2;
LABEL_19:
        v15 = 2;
        goto LABEL_20;
      }
    }
    goto LABEL_53;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KxReleaseQueuedSpinLock(v32);
    goto LABEL_19;
  }
  if ( v7 )
    KeAbPreWait((__int64)v7, v18);
  v25 = *(_QWORD **)(BugCheckParameter2 + 56);
  v26 = (_QWORD *)(a2 + 56);
  if ( *v25 != BugCheckParameter2 + 48 )
LABEL_53:
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v25;
  *v26 = BugCheckParameter2 + 48;
  *v25 = v26;
  *(_QWORD *)(BugCheckParameter2 + 56) = v26;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)CurrentThread, (__int64)v33);
  *(_BYTE *)(a2 + 19) = 1;
  KxReleaseQueuedSpinLock(v32);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v27, 0LL, a2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    v31 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v31);
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v33, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, &v7->TreeNode, 0);
  v19 = 1;
LABEL_22:
  if ( v7 )
  {
    if ( v19 )
      v7->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v19;
}
