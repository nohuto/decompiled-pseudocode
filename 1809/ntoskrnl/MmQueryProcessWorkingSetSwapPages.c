/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x14001284C
 * Callers:
 *     PfpPrivSourceEnum @ 0x1405B2B60 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStart @ 0x1408AC960 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1408AC9DC (SmStoreCompressionStop.c)
 * Callees:
 *     MiGetWorkingSetSwapSupport @ 0x14001290C (MiGetWorkingSetSwapSupport.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rbp
  KIRQL v7; // di
  unsigned __int64 WorkingSetSwapSupport; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int32 *SchedulerAssist; // rdx

  v2 = a1 + 1280;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1280) <= 2 )
    return 3221226021LL;
  v5 = -1073741275;
  v6 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v2 + 174));
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1120));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
  if ( WorkingSetSwapSupport > 2 )
  {
    v5 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 1120));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    _InterlockedAnd(SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
  }
  __writecr8(v7);
  return v5;
}
