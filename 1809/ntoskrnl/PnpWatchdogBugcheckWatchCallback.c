/*
 * XREFs of PnpWatchdogBugcheckWatchCallback @ 0x140707130
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogBugcheckConfigure @ 0x14070EF0C (PnpWatchdogBugcheckConfigure.c)
 */

__int64 __fastcall PnpWatchdogBugcheckWatchCallback(void *a1)
{
  return PnpWatchdogBugcheckConfigure(a1);
}
