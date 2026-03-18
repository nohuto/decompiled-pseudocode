/*
 * XREFs of PopUmpoMessageCallback @ 0x1400F03C0
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x1400F0418 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
