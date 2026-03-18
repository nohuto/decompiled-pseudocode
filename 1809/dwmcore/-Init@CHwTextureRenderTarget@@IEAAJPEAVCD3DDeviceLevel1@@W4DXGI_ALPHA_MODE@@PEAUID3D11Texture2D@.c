/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x180006858
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800067B4 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 * Callees:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18000692C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x180093814 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180093914 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180093A88 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DVidMemOnlyTexture **this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        struct ID3D11Texture2D *a4)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  enum DXGI_FORMAT v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int inited; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  _BYTE v18[16]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v19[12]; // [rsp+40h] [rbp-68h] BYREF

  v7 = CD3DVidMemOnlyTexture::CreateFromTexture(a4, 0, 0, a2, this + 30);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1C7u);
    goto LABEL_10;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a4->lpVtbl->GetDesc)(a4, v19);
  v10 = v19[4];
  *((_DWORD *)this + 2) = v19[0];
  *((_DWORD *)this + 3) = v19[1];
  v11 = PixelFormatInfoFromDXGIFormatAndAlphaMode(v10, a3, (struct PixelFormatInfo *)v18);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1CFu);
    goto LABEL_10;
  }
  inited = CHwTextureRenderTarget::InitTargetSurface(
             (CHwTextureRenderTarget *)this,
             (const struct PixelFormatInfo *)v18);
  v9 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, inited, 0x1D0u);
    goto LABEL_10;
  }
  v15 = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1D2u);
LABEL_10:
    ReleaseInterface<CD3DSurface>(this + 25);
  }
  return v9;
}
