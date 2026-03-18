/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x140877140
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x140729920 (PopPowerButtonBugcheckConfigure.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckWatchCallback(void *a1)
{
  return PopPowerButtonBugcheckConfigure(a1);
}
