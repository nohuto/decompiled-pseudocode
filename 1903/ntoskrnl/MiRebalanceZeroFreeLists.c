/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1402DA7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     MiNodeFreeZeroPages @ 0x1400F3834 (MiNodeFreeZeroPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x1402D9CFC (MiGetNodeStandbyPageCount.c)
 *     MiPruneStandbyPages @ 0x1402DA3F8 (MiPruneStandbyPages.c)
 */

void __fastcall MiRebalanceZeroFreeLists(_QWORD *a1)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  unsigned int v4; // r8d
  __int64 v5; // r11
  __int64 v6; // rdi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    for ( j = 0; j < MmNumberOfChannels; ++j )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages((_QWORD *)(1984LL * i + a1[2]), j, 4096) < 0x200
        && (unsigned __int64)MiGetNodeStandbyPageCount((__int64)a1, i, j) >= 0x1000
        && v5 != 1024 )
      {
        MiPruneStandbyPages((__int64)a1, i, v4, 1024 - v5);
      }
    }
  }
  v6 = a1[21];
  KeAcquireInStackQueuedSpinLock(&qword_140466140, &LockHandle);
  a1[918] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  PsDereferencePartition(v6);
}
