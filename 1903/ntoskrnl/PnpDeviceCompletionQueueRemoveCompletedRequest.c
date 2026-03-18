/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1401458AC
 * Callers:
 *     PipEnumerateDevice @ 0x140702370 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rdx
  KIRQL v5; // di
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  KeWaitForSingleObject(&byte_140460888, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1404608A8);
  v4 = (_QWORD *)a2[1];
  v5 = v3;
  v6 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v4 != a2 )
    __fastfail(3u);
  *v4 = v6;
  *(_QWORD *)(v6 + 8) = v4;
  KxReleaseSpinLock(&qword_1404608A8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  return a2;
}
