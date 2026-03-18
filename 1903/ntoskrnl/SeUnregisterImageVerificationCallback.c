/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x1408D9E40
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1401810E0 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_1405042A0);
  ExUnregisterCallback(a1);
}
