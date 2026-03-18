/*
 * XREFs of KeSuspendClockTimerSafe @ 0x1402A5480
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1405A93E8 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA190 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x1405AA568 (PnprQuiesceProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 KeSuspendClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *v1; // rbx
  int v2; // esi
  struct _KPRCB *v3; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v6; // edi

  if ( KeGetEffectiveIrql() >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)KiClockState;
    v6 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      result = off_1404245C8[0]();
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v6 )
      ++dword_14044D2C8;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v1 = KeGetCurrentPrcb();
    v2 = KiClockTimerOwner;
    if ( (v1->PendingTickFlags & 1) != 0 )
    {
      off_1404245C8[0]();
      v1->PendingTickFlags &= ~1u;
    }
    if ( v1->Number == v2 )
      ++dword_14044D2C8;
    if ( v1->ClockOwner )
      v1->ClockOwner = 0;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v3 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v3->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v3);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
