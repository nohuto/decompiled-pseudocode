/*
 * XREFs of ?GetPixelFormatInfo@CHwTextureRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800DA890
 * Callers:
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WJA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0820 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WJA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WJI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0830 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WJI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WKA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0840 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WKA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 192);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
