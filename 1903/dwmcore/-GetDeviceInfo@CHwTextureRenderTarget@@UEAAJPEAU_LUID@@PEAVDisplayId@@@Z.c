/*
 * XREFs of ?GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800C4C10
 * Callers:
 *     ?GetDeviceInfo@CHwTextureRenderTarget@@WJA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800ECB40 (-GetDeviceInfo@CHwTextureRenderTarget@@WJA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetDeviceInfo(
        CHwTextureRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  return CHwSurfaceRenderTarget::GetDeviceInfo(this, a2, a3);
}
