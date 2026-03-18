/*
 * XREFs of MiDeleteTopLevelPage @ 0x14008EDEC
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14008E9B4 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 * Callees:
 *     MiClearContainingMapping @ 0x14008EE80 (MiClearContainingMapping.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
