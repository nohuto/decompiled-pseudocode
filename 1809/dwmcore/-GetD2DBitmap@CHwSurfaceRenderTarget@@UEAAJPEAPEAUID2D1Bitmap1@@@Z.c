/*
 * XREFs of ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800988B0
 * Callers:
 *     ?GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800988A0 (-GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DBitmap@CHwFullScreenRenderTarget@@WNA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800F1100 (-GetD2DBitmap@CHwFullScreenRenderTarget@@WNA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800988F4 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DBitmap(CD3DSurface **this, struct ID2D1Bitmap1 **a2)
{
  int D2DBitmap; // eax
  unsigned int v3; // ecx
  int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  D2DBitmap = CD3DSurface::GetD2DBitmap(this[25], a2);
  v6 = D2DBitmap;
  v4 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, D2DBitmap, 0xAFu);
  TranslateDXGIorD3DErrorInContext(v4, 13, &v6);
  return v6;
}
