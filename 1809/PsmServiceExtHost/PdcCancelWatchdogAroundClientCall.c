/*
 * XREFs of PdcCancelWatchdogAroundClientCall @ 0x180039BA4
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1800396CC (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180039A1C (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRegister @ 0x180042270 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x180071560 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18007173C (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x1800718A0 (Pdcv2pActivationClientCallback.c)
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
