/*
 * XREFs of PopFxIdleTimeoutDpcRoutine @ 0x140180950
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400B0FF4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x1400B1094 (PopFxAddLogEntry.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1401814D0 (PopFxDeliverDevicePowerRequired.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1402F2050 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleTimeoutDpcRoutine(__int64 a1, ULONG_PTR a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // di
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (KSPIN_LOCK *)(a2 + 352);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 352));
  _m_prefetchw((const void *)(a2 + 32));
  v5 = *(_DWORD *)(a2 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a2 + 32), 0xFFFFFFFB);
    if ( *(_DWORD *)(a2 + 40) != 2 )
      PopFxBugCheck(0x613uLL, a2, 0LL, 0LL);
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a2 + 48), 0, 0);
    (*(void (__fastcall **)(_QWORD))(a2 + 144))(*(_QWORD *)(a2 + 192));
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 40), 0xFFFFFFFF) != 1 )
      PopFxAddLogEntry(*(_QWORD *)(a2 + 48), 0, 17, 0LL);
  }
  else
  {
    PopFxDeliverDevicePowerRequired(a2);
  }
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
