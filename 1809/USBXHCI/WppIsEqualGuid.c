/*
 * XREFs of WppIsEqualGuid @ 0x1C00029E0
 * Callers:
 *     WppTraceCallback @ 0x1C005D130 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WppIsEqualGuid(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
