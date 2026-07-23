/*
 * XREFs of MiDemoteLargeFreePage @ 0x14012BB74
 * Callers:
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiTryUnlinkNodeLargePage @ 0x14012BC80 (MiTryUnlinkNodeLargePage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v6; // edi
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a2 & ~(MiLargePageSizes[a3] - 1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (int)MiTryUnlinkNodeLargePage(a1, v4, a3, 8LL) <= 1 )
  {
    MiInsertLargePageInFreeOrZeroList(48 * v4 - 0x58000000000LL, a3, 0, 0, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v6;
}
