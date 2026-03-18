/*
 * XREFs of IopCheckHardErrorEmpty @ 0x140293414
 * Callers:
 *     IopHardErrorThread @ 0x140853E60 (IopHardErrorThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char IopCheckHardErrorEmpty()
{
  char v0; // di
  KIRQL v1; // al
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 1;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140461AB0);
  IopCurrentHardError = 0LL;
  v2 = v1;
  if ( (__int64 *)qword_140461AA0 == &qword_140461AA0 )
  {
    byte_140461AD8 = 0;
    v0 = 0;
  }
  KxReleaseSpinLock(&qword_140461AB0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v0;
}
