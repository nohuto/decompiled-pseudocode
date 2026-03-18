/*
 * XREFs of MiInsertUnusedLargePageInNodeList @ 0x1402E0120
 * Callers:
 *     MiFreeLargeZeroPages @ 0x1401866E4 (MiFreeLargeZeroPages.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertUnusedLargePageInNodeList(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = MiLockPageInline(v4);
  MiInsertLargePageInNodeList(BugCheckParameter2, a2, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
