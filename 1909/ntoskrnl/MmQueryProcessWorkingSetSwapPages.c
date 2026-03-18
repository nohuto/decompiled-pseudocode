/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x14008C92C
 * Callers:
 *     PfpPrivSourceEnum @ 0x140638B3C (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStop @ 0x1406F7488 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406F756C (SmStoreCompressionStart.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x14008C9EC (MiGetWorkingSetSwapSupport.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rbp
  KIRQL v7; // di
  unsigned __int64 WorkingSetSwapSupport; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a1 + 1280;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1280) <= 2 )
    return 3221226021LL;
  v5 = -1073741275;
  v6 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v2 + 174));
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1128));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
  if ( WorkingSetSwapSupport > 2 )
  {
    v5 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 1128));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v5;
}
