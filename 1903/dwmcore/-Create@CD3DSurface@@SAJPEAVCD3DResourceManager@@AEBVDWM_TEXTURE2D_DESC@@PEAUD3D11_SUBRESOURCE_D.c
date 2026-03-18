/*
 * XREFs of ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1800B2024
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800B1818 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801D1548 (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180039E50 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800B3F2C (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Create(
        CD3DDeviceLevel1 **a1,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        struct CD3DSurface **a4)
{
  signed int v6; // eax
  __int64 v7; // rcx
  struct ID3D11Texture2D *v8; // rdi
  unsigned int v9; // ebx
  signed int ViewOfTexture; // eax
  __int64 v11; // rcx
  struct ID3D11Texture2D *v13; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v6 = CD3DDeviceLevel1::CreateTexture(a1[10], a2, a3, &v13);
  v8 = v13;
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802B2900, 9u, v6, 0x66u, 0LL);
  }
  else
  {
    ViewOfTexture = CD3DSurface::CreateViewOfTexture((struct CD3DResourceManager *)a1, v13, 0LL, 0, a4);
    v9 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802B2900, 9u, ViewOfTexture, 0x6Cu, 0LL);
  }
  if ( v8 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v8->lpVtbl->Release)(v8);
  return v9;
}
