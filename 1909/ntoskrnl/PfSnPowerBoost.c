/*
 * XREFs of PfSnPowerBoost @ 0x1406ED3D0
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14066EA90 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     PfSnPowerBoostUpdate @ 0x1406ED44C (PfSnPowerBoostUpdate.c)
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
