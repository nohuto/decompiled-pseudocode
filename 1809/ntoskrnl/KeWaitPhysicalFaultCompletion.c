/*
 * XREFs of KeWaitPhysicalFaultCompletion @ 0x14029BE38
 * Callers:
 *     HvlNotifyPageHeat @ 0x14032BE28 (HvlNotifyPageHeat.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEpfDrainCompletionQueue @ 0x14029C044 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14029C0E4 (KiEpfStart.c)
 */

__int64 __fastcall KeWaitPhysicalFaultCompletion(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  ++dword_14041C23C;
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
