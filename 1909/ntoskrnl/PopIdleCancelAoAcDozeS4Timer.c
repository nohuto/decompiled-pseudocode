/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x14015E1F8
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14069DBA8 (PopUmpoProcessPowerMessage.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140726210 (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleCsStateChanged @ 0x1408B5EB4 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408B5F7C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KeCancelTimer2 @ 0x140113700 (KeCancelTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x1408B1C80 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140442F44 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer);
    byte_140442F44 = 0;
    v2 = 1;
  }
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
