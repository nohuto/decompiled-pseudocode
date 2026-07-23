/*
 * XREFs of PnpWatchdogSetupInProgressCallback @ 0x140833F90
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogSetupInProgressConfigure @ 0x14073D330 (PnpWatchdogSetupInProgressConfigure.c)
 */

void __fastcall PnpWatchdogSetupInProgressCallback(void *a1)
{
  PnpWatchdogSetupInProgressConfigure(a1);
}
