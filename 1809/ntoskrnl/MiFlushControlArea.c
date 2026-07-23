/*
 * XREFs of MiFlushControlArea @ 0x1402A246C
 * Callers:
 *     MiDeleteCachedSegment @ 0x1402A1A54 (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1402A2B70 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x140022E5C (MmIsWriteErrorFatal.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiInsertUnusedSegment @ 0x14007B590 (MiInsertUnusedSegment.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPreventControlAreaDelete @ 0x1402A2B34 (MiPreventControlAreaDelete.c)
 *     MiRemoveWakeListEntry @ 0x1402A3400 (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405DDE70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiFlushControlArea(char *P, unsigned __int8 a2, __int64 **a3, struct _FILE_OBJECT **a4)
{
  int v4; // r13d
  struct _FILE_OBJECT *v7; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  BOOL v10; // r12d
  KIRQL v11; // r15
  signed __int64 v12; // rdx
  struct _KPRCB *v13; // rcx
  NTSTATUS v14; // r12d
  ULONG Characteristics; // r13d
  KIRQL v16; // al
  __int64 inserted; // rsi
  __int64 result; // rax
  __int64 v19; // rbx
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rcx
  NTSTATUS v22[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  __int16 v25; // [rsp+60h] [rbp-9h]
  char v26; // [rsp+62h] [rbp-7h]
  int v27; // [rsp+64h] [rbp-5h]
  _QWORD v28[11]; // [rsp+68h] [rbp-1h] BYREF
  volatile LONG *SpinLock; // [rsp+D0h] [rbp+67h]
  BOOL v30; // [rsp+D8h] [rbp+6Fh]

  *((_DWORD *)P + 14) |= 0x100u;
  v28[1] = v28;
  v4 = 0;
  *a4 = 0LL;
  v28[0] = v28;
  v23 = *((_QWORD *)P + 10);
  *a3 = 0LL;
  *((_QWORD *)P + 10) = &v23;
  v24 = 4LL;
  v25 = 263;
  v26 = 6;
  v27 = 0;
  v7 = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(P);
  SpinLock = (volatile LONG *)(P + 72);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(a2);
  PoolWithTag = 0LL;
  v10 = (int)FsRtlAcquireFileForCcFlushEx(v7) >= 0;
  v30 = v10;
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
  v12 = _InterlockedDecrement64((volatile signed __int64 *)P + 14);
  *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * (*((_WORD *)P + 30) & 0x3FF)) + 1624LL) = 0LL;
  if ( !v10 || (*((_DWORD *)P + 14) & 1) != 0 )
  {
    *((_DWORD *)P + 14) &= ~0x100u;
    HIDWORD(v24) = 1;
    if ( !v12 )
    {
      MiRemoveWakeListEntry(P, &v23);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
      __writecr8(v11);
      if ( v10 )
        FsRtlReleaseFileForCcFlush(v7);
      MiDeleteControlArea(P);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      return 0LL;
    }
    v14 = 0;
  }
  else
  {
    ++*((_DWORD *)P + 19);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
    __writecr8(v11);
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    v14 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)P + 16, 0LL, 0LL, 2u, v22);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( v14 < 0 )
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
    Characteristics = v7->DeviceObject->Characteristics;
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
    *((_DWORD *)P + 14) &= ~0x100u;
    v11 = v16;
    v4 = (Characteristics >> 4) & 1;
    *a3 = MiDecrementModifiedWriteCount((__int64)P, 1);
  }
  inserted = 0LL;
  MiRemoveWakeListEntry(P, &v23);
  if ( *((_QWORD *)P + 3) | *((_QWORD *)P + 5) | *((_DWORD *)P + 14) & 1 )
    goto LABEL_30;
  if ( !HIDWORD(v24) || !*((_QWORD *)P + 4) )
  {
    if ( v14 >= 0 || !*((_QWORD *)P + 4) )
      goto LABEL_27;
    if ( v14 != -1073740749 && MmIsWriteErrorFatal(1, v4, v14) )
    {
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)ObFastReferenceObjectLocked((_QWORD *)P + 8);
        LODWORD(PoolWithTag[1].List.Blink) = v14;
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
LABEL_27:
      result = 1LL;
      *a4 = v7;
      return result;
    }
  }
  inserted = MiInsertUnusedSegment((__int64)P);
  if ( !inserted )
LABEL_30:
    v19 = 0LL;
  else
    v19 = *(_QWORD *)(qword_14043B808 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v20);
  }
  __writecr8(v11);
  if ( v30 )
    FsRtlReleaseFileForCcFlush(v7);
  ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v19, 1LL, inserted);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
