/*
 * XREFs of wcscmp_0 @ 0x18004E2C6
 * Callers:
 *     ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x1800287D0 (-UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180028990 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *String1, const wchar_t *String2)
{
  return wcscmp(String1, String2);
}
