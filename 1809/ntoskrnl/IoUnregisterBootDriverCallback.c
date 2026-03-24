/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x1409DF680
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016CEF0 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
