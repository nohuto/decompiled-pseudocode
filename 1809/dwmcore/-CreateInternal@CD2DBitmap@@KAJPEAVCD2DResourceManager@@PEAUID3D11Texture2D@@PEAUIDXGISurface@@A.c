/*
 * XREFs of ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800981F0
 * Callers:
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x180098100 (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1802021E0 (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x180098300 (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x180098B50 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateInternal(
        struct CD2DResourceManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        bool a9,
        CD2DBitmap **a10)
{
  CD2DBitmap *v14; // rax
  unsigned int v15; // ecx
  CD2DBitmap *v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edi

  *a10 = 0LL;
  v14 = (CD2DBitmap *)operator new(0x108uLL);
  if ( v14 )
    v16 = CD2DBitmap::CD2DBitmap(v14, a1, a9);
  else
    v16 = 0LL;
  if ( v16 )
  {
    (*(void (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = CD2DBitmap::Initialize(v16, a2, a3, a4, a5, a6, a7, a8);
    v19 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x49u);
      (*(void (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    else
    {
      *a10 = v16;
    }
  }
  else
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x40u);
  }
  return v19;
}
