/*
 * XREFs of ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180023C6C
 * Callers:
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180023E18 (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?EnsureDXGISurface@CD3DTexture@@AEAAJXZ @ 0x180023BD8 (-EnsureDXGISurface@CD3DTexture@@AEAAJXZ.c)
 *     ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x180023D3C (-IsRenderTarget@CD3DTexture@@AEBA_NXZ.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042680 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD3DTexture::CreateD2DBitmap(struct IDXGISurface **this, char a2, struct ID2D1Bitmap1 **a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  struct IDXGISurface *v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  struct D2D1_BITMAP_PROPERTIES1 v15; // [rsp+30h] [rbp-28h] BYREF

  *a3 = 0LL;
  v6 = CD3DTexture::EnsureDXGISurface((CD3DTexture *)this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x21Fu, 0LL);
  }
  else
  {
    v9 = 3;
    if ( !a2 )
      v9 = *((_DWORD *)this + 44);
    v10 = *((_DWORD *)this + 36);
    v15.bitmapOptions = D2D1_BITMAP_OPTIONS_NONE;
    v15.pixelFormat = (D2D1_PIXEL_FORMAT)__PAIR64__(v9, v10);
    v15.dpiX = 96.0;
    v15.dpiY = 96.0;
    if ( v10 != 88 && CD3DTexture::IsRenderTarget((CD3DTexture *)this) )
      v15.bitmapOptions |= 1u;
    v11 = this[2];
    v15.colorContext = 0LL;
    v12 = CD2DContext::CreateD2DBitmapFromDxgiSurface((CD2DContext *)v11[10].lpVtbl, this[26], &v15, a3);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x248u, 0LL);
  }
  return v8;
}
