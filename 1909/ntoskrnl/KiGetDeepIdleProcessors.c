/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1400FC9E0
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1400FB5E0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14009E1A0 (KeAndAffinityEx.c)
 *     KeComplementAffinityEx @ 0x14009E350 (KeComplementAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400FCA70 (PoCopyDeepIdleMask.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(unsigned __int16 *a1, unsigned __int16 *a2)
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
  KeComplementAffinityEx((__int64)a2, a1);
  return KeAndAffinityEx(a2, (unsigned __int16 *)KeActiveProcessors, a2);
}
