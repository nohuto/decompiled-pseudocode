/*
 * XREFs of ?GetDisplayId@CHwTextureRenderTarget@@UEBA?AVDisplayId@@XZ @ 0x1800D9D10
 * Callers:
 *     ?GetDisplayId@CHwTextureRenderTarget@@W7EBA?AVDisplayId@@XZ @ 0x1800ECB50 (-GetDisplayId@CHwTextureRenderTarget@@W7EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHwTextureRenderTarget::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 - 104);
  return a2;
}
