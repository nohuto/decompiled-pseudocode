/*
 * XREFs of IopDisableTimer @ 0x14019D218
 * Callers:
 *     IoStopTimer @ 0x14019D200 (IoStopTimer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIoTimerEvent @ 0x14032DBCC (EtwTraceIoTimerEvent.c)
 */

BOOLEAN __fastcall IopDisableTimer(__int64 a1)
{
  BOOL v2; // ebx
  KIRQL v3; // si
  BOOLEAN result; // al
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( *(_WORD *)(a1 + 2) )
  {
    *(_WORD *)(a1 + 2) = 0;
    v2 = --IopTimerCount == 0;
  }
  KxReleaseSpinLock(&IopTimerLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    result = EtwTraceIoTimerEvent(3934LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  if ( v2 )
    return KeCancelTimer(&IopTimer);
  return result;
}
