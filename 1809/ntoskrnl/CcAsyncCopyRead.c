/*
 * XREFs of CcAsyncCopyRead @ 0x1400DFF40
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleReadAheadEx @ 0x14008DEF0 (CcScheduleReadAheadEx.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D63AC (CcAllocateWorkQueueEntry.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400DF25C (IoReferenceIoAttributionFromThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E0158 (CcPostWorkQueueAsyncRead.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  _SLIST_ENTRY *Next; // rbp
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 Partition; // r12
  struct _KTHREAD *CurrentThread; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v16; // r14
  NTSTATUS v17; // ebp
  volatile signed __int64 *v18; // rcx
  unsigned __int8 OldIrql; // bp
  PSLIST_ENTRY v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rbx
  int PagePriorityThread; // eax
  __int64 v24; // rdx
  PSLIST_ENTRY v25; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v30; // [rsp+88h] [rbp+10h]

  v30 = a2;
  Next = Object[3].Next;
  v11 = a3;
  v12 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
  Partition = CcGetPartition((_QWORD *)v12, (__int64)a2, a3);
  if ( (signed __int64)(*a2 + v11) > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x387uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object, a2, v11, a7);
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x73416343u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  PoolWithTag->Next = 0LL;
  v17 = CcAllocateWorkQueueEntry(Partition, &ListEntry);
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v16, 0x73416343u);
    RtlRaiseStatus(v17);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  v18 = (volatile signed __int64 *)CurrentThread->Process[2].ActiveProcessors.Bitmap[8];
  if ( v18 )
  {
    if ( ((v11 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(v18, (v11 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(v18 + 2, 1uLL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  ++*(_DWORD *)(v12 + 4);
  ++*(_DWORD *)(v12 + 536);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 520));
  v20 = ListEntry;
  v21 = v30;
  *((_BYTE *)&ListEntry[7].Next + 8) = 5;
  v20[1].Next = (_SLIST_ENTRY *)v12;
  v22 = a8;
  v20[2].Next = Object;
  *((_QWORD *)&v20[1].Next + 1) = *v21;
  *((_DWORD *)&v20[2].Next + 2) = v11;
  v20[3].Next = v16;
  v20[4].Next = *(_SLIST_ENTRY **)(v22 + 16);
  *((_QWORD *)&v20[4].Next + 1) = a6;
  v20[5].Next = (_SLIST_ENTRY *)v22;
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  *(_DWORD *)(v24 + 56) = PagePriorityThread;
  v25 = ListEntry;
  *((_QWORD *)&ListEntry[5].Next + 1) = KeGetCurrentThread()->ApcState.Process;
  v25[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v25[7].Next) = *(_BYTE *)(v22 + 24);
  HIDWORD(v25[7].Next) = *(_DWORD *)(v22 + 28);
  *((_QWORD *)&v25[6].Next + 1) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread, (__int64)(&v25[6].Next + 1));
  if ( *(_DWORD *)(v22 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x41EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v25);
  return 1;
}
