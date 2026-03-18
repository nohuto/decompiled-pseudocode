/*
 * XREFs of ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x18004F00C
 * Callers:
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x18004EF1C (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x180169244 (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CD2DBitmap@@IEAAXPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18004F0E8 (-Initialize@CD2DBitmap@@IEAAXPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18004F1B4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  unsigned int v11; // ebx
  CD2DBitmap *v15; // rax
  unsigned int v16; // ecx
  CD2DBitmap *v17; // rdi

  v11 = 0;
  *a10 = 0LL;
  v15 = (CD2DBitmap *)DefaultHeap::Alloc(0x108uLL);
  if ( v15 )
    v17 = CD2DBitmap::CD2DBitmap(v15, a1, a9);
  else
    v17 = 0LL;
  if ( v17 )
  {
    (*(void (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v17 + 8LL))(v17);
    CD2DBitmap::Initialize(v17, a2, a3, a4, a5, a6, a7, a8);
    *a10 = v17;
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x3Fu, 0LL);
  }
  return v11;
}
