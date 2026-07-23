/*
 * XREFs of CcExitPartition @ 0x14026B7A0
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcNotifyWriteBehindInternal @ 0x14012C00C (CcNotifyWriteBehindInternal.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140160D5C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x14026B544 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(struct _KEVENT **a1, int a2)
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

  v2 = (__int64)a1[1];
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
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
      CcNotifyWriteBehindInternal(a1[1], 2);
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
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
