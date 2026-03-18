/*
 * XREFs of MiFlushControlArea @ 0x1402B96B0
 * Callers:
 *     MiDeleteCachedSegment @ 0x1402B8C8C (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1402B9D30 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSegment @ 0x1400701F8 (MiInsertUnusedSegment.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     MiDeleteControlArea @ 0x1400DF8FC (MiDeleteControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x1400DFAD8 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x1400DFB94 (MmIsWriteErrorFatal.c)
 *     ExReleaseSpinLockExclusive @ 0x14010A2A0 (ExReleaseSpinLockExclusive.c)
 *     MiPreventControlAreaDelete @ 0x1402B9CF4 (MiPreventControlAreaDelete.c)
 *     MiRemoveWakeListEntry @ 0x1402BA5C0 (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069ECE0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069EF34 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiFlushControlArea(char *P, KIRQL a2, __int64 **a3, struct _FILE_OBJECT **a4)
{
  int v5; // r12d
  volatile LONG *v7; // r13
  struct _FILE_OBJECT *v8; // r14
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  BOOL v10; // esi
  KIRQL v11; // r9
  signed __int64 v12; // rdx
  NTSTATUS v13; // r15d
  ULONG Characteristics; // r12d
  KIRQL v15; // al
  __int64 inserted; // rsi
  __int64 result; // rax
  __int64 v18; // rdi
  KIRQL v19; // r9
  BOOL v20; // [rsp+40h] [rbp-40h]
  _QWORD v21[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  _QWORD v25[2]; // [rsp+70h] [rbp-10h] BYREF
  KIRQL OldIrql; // [rsp+C0h] [rbp+40h]

  v24 = 393479LL;
  v23 = 4LL;
  v21[0] = 0LL;
  v25[1] = v25;
  v5 = 0;
  *((_DWORD *)P + 14) |= 0x100u;
  v25[0] = v25;
  v22 = *((_QWORD *)P + 10);
  v21[1] = 0LL;
  *((_QWORD *)P + 10) = &v22;
  *a4 = 0LL;
  *a3 = 0LL;
  v7 = (volatile LONG *)(P + 72);
  v8 = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(P);
  ExReleaseSpinLockExclusive(v7, a2);
  PoolWithTag = 0LL;
  v10 = (int)FsRtlAcquireFileForCcFlushEx(v8) >= 0;
  v20 = v10;
  v11 = ExAcquireSpinLockExclusive(v7);
  OldIrql = v11;
  v12 = _InterlockedDecrement64((volatile signed __int64 *)P + 14);
  *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8LL * (*((_WORD *)P + 30) & 0x3FF)) + 1624LL) = 0LL;
  if ( !v10 || (*((_DWORD *)P + 14) & 1) != 0 )
  {
    *((_DWORD *)P + 14) &= ~0x100u;
    HIDWORD(v23) = 1;
    if ( !v12 )
    {
      MiRemoveWakeListEntry(P, &v22);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)P + 18, v19);
      if ( v10 )
        FsRtlReleaseFileForCcFlush(v8);
      MiDeleteControlArea(P);
      ObfDereferenceObject(v8);
      return 0LL;
    }
    v13 = 0;
  }
  else
  {
    ++*((_DWORD *)P + 19);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)P + 18, v11);
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    v13 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)P + 16, 0LL, 0LL, 2u, (unsigned int *)v21);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( v13 < 0 )
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
    Characteristics = v8->DeviceObject->Characteristics;
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
    *((_DWORD *)P + 14) &= ~0x100u;
    OldIrql = v15;
    v5 = (Characteristics >> 4) & 1;
    *a3 = MiDecrementModifiedWriteCount((__int64)P, 1);
  }
  inserted = 0LL;
  MiRemoveWakeListEntry(P, &v22);
  if ( *((_QWORD *)P + 3) | *((_QWORD *)P + 5) | *((_DWORD *)P + 14) & 1 )
    goto LABEL_20;
  if ( !HIDWORD(v23) || !*((_QWORD *)P + 4) )
  {
    if ( v13 >= 0 || !*((_QWORD *)P + 4) )
      goto LABEL_17;
    if ( v13 != -1073740749 && MmIsWriteErrorFatal(1, v5, v13) )
    {
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)ObFastReferenceObjectLocked((_QWORD *)P + 8);
        LODWORD(PoolWithTag[1].List.Blink) = v13;
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
LABEL_17:
      result = 1LL;
      *a4 = v8;
      return result;
    }
  }
  inserted = MiInsertUnusedSegment((__int64)P);
  if ( !inserted )
LABEL_20:
    v18 = 0LL;
  else
    v18 = *(_QWORD *)(qword_140466188 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  ExReleaseSpinLockExclusive(v7, OldIrql);
  if ( v20 )
    FsRtlReleaseFileForCcFlush(v8);
  ObfDereferenceObject(v8);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v18, 1LL, inserted);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
