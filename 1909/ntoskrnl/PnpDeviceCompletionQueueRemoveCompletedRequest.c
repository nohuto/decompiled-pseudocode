/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140145F4C
 * Callers:
 *     PipEnumerateDevice @ 0x140704150 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rdx
  KIRQL v5; // di
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  KeWaitForSingleObject(&byte_140460568, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140460588);
  v4 = (_QWORD *)a2[1];
  v5 = v3;
  v6 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v4 != a2 )
    __fastfail(3u);
  *v4 = v6;
  *(_QWORD *)(v6 + 8) = v4;
  KxReleaseSpinLock(&qword_140460588);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  return a2;
}
