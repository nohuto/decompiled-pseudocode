/*
 * XREFs of PfSnCancelTraceTimer @ 0x1400D4CB0
 * Callers:
 *     PfSnDeactivateTrace @ 0x1400D4BDC (PfSnDeactivateTrace.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnCancelTraceTimer(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  KIRQL v4; // di
  bool v5; // bp
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 272);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 272));
  *(_DWORD *)(a1 + 280) |= 2u;
  v4 = v3;
  v5 = KeCancelTimer((PKTIMER)(a1 + 136)) != 0;
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  if ( v5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}
