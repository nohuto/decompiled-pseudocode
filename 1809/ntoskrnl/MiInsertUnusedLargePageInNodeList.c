/*
 * XREFs of MiInsertUnusedLargePageInNodeList @ 0x1402C5CE0
 * Callers:
 *     MiFreeLargeZeroPages @ 0x14002891C (MiFreeLargeZeroPages.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x140028C1C (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertUnusedLargePageInNodeList(ULONG_PTR a1)
{
  __int64 v2; // rsi
  unsigned __int8 v3; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = 48 * a1 - 0x58000000000LL;
  v3 = MiLockPageInline(v2);
  MiInsertLargePageInNodeList(a1);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
