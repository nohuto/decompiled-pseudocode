/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140A230D0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1401817D0 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
