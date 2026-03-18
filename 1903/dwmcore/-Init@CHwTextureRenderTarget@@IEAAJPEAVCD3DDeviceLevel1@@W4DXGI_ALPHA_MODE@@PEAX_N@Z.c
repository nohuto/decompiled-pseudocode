/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x18016367C
 * Callers:
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x180163920 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800B2508 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x1800B2574 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18015E02C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x18016B75C (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        CHwTextureRenderTarget *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        void *a4,
        bool a5)
{
  signed int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  DXGI_FORMAT Format; // ecx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int inited; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-88h]
  _BYTE v20[16]; // [rsp+30h] [rbp-78h] BYREF
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+40h] [rbp-68h] BYREF

  v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v21, a2, a4, a5, v19, (struct CD3DVidMemOnlyTexture **)this + 22);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x198u, 0LL);
  }
  else
  {
    Format = v21.Format;
    *((_DWORD *)this + 2) = v21.Width;
    *((_DWORD *)this + 3) = v21.Height;
    v12 = PixelFormatInfoFromDXGIFormatAndAlphaMode(Format, a3, (struct PixelFormatInfo *)v20);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x19Fu, 0LL);
    }
    else
    {
      inited = CHwTextureRenderTarget::InitTargetSurface((CD3DTexture **)this, (const struct PixelFormatInfo *)v20);
      v10 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, inited, 0x1A1u, 0LL);
      }
      else
      {
        v16 = CBaseRenderTarget::Init(this);
        v10 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1A3u, 0LL);
        else
          *((_QWORD *)this + 25) = a4;
      }
    }
  }
  if ( v10 < 0 )
    ReleaseInterface<CD3DSurface>((__int64 *)this + 17);
  return (unsigned int)v10;
}
