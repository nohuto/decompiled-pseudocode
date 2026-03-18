/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x1408D9740
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1401817D0 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140503FE0);
  ExUnregisterCallback(a1);
}
