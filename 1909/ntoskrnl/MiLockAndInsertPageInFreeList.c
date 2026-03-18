/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x140193C2C
 * Callers:
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiFreeBootPageTable @ 0x140A172E4 (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x140A3D374 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
