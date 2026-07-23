/*
 * XREFs of PopMonitorAlpcCallback @ 0x140878AB0
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x140761708 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
