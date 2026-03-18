/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1403292D4
 * Callers:
 *     IovpCompleteRequest2 @ 0x14096DEA0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14096EAF8 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140972EC0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140973134 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14097DB64 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14097DC38 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
