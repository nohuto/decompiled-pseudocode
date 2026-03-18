/*
 * XREFs of PpmDisableHighPerfRequestDeferredExpiration @ 0x1402FF9A4
 * Callers:
 *     PdcPoPerfOverride @ 0x1408AB050 (PdcPoPerfOverride.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PoClearPowerRequestInternal @ 0x1400D6A84 (PoClearPowerRequestInternal.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmDisableHighPerfRequestDeferredExpiration(char a1)
{
  KIRQL v2; // bl
  unsigned int i; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( a1 )
  {
    KeCancelTimer(&PpmHighPerfEndTimer);
    PpmHighPerfDeferredEndTime = 0LL;
    for ( i = 0; i < PpmHighPerfDeferredEndCount; ++i )
      PoClearPowerRequestInternal(PpmHighPerfPowerRequest, 4);
    PpmHighPerfDeferredEndCount = 0;
    PpmHighPerfDeferredEndTime = 0LL;
  }
  PpmHighPerfDeferredEndDisabled = a1;
  KxReleaseSpinLock(&PpmHighPerfRequestLock);
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
