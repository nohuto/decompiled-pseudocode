/*
 * XREFs of ?GetPixelFormatInfo@CHwTextureRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D9C20
 * Callers:
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WJA@EBA?AUPixelFormatInfo@@XZ @ 0x1800ECB60 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WJA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WJI@EBA?AUPixelFormatInfo@@XZ @ 0x1800ECB70 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WJI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WKA@EBA?AUPixelFormatInfo@@XZ @ 0x1800ECB80 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WKA@EBA-AUPixelFormatInfo@@XZ.c)
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
