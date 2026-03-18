/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x14019344C
 * Callers:
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiFreeBootPageTable @ 0x140A16E24 (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x140A3D5A4 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
