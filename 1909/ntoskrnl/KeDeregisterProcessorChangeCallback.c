/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x14087ED40
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1401817D0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
