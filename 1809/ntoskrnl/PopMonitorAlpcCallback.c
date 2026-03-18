/*
 * XREFs of PopMonitorAlpcCallback @ 0x140877870
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x140760538 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
