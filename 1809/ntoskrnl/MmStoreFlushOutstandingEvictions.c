/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1402C4554
 * Callers:
 *     SmStoreCompressionStart @ 0x1408AC960 (SmStoreCompressionStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = ExAcquireSpinLockExclusive(&dword_14043DE90);
  if ( !dword_14043DE80 )
    KeResetEvent(&stru_14043DED0);
  ++dword_14043DE80;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043DE90);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v0);
  KeSetEvent(&stru_14043DEA0, 0, 0);
  return KeWaitForSingleObject(&stru_14043DED0, WrKernel, 0, 0, 0LL);
}
