/*
 * XREFs of PfSnPowerBoost @ 0x1406EC110
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14066A190 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     PfSnPowerBoostUpdate @ 0x1406EC18C (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  if ( a2 )
  {
    PfSnPowerBoostUpdate(1LL);
    ExAcquireRundownProtection_0(RunRef);
    KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      PfSnPowerBoostUpdate(0LL);
      ExReleaseRundownProtection_0(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
