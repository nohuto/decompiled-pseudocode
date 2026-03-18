/*
 * XREFs of DpiUnInitialize @ 0x1C029E0F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x1C029DD84 (DpiCleanup.c)
 */

void __fastcall DpiUnInitialize(struct _DRIVER_OBJECT *a1, __int64 a2, const GUID *a3)
{
  DpiCleanup(a1, 0, a3);
}
