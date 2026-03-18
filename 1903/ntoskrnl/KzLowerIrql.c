/*
 * XREFs of KzLowerIrql @ 0x140015970
 * Callers:
 *     KiVirtualizationException @ 0x1401D3400 (KiVirtualizationException.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
