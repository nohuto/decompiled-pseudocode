/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140145C74
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140145B60 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x140704150 (PipEnumerateDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  _DISPATCHER_HEADER *v4; // r9
  _QWORD *v5; // rcx
  KIRQL v6; // di
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140460588);
  v5 = (_QWORD *)a2[1];
  v6 = v3;
  v7 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2
    || (_QWORD *)*v5 != a2
    || (*v5 = v7,
        *(_QWORD *)(v7 + 8) = v5,
        v8 = (_QWORD *)qword_140460560,
        --dword_140460550,
        *(__int64 **)qword_140460560 != &qword_140460558) )
  {
    __fastfail(3u);
  }
  *a2 = &qword_140460558;
  a2[1] = v8;
  *v8 = a2;
  qword_140460560 = (__int64)a2;
  KeReleaseSemaphoreEx((__int64)&byte_140460568, 0, 1, v4, 0);
  KxReleaseSpinLock(&qword_140460588);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
