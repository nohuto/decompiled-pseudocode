/*
 * XREFs of ?GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18001F580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmap(CD3DTexture **this, bool a2, struct ID2D1Bitmap1 **a3)
{
  return CD3DTexture::GetD2DBitmap(this[3], a2, a3);
}
