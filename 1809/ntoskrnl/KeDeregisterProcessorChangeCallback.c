/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x140844DF0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016CFF0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
