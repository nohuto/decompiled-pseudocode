/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140145AEC
 * Callers:
 *     PipEnumerateDevice @ 0x140702370 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // di
  _QWORD *v4; // rax
  BOOL v5; // esi
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1404608A8);
  v4 = (_QWORD *)qword_140460868;
  v5 = PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(__int64 **)qword_140460868 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140460870;
  qword_140460868 = (__int64)a2;
  KxReleaseSpinLock(&qword_1404608A8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return v5;
}
