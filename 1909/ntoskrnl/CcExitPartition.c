/*
 * XREFs of CcExitPartition @ 0x14027EDAC
 * Callers:
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA1F8 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     CcNotifyWriteBehindInternal @ 0x1401201EC (CcNotifyWriteBehindInternal.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14017181C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x14027D150 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x14027E980 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x14027EB34 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  KIRQL v5; // bp
  struct _KPRCB *v6; // rcx
  unsigned __int8 v7; // bp
  struct _KPRCB *v8; // rcx
  KIRQL v10; // al
  KIRQL v11; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 OldIrql; // bp
  struct _KPRCB *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1[1];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
  {
    if ( a2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 128), &LockHandle);
      v10 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 902) = 2;
      v11 = v10;
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v11);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v14 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
      __writecr8(OldIrql);
      CcPostDeferredWrites(v2);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
        (const void *)v2,
        a1);
      CcDeletePartition((char *)v2);
    }
    else
    {
      CcNotifyWriteBehindInternal((struct _KEVENT *)v2, 2);
      CcWaitForCurrentLazyWriterActivityInternal(v2);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 128), &LockHandle);
      v4 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 902) = 1;
      v5 = v4;
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        v6 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v6);
      }
      __writecr8(v5);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v7 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v8 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v8);
      }
      __writecr8(v7);
      while ( *(_QWORD *)(v2 + 16) != v2 + 16 || *(_QWORD *)(v2 + 48) != v2 + 72 || *(_QWORD *)(v2 + 56) != v2 + 72 )
      {
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 48), v2);
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 16), v2);
      }
    }
  }
}
