/*
 * XREFs of ?GetPixelFormatInfo@CHwTextureRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800E7640
 * Callers:
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0EA0 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WNI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0EB0 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WNI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WOA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0EC0 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WOA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 256);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
