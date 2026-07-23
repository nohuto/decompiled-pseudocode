/*
 * XREFs of IopErrorLogGetEntry @ 0x14016BB78
 * Callers:
 *     IopErrorLogThread @ 0x14070D630 (IopErrorLogThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 IopErrorLogGetEntry()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  v1 = IopErrorLogListHead;
  v2 = v0;
  if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
  {
    IopErrorLogSessionPending = 0;
    v1 = 0LL;
  }
  else
  {
    v4 = *(_QWORD *)IopErrorLogListHead;
    if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead || *(_QWORD *)(v4 + 8) != IopErrorLogListHead )
      __fastfail(3u);
    IopErrorLogListHead = *(_QWORD *)IopErrorLogListHead;
    *(_QWORD *)(v4 + 8) = &IopErrorLogListHead;
  }
  KxReleaseSpinLock(&IopErrorLogLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
