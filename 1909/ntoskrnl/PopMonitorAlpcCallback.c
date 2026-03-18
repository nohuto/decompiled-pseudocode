/*
 * XREFs of PopMonitorAlpcCallback @ 0x1408B41E0
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x140789728 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
