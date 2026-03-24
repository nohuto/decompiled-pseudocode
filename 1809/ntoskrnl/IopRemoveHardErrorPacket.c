/*
 * XREFs of IopRemoveHardErrorPacket @ 0x14027F3D4
 * Callers:
 *     IopHardErrorThread @ 0x140819F60 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140435F10);
  v1 = qword_140435F00;
  v2 = v0;
  v3 = *(_QWORD *)qword_140435F00;
  if ( *(__int64 **)(qword_140435F00 + 8) != &qword_140435F00 || *(_QWORD *)(v3 + 8) != qword_140435F00 )
    __fastfail(3u);
  qword_140435F00 = *(_QWORD *)qword_140435F00;
  *(_QWORD *)(v3 + 8) = &qword_140435F00;
  IopCurrentHardError = v1;
  KxReleaseSpinLock(&qword_140435F10);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
