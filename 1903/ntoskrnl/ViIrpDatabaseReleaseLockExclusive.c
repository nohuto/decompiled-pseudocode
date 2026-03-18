/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x14032931C
 * Callers:
 *     IovpCompleteRequest2 @ 0x14096DEA0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14096EAF8 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140972EC0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140973134 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14097DB64 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14097DC38 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
