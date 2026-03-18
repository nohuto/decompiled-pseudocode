/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140A22FF0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1401810E0 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
