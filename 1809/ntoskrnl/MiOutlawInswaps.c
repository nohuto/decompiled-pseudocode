/*
 * XREFs of MiOutlawInswaps @ 0x140011E64
 * Callers:
 *     MiBeginProcessClean @ 0x140011D68 (MiBeginProcessClean.c)
 * Callees:
 *     MiGetWorkingSetSwapSupport @ 0x14001290C (MiGetWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // si
  __int64 WorkingSetSwapSupport; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1 + 1280;
  v2 = *(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1120));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  *(_QWORD *)(MiGetSharedVm(v6, v5) + 24) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1120));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7);
  }
  __writecr8(v3);
  return WorkingSetSwapSupport;
}
