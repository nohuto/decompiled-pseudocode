/*
 * XREFs of ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180095988
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800958C0 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 * Callees:
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180095A80 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x180098300 (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
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
  CSecondaryD2DBitmap *v11; // rax
  CSecondaryD2DBitmap *v12; // rax
  unsigned int v13; // ecx
  struct CSecondaryD2DBitmap *v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // ebx
  unsigned int v18; // ecx
  void *retaddr; // [rsp+58h] [rbp+0h]

  *a7 = 0LL;
  v11 = (CSecondaryD2DBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x158uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v12 = CSecondaryD2DBitmap::CSecondaryD2DBitmap(v11, a1);
  v14 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(CSecondaryD2DBitmap *))(*(_QWORD *)v12 + 8LL))(v12);
    v15 = CD2DBitmap::Initialize(v14, a2, a3, a4, a5, a6, DisplayId::None, 0);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x71u);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v14 + 33) + 40LL))((__int64)v14 + 264);
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x55u);
      (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      *a7 = v14;
    }
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x4Du);
  }
  return (unsigned int)v17;
}
