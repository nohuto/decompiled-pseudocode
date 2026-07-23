/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x140188D5C
 * Callers:
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiFreeBootPageTable @ 0x1409D4228 (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x1409F8BF4 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1)
{
  ULONG_PTR v2; // rbx
  unsigned __int8 v3; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (a1 + 0x58000000000LL) / 48;
  v3 = MiLockPageInline(a1);
  MiInsertPageInFreeOrZeroedList(v2, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
