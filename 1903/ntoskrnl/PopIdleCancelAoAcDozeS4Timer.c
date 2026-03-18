/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x14015DB58
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1406A1068 (PopUmpoProcessPowerMessage.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140724370 (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleCsStateChanged @ 0x1408B65E4 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408B66AC (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeCancelTimer2 @ 0x140113E70 (KeCancelTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x1408B2420 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  KIRQL v3; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140442FA4 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer);
    byte_140442FA4 = 0;
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
