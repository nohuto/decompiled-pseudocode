/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1402DA520
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     MiNodeFreeZeroPages @ 0x1400DBD74 (MiNodeFreeZeroPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x1402D9A5C (MiGetNodeStandbyPageCount.c)
 *     MiPruneStandbyPages @ 0x1402DA158 (MiPruneStandbyPages.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_140465E40, &LockHandle);
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
