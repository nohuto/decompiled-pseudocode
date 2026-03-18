/*
 * XREFs of ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x180068020
 * Callers:
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WNA@EBA_NXZ @ 0x1800F0F10 (-IsHardwareProtected@CHwTextureRenderTarget@@WNA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WNI@EBA_NXZ @ 0x1800F0F20 (-IsHardwareProtected@CHwTextureRenderTarget@@WNI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WOA@EBA_NXZ @ 0x1800F0F30 (-IsHardwareProtected@CHwTextureRenderTarget@@WOA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsHardwareProtected(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 30);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 168) & 0x80000) != 0;
  return result;
}
