/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1401430D8
 * Callers:
 *     SmStoreCompressionStart @ 0x1406F57A8 (SmStoreCompressionStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = ExAcquireSpinLockExclusive(&dword_140468910);
  if ( !dword_140468900 )
    KeResetEvent(&Object);
  ++dword_140468900;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140468910);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v0);
  KeSetEvent(&stru_140468920, 0, 0);
  return KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
}
