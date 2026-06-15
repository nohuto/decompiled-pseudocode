/*
 * XREFs of PdcCancelWatchdogAroundClientCall @ 0x180051724
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180051304 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x180133790 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18013396C (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x180133AD0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PdcCancelWatchdogAroundClientCall(PTP_TIMER *a1)
{
  if ( ClientCallWatchdogEnabled )
  {
    SetThreadpoolTimer(*a1, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*a1, 0);
    CloseThreadpoolTimer(*a1);
  }
}
