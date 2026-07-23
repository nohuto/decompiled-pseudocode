/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140159E20
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140159CC0 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x1406E91B0 (PipEnumerateDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r9
  _QWORD *v5; // rcx
  KIRQL v6; // di
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140435C68);
  v5 = (_QWORD *)a2[1];
  v6 = v3;
  v7 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2
    || (_QWORD *)*v5 != a2
    || (*v5 = v7,
        *(_QWORD *)(v7 + 8) = v5,
        v8 = (_QWORD *)qword_140435C40,
        --dword_140435C30,
        *(__int64 **)qword_140435C40 != &qword_140435C38) )
  {
    __fastfail(3u);
  }
  *a2 = &qword_140435C38;
  a2[1] = v8;
  *v8 = a2;
  qword_140435C40 = (__int64)a2;
  KeReleaseSemaphoreEx((__int64)&byte_140435C48, 0LL, 1, v4, 0);
  KxReleaseSpinLock(&qword_140435C68);
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
