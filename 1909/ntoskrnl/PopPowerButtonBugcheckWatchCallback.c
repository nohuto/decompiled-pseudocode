/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x1408B3CF0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x14075F7D0 (PopPowerButtonBugcheckConfigure.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckWatchCallback(void *a1)
{
  return PopPowerButtonBugcheckConfigure(a1);
}
