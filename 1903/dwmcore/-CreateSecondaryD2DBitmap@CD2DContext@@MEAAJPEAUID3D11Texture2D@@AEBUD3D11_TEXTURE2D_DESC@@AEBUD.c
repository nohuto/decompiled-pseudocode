/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800B3800
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800B36A4 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1800B38C8 (-CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGIS.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateSecondaryD2DBitmap(
        struct CD2DResourceManager **this,
        struct ID3D11Texture2D *a2,
        const struct D3D11_TEXTURE2D_DESC *a3,
        const struct D2D1_BITMAP_PROPERTIES1 *a4,
        enum DXGI_COLOR_SPACE_TYPE a5,
        struct CSecondaryD2DBitmap **a6)
{
  struct CSecondaryD2DBitmap **v6; // rsi
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  signed int Internal; // eax
  __int64 v15; // rcx
  struct IDXGISurface *v17; // [rsp+68h] [rbp+10h] BYREF

  v6 = a6;
  v17 = 0LL;
  *a6 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct IDXGISurface **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
          &v17);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x6AAu, 0LL);
  }
  else
  {
    Internal = CSecondaryD2DBitmap::CreateInternal(this[25], a2, v17, a3, a4, a5, v6);
    v13 = Internal;
    if ( Internal < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, Internal, 0x6B7u, 0LL);
  }
  if ( v17 )
    ((void (__fastcall *)(struct IDXGISurface *))v17->lpVtbl->Release)(v17);
  return v13;
}
