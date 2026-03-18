/*
 * XREFs of PopFxDeviceWork @ 0x1402F3060
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1401814D0 (PopFxDeliverDevicePowerRequired.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall PopFxDeviceWork(ULONG_PTR BugCheckParameter2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v3; // di
  struct _KPRCB *CurrentPrcb; // rcx
  LONG result; // eax

  v2 = (KSPIN_LOCK *)(BugCheckParameter2 + 352);
  do
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v2);
    PopFxDeliverDevicePowerRequired(BugCheckParameter2, 0LL);
    KxReleaseSpinLock(v2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v3);
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 328), 0xFFFFFFFF) != 1 );
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 236), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 240), 0, 0);
  return result;
}
