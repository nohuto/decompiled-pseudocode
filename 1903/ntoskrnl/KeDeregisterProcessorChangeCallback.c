/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x14087F640
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1401810E0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
