/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x140843B90
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016CEF0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
