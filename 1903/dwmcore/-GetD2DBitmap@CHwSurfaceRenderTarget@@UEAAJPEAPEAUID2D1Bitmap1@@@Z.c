/*
 * XREFs of ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18003ED90
 * Callers:
 *     ?GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18003ED80 (-GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DBitmap@CHwFullScreenRenderTarget@@WJA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800EC810 (-GetD2DBitmap@CHwFullScreenRenderTarget@@WJA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18003EDD4 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DBitmap(CD3DSurface **this, struct ID2D1Bitmap1 **a2)
{
  int D2DBitmap; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  D2DBitmap = CD3DSurface::GetD2DBitmap(this[17], a2);
  v6 = D2DBitmap;
  v4 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, D2DBitmap, 0xA2u, 0LL);
  TranslateDXGIorD3DErrorInContext(v4, 13LL, &v6);
  return v6;
}
