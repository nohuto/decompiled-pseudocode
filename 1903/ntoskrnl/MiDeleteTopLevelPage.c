/*
 * XREFs of MiDeleteTopLevelPage @ 0x1400AD4DC
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400AD0A0 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 * Callees:
 *     MiClearContainingMapping @ 0x1400AD570 (MiClearContainingMapping.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteTopLevelPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // di
  unsigned int v4; // esi
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 48 * a2 - 0x58000000000LL;
  v3 = MiLockPageInline(v2);
  MiClearContainingMapping(v2);
  *(_QWORD *)(v2 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCount(v2);
  v4 = MiDecrementShareCount(v2);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return v4;
}
