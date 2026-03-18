/*
 * XREFs of MiLockAndIncrementShareCount @ 0x1400967DC
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1400231B0 (MiLinkPoolCommitChain.c)
 *     MiInitializePfnForOtherProcess @ 0x1400966C4 (MiInitializePfnForOtherProcess.c)
 *     MiMapRetpolineStubs @ 0x140154F68 (MiMapRetpolineStubs.c)
 * Callees:
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndIncrementShareCount(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = 48 * a1 - 0x58000000000LL;
  v2 = MiLockPageInline(v1);
  *(_QWORD *)(v1 + 24) ^= ((*(_QWORD *)(v1 + 24) + 1LL) ^ *(_QWORD *)(v1 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
