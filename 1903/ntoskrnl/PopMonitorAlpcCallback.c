/*
 * XREFs of PopMonitorAlpcCallback @ 0x1408B4910
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1407873C8 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
