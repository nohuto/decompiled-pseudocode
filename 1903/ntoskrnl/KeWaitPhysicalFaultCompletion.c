/*
 * XREFs of KeWaitPhysicalFaultCompletion @ 0x1402B317C
 * Callers:
 *     HvlNotifyPageHeat @ 0x14034D450 (HvlNotifyPageHeat.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEpfDrainCompletionQueue @ 0x1402B3384 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1402B3424 (KiEpfStart.c)
 */

__int64 __fastcall KeWaitPhysicalFaultCompletion(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  ++dword_140446DBC;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiEpfDrainCompletionQueue();
  KiEpfStart(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
