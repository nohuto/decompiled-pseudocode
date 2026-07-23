/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x14030B820
 * Callers:
 *     IovpCompleteRequest2 @ 0x140930620 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14093127C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140934880 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140934B18 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14093F2D0 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093F3A4 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
