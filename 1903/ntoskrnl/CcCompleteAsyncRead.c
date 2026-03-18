/*
 * XREFs of CcCompleteAsyncRead @ 0x1400808AC
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x1400A9898 (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncReadWorker @ 0x140136150 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x14018C320 (CcAsyncReadWorker.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x14005A4E0 (PsGetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x14007A2AC (CcDecrementOpenCount.c)
 *     PsSetPagePriorityThread @ 0x140080854 (PsSetPagePriorityThread.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CcCopyReadExceptionFilter @ 0x14027D164 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x140687B10 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r8
  PVOID v8; // rax
  __int64 v9; // rcx
  unsigned __int8 OldIrql; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v13; // [rsp+7Ch] [rbp-B4h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-90h] BYREF
  PVOID v16; // [rsp+B8h] [rbp-78h]
  __int64 v17; // [rsp+C0h] [rbp-70h]
  int v18[2]; // [rsp+C8h] [rbp-68h]
  __int64 v19; // [rsp+D0h] [rbp-60h]
  __int64 v20; // [rsp+D8h] [rbp-58h]
  struct _KTHREAD *v21; // [rsp+E0h] [rbp-50h]
  __int64 v22; // [rsp+140h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+148h] [rbp+18h]
  int PagePriorityThread; // [rsp+150h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  LODWORD(v22) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v18 = *(_QWORD *)(a1 + 32);
  v17 = *(_QWORD *)(a1 + 24);
  v23 = *(_DWORD *)(a1 + 40);
  v13 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 64);
  v19 = *(_QWORD *)(a1 + 72);
  v4 = v19;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 104);
  PsSetPagePriorityThread(v7, v13);
  v21 = KeGetCurrentThread();
  v21[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v4 >= 0 )
  {
    *(_DWORD *)v4 = 0;
    *(_QWORD *)(v4 + 8) = v23;
    if ( (*(_BYTE *)(v3 + 10) & 5) != 0 )
      v8 = *(PVOID *)(v3 + 24);
    else
      v8 = MmMapLockedPagesSpecifyCache((PMDL)v3, 0, MmCached, 0LL, 0, 0x40000020u);
    v16 = v8;
    if ( v8 )
      CcMapAndCopyFromCache(v18[0], v8, (__int64)&v22, v13, v6);
    else
      *(_DWORD *)v4 = -1073741670;
  }
  if ( v6 )
    IoDiskIoAttributionDereference(v6);
  if ( (_DWORD)v22 )
    ++CcNumberAsyncReadRefaulted;
  if ( v5 && *(_QWORD *)v5 )
    (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v5 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 520));
  v9 = *(_QWORD *)(a1 + 128);
  v20 = v9;
  if ( v9 != *(_QWORD *)(v2 + 528) )
    KeBugCheckEx(0x34u, 0x643uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 128), &LockHandle);
  CcDecrementOpenCount(v2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
