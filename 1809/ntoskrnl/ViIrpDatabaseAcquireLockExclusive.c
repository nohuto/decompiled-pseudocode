/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x14030B4E8
 * Callers:
 *     IovpCompleteRequest2 @ 0x14092F620 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14093027C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140933880 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140933B18 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14093E2D0 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093E3A4 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
