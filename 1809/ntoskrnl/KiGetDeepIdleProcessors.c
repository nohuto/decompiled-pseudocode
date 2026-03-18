/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1400DBEFC
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1400DBE30 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x1401329E0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1400DC6E0 (KeAndAffinityEx.c)
 *     KeComplementAffinityEx @ 0x1400DC7E0 (KeComplementAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400DC850 (PoCopyDeepIdleMask.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v7, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  PoCopyDeepIdleMask(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  KeComplementAffinityEx(a2, a1);
  return KeAndAffinityEx(a2, KeActiveProcessors, a2);
}
