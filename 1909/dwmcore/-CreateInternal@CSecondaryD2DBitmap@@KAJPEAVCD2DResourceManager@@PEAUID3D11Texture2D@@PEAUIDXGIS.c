/*
 * XREFs of ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18004ECB8
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18004EBF0 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 * Callees:
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18004ED9C (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAXPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18004F0E8 (-Initialize@CD2DBitmap@@IEAAXPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateInternal(
        struct CD2DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        struct IDXGISurface *a3,
        const struct D3D11_TEXTURE2D_DESC *a4,
        const struct D2D1_BITMAP_PROPERTIES1 *a5,
        enum DXGI_COLOR_SPACE_TYPE a6,
        struct CSecondaryD2DBitmap **a7)
{
  unsigned int v8; // ebx
  CSecondaryD2DBitmap *v12; // rax
  unsigned int v13; // ecx
  struct CSecondaryD2DBitmap *v14; // rdi

  v8 = 0;
  *a7 = 0LL;
  v12 = (CSecondaryD2DBitmap *)DefaultHeap::Alloc(0x158uLL);
  if ( v12 )
    v14 = CSecondaryD2DBitmap::CSecondaryD2DBitmap(v12, a1);
  else
    v14 = 0LL;
  if ( v14 )
  {
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v14 + 8LL))(v14);
    CD2DBitmap::Initialize(v14, a2, a3, a4, a5, a6, (_DWORD)DisplayId::None, 0);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v14 + 33) + 40LL))((__int64)v14 + 264);
    *a7 = v14;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x49u, 0LL);
  }
  return v8;
}
