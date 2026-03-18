/*
 * XREFs of KzLowerIrql @ 0x140015D60
 * Callers:
 *     KiVirtualizationException @ 0x1401D4000 (KiVirtualizationException.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  struct _KPRCB *CurrentPrcb; // rcx

  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && NewIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(NewIrql);
}
