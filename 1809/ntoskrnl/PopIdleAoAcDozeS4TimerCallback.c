/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x1402E4A80
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  byte_140417664 = 0;
  v1 = v0;
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v1);
  _m_prefetchw(&dword_14041766C);
  if ( !_InterlockedOr(&dword_14041766C, 1u) )
  {
    PopDeepSleepSetDisengageReason(4u);
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
  }
}
