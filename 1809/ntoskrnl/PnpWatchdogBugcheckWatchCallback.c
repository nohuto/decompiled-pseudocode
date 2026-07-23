/*
 * XREFs of PnpWatchdogBugcheckWatchCallback @ 0x1407083B0
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogBugcheckConfigure @ 0x14071018C (PnpWatchdogBugcheckConfigure.c)
 */

__int64 __fastcall PnpWatchdogBugcheckWatchCallback(void *a1)
{
  return PnpWatchdogBugcheckConfigure(a1);
}
