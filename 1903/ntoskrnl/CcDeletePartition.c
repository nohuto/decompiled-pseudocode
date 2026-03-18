/*
 * XREFs of CcDeletePartition @ 0x14027EC20
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     CcCreatePartition @ 0x1401902E0 (CcCreatePartition.c)
 *     CcExitPartition @ 0x14027F04C (CcExitPartition.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     CcDereferencePartition @ 0x14007E0D4 (CcDereferencePartition.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     KeFlushQueuedDpcs @ 0x1400F7B40 (KeFlushQueuedDpcs.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x1401C0150 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     CcUninitializePartitionVacbs @ 0x14027F2B0 (CcUninitializePartitionVacbs.c)
 *     CcUninitializeAsyncRead @ 0x14027F5A8 (CcUninitializeAsyncRead.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
