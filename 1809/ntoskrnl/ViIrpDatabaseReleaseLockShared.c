/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x14030B690
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x14093E18C (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14093E224 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViIrpDatabaseReleaseLockShared(unsigned __int8 a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  ExReleaseSpinLockSharedFromDpcLevel(&ViIrpDatabaseLock);
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
