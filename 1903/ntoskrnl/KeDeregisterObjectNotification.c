/*
 * XREFs of KeDeregisterObjectNotification @ 0x140114660
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x140113D04 (ExpShutdownWorkerFactory.c)
 *     IopCancelWaitCompletionPacket @ 0x140114550 (IopCancelWaitCompletionPacket.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140114608 (ExpLeaveWorkerFactoryAwayMode.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeDeregisterObjectNotification(volatile signed __int32 *a1, __int64 *a2)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 *v6; // rcx
  __int64 **v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe(a1);
  if ( *((_BYTE *)a2 + 17) == 4 )
  {
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v7 != a2 )
      __fastfail(3u);
    *v7 = v6;
    v4 = 1;
    v6[1] = (__int64)v7;
    *((_BYTE *)a2 + 17) = 5;
  }
  _InterlockedAnd(a1, 0xFFFFFF7F);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v4;
}
