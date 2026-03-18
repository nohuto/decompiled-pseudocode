/*
 * XREFs of IopRemoveHardErrorPacket @ 0x140293D60
 * Callers:
 *     IopHardErrorThread @ 0x140853E60 (IopHardErrorThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140461AB0);
  v1 = qword_140461AA0;
  v2 = v0;
  v3 = *(_QWORD *)qword_140461AA0;
  if ( *(__int64 **)(qword_140461AA0 + 8) != &qword_140461AA0 || *(_QWORD *)(v3 + 8) != qword_140461AA0 )
    __fastfail(3u);
  qword_140461AA0 = *(_QWORD *)qword_140461AA0;
  *(_QWORD *)(v3 + 8) = &qword_140461AA0;
  IopCurrentHardError = v1;
  KxReleaseSpinLock(&qword_140461AB0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
