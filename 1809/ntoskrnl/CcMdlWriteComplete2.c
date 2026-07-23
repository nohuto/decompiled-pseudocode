/*
 * XREFs of CcMdlWriteComplete2 @ 0x1400E19A8
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x140664CB0 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1406CA1D0 (CcMdlWriteComplete.c)
 * Callees:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3)
{
  __int64 v3; // rbx
  CSHORT MdlFlags; // bp
  struct _MDL *v6; // rdi
  NTSTATUS v7; // esi
  struct _MDL *v8; // r14
  __int16 v9; // bp
  struct _FAST_MUTEX *v10; // r12
  struct _MDL *Next; // r15
  __int64 ByteCount; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 Partition; // rax
  unsigned __int8 OldIrql; // bl
  struct _MDL *v18; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v21; // ecx
  int v22; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF

  v3 = *a2;
  MdlFlags = a3->MdlFlags;
  v6 = a3;
  v24 = *a2;
  v7 = 0;
  v8 = a3;
  v9 = MdlFlags & 2;
  v10 = *(struct _FAST_MUTEX **)(*(_QWORD *)(a1 + 40) + 8LL);
  do
  {
    Next = v8->Next;
    if ( v9 )
      MmUnlockPages(v8);
    ByteCount = v8->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), (va_list)&v24, ByteCount);
      if ( v22 < 0 )
        v7 = v22;
    }
    else
    {
      CcSetDirtyInMask(v10, &v24, ByteCount, 0LL);
    }
    v15 = v8->ByteCount;
    v8 = Next;
    v3 += v15;
    v24 = v3;
  }
  while ( Next );
  if ( v9 )
  {
    Partition = CcGetPartition(v10, v13, v14);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)v10);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  if ( v7 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v7);
    v21 = -1073741591;
    if ( IsNtstatusExpected )
      v21 = v7;
    RtlRaiseStatus(v21);
  }
  do
  {
    v18 = v6->Next;
    IoFreeMdl(v6);
    v6 = v18;
  }
  while ( v18 );
}
