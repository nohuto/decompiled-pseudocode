/*
 * XREFs of IopCheckHardErrorEmpty @ 0x14027EB68
 * Callers:
 *     IopHardErrorThread @ 0x14081B160 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char IopCheckHardErrorEmpty()
{
  char v0; // di
  KIRQL v1; // al
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 1;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140436FB0);
  IopCurrentHardError = 0LL;
  v2 = v1;
  if ( (__int64 *)qword_140436FA0 == &qword_140436FA0 )
  {
    byte_140436FD8 = 0;
    v0 = 0;
  }
  KxReleaseSpinLock(&qword_140436FB0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v0;
}
