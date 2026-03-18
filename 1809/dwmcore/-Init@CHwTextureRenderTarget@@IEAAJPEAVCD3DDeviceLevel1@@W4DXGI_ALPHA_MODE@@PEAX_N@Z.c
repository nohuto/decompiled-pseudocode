/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x18020306C
 * Callers:
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x1802032D4 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18000692C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x180093814 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180093914 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x180206B48 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        CHwTextureRenderTarget *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        void *a4,
        bool a5)
{
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  enum DXGI_FORMAT Format; // ecx
  int v12; // eax
  __int64 v13; // rcx
  int inited; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-88h]
  _BYTE v20[16]; // [rsp+30h] [rbp-78h] BYREF
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+40h] [rbp-68h] BYREF

  v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v21, a2, a4, a5, v19, (struct CD3DVidMemOnlyTexture **)this + 30);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x19Bu);
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
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1A2u);
    }
    else
    {
      inited = CHwTextureRenderTarget::InitTargetSurface((CD3DTexture **)this, (const struct PixelFormatInfo *)v20);
      v10 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, inited, 0x1A4u);
      }
      else
      {
        v16 = CBaseRenderTarget::Init(this);
        v10 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1A6u);
        else
          *((_QWORD *)this + 33) = a4;
      }
    }
  }
  if ( v10 < 0 )
    ReleaseInterface<CD3DSurface>((__int64 *)this + 25);
  return (unsigned int)v10;
}
