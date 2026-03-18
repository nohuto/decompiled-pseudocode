/*
 * XREFs of ExDeletePoolTagTable @ 0x140338C98
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExDeletePoolTagTable(unsigned int a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = 56 * (PoolTrackTableSize + 1);
  v2 = (unsigned __int64)*(&ExPoolTagTables + a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  *(&ExPoolTagTables + a1) = 0LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return MmFreeIndependentPages(v2, v1);
}
