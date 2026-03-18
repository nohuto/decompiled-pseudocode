/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14014618C
 * Callers:
 *     PipEnumerateDevice @ 0x140704150 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // di
  _QWORD *v4; // rax
  BOOL v5; // esi
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140460588);
  v4 = (_QWORD *)qword_140460548;
  v5 = PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(__int64 **)qword_140460548 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140460550;
  qword_140460548 = (__int64)a2;
  KxReleaseSpinLock(&qword_140460588);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return v5;
}
