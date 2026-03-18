/*
 * XREFs of ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180091124
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800909E8 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180093E68 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180095660 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Create(
        CD3DDeviceLevel1 **a1,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        struct CD3DSurface **a4)
{
  int v6; // eax
  unsigned int v7; // ecx
  struct ID3D11Texture2D *v8; // rdi
  unsigned int v9; // ebx
  int ViewOfTexture; // eax
  unsigned int v11; // ecx
  struct ID3D11Texture2D *v13; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v6 = CD3DDeviceLevel1::CreateTexture(a1[10], a2, a3, &v13);
  v8 = v13;
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18029B920, 9u, v6, 0x69u);
  }
  else
  {
    ViewOfTexture = CD3DSurface::CreateViewOfTexture((struct CD3DResourceManager *)a1, v13, 0LL, 0, a4);
    v9 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_18029B920, 9u, ViewOfTexture, 0x6Fu);
  }
  if ( v8 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v8->lpVtbl->Release)(v8);
  return v9;
}
