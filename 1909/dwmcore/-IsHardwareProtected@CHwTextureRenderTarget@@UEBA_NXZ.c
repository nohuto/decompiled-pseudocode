/*
 * XREFs of ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x1800C8ED0
 * Callers:
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WJA@EBA_NXZ @ 0x1800F0860 (-IsHardwareProtected@CHwTextureRenderTarget@@WJA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WJI@EBA_NXZ @ 0x1800F0870 (-IsHardwareProtected@CHwTextureRenderTarget@@WJI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WKA@EBA_NXZ @ 0x1800F0880 (-IsHardwareProtected@CHwTextureRenderTarget@@WKA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsHardwareProtected(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 22);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 168) & 0x80000) != 0;
  return result;
}
