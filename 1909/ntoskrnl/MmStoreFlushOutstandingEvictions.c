/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x140143618
 * Callers:
 *     SmStoreCompressionStart @ 0x1406F756C (SmStoreCompressionStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  KIRQL v0; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = ExAcquireSpinLockExclusive(&dword_140468650);
  if ( !dword_140468640 )
    KeResetEvent(&Object);
  ++dword_140468640;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140468650);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v0);
  KeSetEvent(&stru_140468660, 0, 0);
  return KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
}
