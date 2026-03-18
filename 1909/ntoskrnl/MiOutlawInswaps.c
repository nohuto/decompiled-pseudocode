/*
 * XREFs of MiOutlawInswaps @ 0x14008CC90
 * Callers:
 *     MiBeginProcessClean @ 0x14008CD24 (MiBeginProcessClean.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiGetWorkingSetSwapSupport @ 0x14008C9EC (MiGetWorkingSetSwapSupport.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // si
  __int64 WorkingSetSwapSupport; // rbp
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1 + 1280;
  v2 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1128));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  *((_QWORD *)MiGetSharedVm(v5) + 3) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1128));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return WorkingSetSwapSupport;
}
