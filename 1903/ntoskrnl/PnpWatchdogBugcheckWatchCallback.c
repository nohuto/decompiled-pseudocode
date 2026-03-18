/*
 * XREFs of PnpWatchdogBugcheckWatchCallback @ 0x1406EE630
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogBugcheckConfigure @ 0x1406EE644 (PnpWatchdogBugcheckConfigure.c)
 */

__int64 __fastcall PnpWatchdogBugcheckWatchCallback(void *a1)
{
  return PnpWatchdogBugcheckConfigure(a1);
}
