/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14089B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016CEF0 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_1404D9E40);
  ExUnregisterCallback(a1);
}
