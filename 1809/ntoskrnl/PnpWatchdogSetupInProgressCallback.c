/*
 * XREFs of PnpWatchdogSetupInProgressCallback @ 0x140832D50
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogSetupInProgressConfigure @ 0x14073C160 (PnpWatchdogSetupInProgressConfigure.c)
 */

void __fastcall PnpWatchdogSetupInProgressCallback(void *a1)
{
  PnpWatchdogSetupInProgressConfigure(a1);
}
