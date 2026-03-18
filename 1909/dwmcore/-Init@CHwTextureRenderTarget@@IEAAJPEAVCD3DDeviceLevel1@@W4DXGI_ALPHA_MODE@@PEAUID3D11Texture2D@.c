/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x180161E70
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x180161C48 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180049938 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x18004A528 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18004A6F0 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18015C950 (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        CHwTextureRenderTarget *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        struct ID3D11Texture2D *a4)
{
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // ecx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int inited; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  _BYTE v18[16]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v19[12]; // [rsp+40h] [rbp-68h] BYREF

  v7 = CD3DVidMemOnlyTexture::CreateFromTexture(a4, 0, 0, a2, (struct CD3DVidMemOnlyTexture **)this + 22);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1C4u, 0LL);
    goto LABEL_9;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a4->lpVtbl->GetDesc)(a4, v19);
  v10 = v19[4];
  *((_DWORD *)this + 2) = v19[0];
  *((_DWORD *)this + 3) = v19[1];
  v11 = PixelFormatInfoFromDXGIFormatAndAlphaMode(v10, a3, (struct PixelFormatInfo *)v18);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1CCu, 0LL);
    goto LABEL_9;
  }
  inited = CHwTextureRenderTarget::InitTargetSurface((CD3DTexture **)this, (const struct PixelFormatInfo *)v18);
  v9 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, inited, 0x1CDu, 0LL);
    goto LABEL_9;
  }
  v15 = CBaseRenderTarget::Init(this);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1CFu, 0LL);
LABEL_9:
    ReleaseInterface<CD3DSurface>((__int64 *)this + 17);
  }
  return v9;
}
