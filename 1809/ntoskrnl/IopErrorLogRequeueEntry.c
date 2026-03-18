/*
 * XREFs of IopErrorLogRequeueEntry @ 0x14028624C
 * Callers:
 *     IopErrorLogThread @ 0x14070C3B0 (IopErrorLogThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopErrorLogRequeueEntry(__int64 *a1)
{
  KIRQL v2; // bl
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  v3 = IopErrorLogListHead;
  if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead )
    __fastfail(3u);
  a1[1] = (__int64)&IopErrorLogListHead;
  *a1 = v3;
  *(_QWORD *)(v3 + 8) = a1;
  IopErrorLogListHead = (__int64)a1;
  ErrorLogSessionOpened = 0;
  KxReleaseSpinLock(&IopErrorLogLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
