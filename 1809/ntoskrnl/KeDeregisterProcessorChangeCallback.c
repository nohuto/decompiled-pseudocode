/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x140843BB0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016CED0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
