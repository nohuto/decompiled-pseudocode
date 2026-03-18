/*
 * XREFs of KeQueryTimerDueTime @ 0x1402904C8
 * Callers:
 *     ExGetNextWakeTimeForDeepSleep @ 0x14031C4BC (ExGetNextWakeTimeForDeepSleep.c)
 *     ExGetWakeTimerList @ 0x14031C530 (ExGetWakeTimerList.c)
 *     ExGetNextWakeTime @ 0x14057E734 (ExGetNextWakeTime.c)
 *     NtQueryTimer @ 0x1408CF9A0 (NtQueryTimer.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400FBDF0 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryTimerDueTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    v4 = *(_QWORD *)(a1 + 24);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v4;
}
