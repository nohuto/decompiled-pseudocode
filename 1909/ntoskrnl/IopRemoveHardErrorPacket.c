/*
 * XREFs of IopRemoveHardErrorPacket @ 0x140293AC0
 * Callers:
 *     IopHardErrorThread @ 0x140853560 (IopHardErrorThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140461790);
  v1 = qword_140461780;
  v2 = v0;
  v3 = *(_QWORD *)qword_140461780;
  if ( *(__int64 **)(qword_140461780 + 8) != &qword_140461780 || *(_QWORD *)(v3 + 8) != qword_140461780 )
    __fastfail(3u);
  qword_140461780 = *(_QWORD *)qword_140461780;
  *(_QWORD *)(v3 + 8) = &qword_140461780;
  IopCurrentHardError = v1;
  KxReleaseSpinLock(&qword_140461790);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
