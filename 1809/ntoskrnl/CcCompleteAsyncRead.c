/*
 * XREFs of CcCompleteAsyncRead @ 0x1400DF3B4
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x1400E0158 (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1E20 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PsSetPagePriorityThread @ 0x1400DEF80 (PsSetPagePriorityThread.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CcCopyReadExceptionFilter @ 0x140269914 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x140639780 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r8
  int v8; // r9d
  int v9; // edx
  PVOID MappedSystemVa; // rax
  __int64 v11; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v15; // [rsp+44h] [rbp-A4h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-90h]
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-80h]
  int v18[2]; // [rsp+78h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-58h] BYREF
  __int64 v20; // [rsp+F8h] [rbp+10h] BYREF
  int v21; // [rsp+100h] [rbp+18h]
  int PagePriorityThread; // [rsp+108h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  LODWORD(v20) = 0;
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v18 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v21 = *(_DWORD *)(a1 + 40);
  v15 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 104);
  PsSetPagePriorityThread(v7, v15);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v4 >= 0 )
  {
    *(_DWORD *)v4 = 0;
    v9 = v21;
    *(_QWORD *)(v4 + 8) = (unsigned int)v21;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      v9 = v21;
    }
    if ( MappedSystemVa )
    {
      LOBYTE(v8) = 1;
      CcMapAndCopyFromCache(v18[0], v3, v9, v8, MappedSystemVa, (__int64)&v20, v15, v6);
    }
    else
    {
      *(_DWORD *)v4 = -1073741670;
    }
  }
  if ( v6 )
    IoDiskIoAttributionDereference(v6);
  if ( (_DWORD)v20 )
    ++CcNumberAsyncReadRefaulted;
  if ( v5 && *(_QWORD *)v5 )
    (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v5 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 520));
  v11 = *(_QWORD *)(a1 + 128);
  if ( v11 != *(_QWORD *)(v2 + 528) )
    KeBugCheckEx(0x34u, 0x643uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 128), &LockHandle);
  CcDecrementOpenCount(v2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
