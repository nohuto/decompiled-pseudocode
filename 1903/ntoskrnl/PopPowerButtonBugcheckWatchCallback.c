/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x1408B4420
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x14075AF40 (PopPowerButtonBugcheckConfigure.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckWatchCallback(void *a1)
{
  return PopPowerButtonBugcheckConfigure(a1);
}
