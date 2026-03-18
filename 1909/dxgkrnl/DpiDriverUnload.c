/*
 * XREFs of DpiDriverUnload @ 0x1C029E4E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x1C029E194 (DpiCleanup.c)
 */

void __fastcall DpiDriverUnload(struct _DRIVER_OBJECT *a1, __int64 a2, const GUID *a3)
{
  DpiCleanup(a1, 1, a3);
}
