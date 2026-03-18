/*
 * XREFs of ?GetDisplayId@CHwTextureRenderTarget@@UEBA?AVDisplayId@@XZ @ 0x1800E7850
 * Callers:
 *     ?GetDisplayId@CHwTextureRenderTarget@@W7EBA?AVDisplayId@@XZ @ 0x1800F0E90 (-GetDisplayId@CHwTextureRenderTarget@@W7EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHwTextureRenderTarget::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 - 100);
  return a2;
}
