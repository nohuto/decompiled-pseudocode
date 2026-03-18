/*
 * XREFs of CcMdlWriteComplete2 @ 0x1400FC4F0
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x1406AF530 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1406ED890 (CcMdlWriteComplete.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     CcDecrementOpenCount @ 0x14007A2AC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _MDL *v5; // r14
  NTSTATUS v6; // edi
  __int16 v8; // r15
  __int64 v9; // rax
  struct _FAST_MUTEX *v10; // r13
  struct _MDL *Next; // r12
  __int64 ByteCount; // r8
  __int64 v13; // rax
  PMDL v14; // rsi
  __int64 Partition; // rax
  unsigned __int8 OldIrql; // bl
  struct _MDL *v17; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v20; // ecx
  _QWORD v21[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+B0h] [rbp+50h]

  Mdl = a3;
  v4 = *a2;
  v21[0] = 0LL;
  v21[1] = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a3;
  v6 = 0;
  v8 = a3->MdlFlags & 2;
  v9 = *(_QWORD *)(a1 + 40);
  v23 = v4;
  v10 = *(struct _FAST_MUTEX **)(v9 + 8);
  do
  {
    Next = v5->Next;
    if ( v8 )
      MmUnlockPages(v5);
    ByteCount = v5->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), &v23, ByteCount, a4, v21, 1u);
      if ( SLODWORD(v21[0]) < 0 )
        v6 = v21[0];
    }
    else
    {
      CcSetDirtyInMask(v10, &v23, ByteCount, 0LL);
    }
    v13 = v5->ByteCount;
    v5 = Next;
    v4 += v13;
    v23 = v4;
  }
  while ( Next );
  v14 = Mdl;
  if ( v8 )
  {
    Partition = CcGetPartition(v10);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)v10);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  if ( v6 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v6);
    v20 = -1073741591;
    if ( IsNtstatusExpected )
      v20 = v6;
    RtlRaiseStatus(v20);
  }
  do
  {
    v17 = v14->Next;
    IoFreeMdl(v14);
    v14 = v17;
  }
  while ( v17 );
}
