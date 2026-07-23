/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1400DBF9C
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1400DBED0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     KeComplementAffinityEx @ 0x1400DC880 (KeComplementAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400DC8F0 (PoCopyDeepIdleMask.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
