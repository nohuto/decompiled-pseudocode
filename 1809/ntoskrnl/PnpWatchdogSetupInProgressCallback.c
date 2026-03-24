/*
 * XREFs of PnpWatchdogSetupInProgressCallback @ 0x140832D30
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogSetupInProgressConfigure @ 0x14073C140 (PnpWatchdogSetupInProgressConfigure.c)
 */

void __fastcall PnpWatchdogSetupInProgressCallback(void *a1)
{
  PnpWatchdogSetupInProgressConfigure(a1);
}
