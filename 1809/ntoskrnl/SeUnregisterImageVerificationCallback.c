/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14089C920
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016CFF0 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_1404DAF00);
  ExUnregisterCallback(a1);
}
