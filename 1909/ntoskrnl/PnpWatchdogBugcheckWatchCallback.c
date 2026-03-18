/*
 * XREFs of PnpWatchdogBugcheckWatchCallback @ 0x1406F0180
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogBugcheckConfigure @ 0x1406F0194 (PnpWatchdogBugcheckConfigure.c)
 */

__int64 __fastcall PnpWatchdogBugcheckWatchCallback(void *a1)
{
  return PnpWatchdogBugcheckConfigure(a1);
}
