/*
 * XREFs of IopCheckHardErrorEmpty @ 0x14027E878
 * Callers:
 *     IopHardErrorThread @ 0x140819F80 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

char IopCheckHardErrorEmpty()
{
  char v0; // di
  KIRQL v1; // al
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 1;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140435F10);
  IopCurrentHardError = 0LL;
  v2 = v1;
  if ( (__int64 *)qword_140435F00 == &qword_140435F00 )
  {
    byte_140435F38 = 0;
    v0 = 0;
  }
  KxReleaseSpinLock(&qword_140435F10);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v0;
}
