/*
 * XREFs of IopRemoveHardErrorPacket @ 0x14027F5C4
 * Callers:
 *     IopHardErrorThread @ 0x14081B160 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140436FB0);
  v1 = qword_140436FA0;
  v2 = v0;
  v3 = *(_QWORD *)qword_140436FA0;
  if ( *(__int64 **)(qword_140436FA0 + 8) != &qword_140436FA0 || *(_QWORD *)(v3 + 8) != qword_140436FA0 )
    __fastfail(3u);
  qword_140436FA0 = *(_QWORD *)qword_140436FA0;
  *(_QWORD *)(v3 + 8) = &qword_140436FA0;
  IopCurrentHardError = v1;
  KxReleaseSpinLock(&qword_140436FB0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
