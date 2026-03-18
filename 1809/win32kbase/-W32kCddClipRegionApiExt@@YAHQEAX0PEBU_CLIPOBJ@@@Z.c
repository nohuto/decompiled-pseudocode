/*
 * XREFs of ?W32kCddClipRegionApiExt@@YAHQEAX0PEBU_CLIPOBJ@@@Z @ 0x1C00FD530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddClipRegionApiExt(void *const a1, void *const a2, const struct _CLIPOBJ *a3)
{
  int v6; // eax
  unsigned int v7; // r9d

  v6 = IsW32kCddClipRegionSupported();
  v7 = 0;
  if ( v6 >= 0 )
    return (unsigned int)W32kCddClipRegion(a1, a2, a3, 0LL);
  return v7;
}
