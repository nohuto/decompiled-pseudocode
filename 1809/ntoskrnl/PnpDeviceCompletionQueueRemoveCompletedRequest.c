/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14015A100
 * Callers:
 *     PipEnumerateDevice @ 0x1406E91B0 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1406ECCFC (PnpStartDeviceNode.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _QWORD *v4; // rdx
  KIRQL v5; // di
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  KeWaitForSingleObject(&byte_140435C48, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140435C68);
  v4 = (_QWORD *)a2[1];
  v5 = v3;
  v6 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v4 != a2 )
    __fastfail(3u);
  *v4 = v6;
  *(_QWORD *)(v6 + 8) = v4;
  KxReleaseSpinLock(&qword_140435C68);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  return a2;
}
