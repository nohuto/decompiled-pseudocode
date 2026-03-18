/*
 * XREFs of PopUmpoMessageCallback @ 0x1400ED500
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x1400ED558 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
