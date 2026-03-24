/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1402C4364
 * Callers:
 *     SmStoreCompressionStart @ 0x1408AB700 (SmStoreCompressionStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B8AA0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = ExAcquireSpinLockExclusive(&dword_14043CDD0);
  if ( !dword_14043CDC0 )
    KeResetEvent(&stru_14043CE10);
  ++dword_14043CDC0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043CDD0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v0);
  KeSetEvent(&stru_14043CDE0, 0, 0);
  return KeWaitForSingleObject(&stru_14043CE10, WrKernel, 0, 0, 0LL);
}
