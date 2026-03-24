/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x14030B630
 * Callers:
 *     IovpCompleteRequest2 @ 0x14092F620 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14093027C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140933880 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140933B18 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14093E2D0 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093E3A4 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViIrpDatabaseReleaseLockExclusive(unsigned __int8 a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  ExReleaseSpinLockExclusiveFromDpcLevel(&ViIrpDatabaseLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = a1;
  __writecr8(a1);
  return result;
}
