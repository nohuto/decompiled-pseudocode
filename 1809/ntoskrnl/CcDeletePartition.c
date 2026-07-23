/*
 * XREFs of CcDeletePartition @ 0x14026B390
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CcCreatePartition @ 0x14018A69C (CcCreatePartition.c)
 *     CcExitPartition @ 0x14026B7A0 (CcExitPartition.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeFlushQueuedDpcs @ 0x1400DBED0 (KeFlushQueuedDpcs.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x1401B8370 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     CcUninitializePartitionVacbs @ 0x14026B9F4 (CcUninitializePartitionVacbs.c)
 *     CcUninitializeAsyncRead @ 0x14026BC1C (CcUninitializeAsyncRead.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePartition(char *P)
{
  void *v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rdx
  KIRQL v5; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 **v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 **v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx

  KeSetEvent((PRKEVENT)P + 38, 0, 0);
  CcDereferencePartition((__int64)P);
  v2 = (void *)*((_QWORD *)P + 120);
  if ( v2 )
  {
    ZwWaitForSingleObject(v2, 0, 0LL);
    ZwClose(*((HANDLE *)P + 120));
    *((_QWORD *)P + 120) = 0LL;
  }
  if ( !KeCancelTimer((PKTIMER)(P + 528)) )
    KeFlushQueuedDpcs();
  if ( P[901] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v4 = *((_QWORD *)P + 1);
    v5 = v3;
    --CcPartitionCount;
    *(_QWORD *)(v4 + 8) = 0LL;
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v5);
  }
  v7 = (__int64 **)(P + 208);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v9 = *v8;
    if ( (__int64 **)v8[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
LABEL_22:
      __fastfail(3u);
    *v7 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    ExFreePoolWithTag(v8, 0x71576343u);
  }
  v10 = (__int64 **)(P + 288);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (__int64 *)v10 )
      break;
    v12 = *v11;
    if ( (__int64 **)v11[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
      goto LABEL_22;
    *v10 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v10;
    ExFreePoolWithTag(v11, 0x71576343u);
  }
  v13 = (void *)*((_QWORD *)P + 85);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x70546343u);
    *((_QWORD *)P + 85) = 0LL;
  }
  CcUninitializePartitionVacbs(P);
  CcUninitializeAsyncRead(P);
  DbgPrintEx(0x7Fu, 2u, "CcDeletePartition: Partition Deleted=%p, PartitionObject=%p \n", P, *((const void **)P + 1));
  ExFreePoolWithTag(P, 0x72506343u);
}
