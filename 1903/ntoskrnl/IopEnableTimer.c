/*
 * XREFs of IopEnableTimer @ 0x140293694
 * Callers:
 *     IoStartTimer @ 0x140298F70 (IoStartTimer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIoTimerEvent @ 0x14032DBCC (EtwTraceIoTimerEvent.c)
 */

__int64 __fastcall IopEnableTimer(__int64 a1)
{
  KIRQL v2; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( !*(_WORD *)(a1 + 2) )
  {
    if ( !IopTimerCount )
      KeSetCoalescableTimer(&IopTimer, (LARGE_INTEGER)-10000000LL, 0x3E8u, 0x23u, &IopTimerDpc);
    ++IopTimerCount;
    *(_WORD *)(a1 + 2) = 1;
  }
  KxReleaseSpinLock(&IopTimerLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    return EtwTraceIoTimerEvent(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  return result;
}
