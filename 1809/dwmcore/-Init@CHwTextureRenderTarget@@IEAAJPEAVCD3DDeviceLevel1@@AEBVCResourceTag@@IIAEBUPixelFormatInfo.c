/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x1800936AC
 * Callers:
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800915CC (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800924C4 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x18009360C (-IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x180093814 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180093884 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180093914 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        CHwTextureRenderTarget *this,
        struct CD3DDeviceLevel1 *a2,
        const struct CResourceTag *a3,
        unsigned int a4,
        unsigned int a5,
        const struct PixelFormatInfo *a6,
        bool a7)
{
  __int128 v8; // xmm0
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v13; // edx
  char IsGradientWhitePixelGPUBlacklistedGpu; // al
  bool v15; // zf
  int v16; // r8d
  int Texture; // eax
  unsigned int v18; // ebx
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-60h]
  unsigned int v22; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-4Ch]
  int v24; // [rsp+38h] [rbp-48h]
  int v25; // [rsp+3Ch] [rbp-44h]
  int v26; // [rsp+40h] [rbp-40h]
  int v27; // [rsp+44h] [rbp-3Ch]
  int v28; // [rsp+48h] [rbp-38h]
  int v29; // [rsp+4Ch] [rbp-34h]
  int v30; // [rsp+50h] [rbp-30h]
  int v31; // [rsp+54h] [rbp-2Ch]
  int v32; // [rsp+58h] [rbp-28h]
  __int128 v33; // [rsp+60h] [rbp-20h]

  v8 = *(_OWORD *)a3;
  v28 = 0;
  v10 = a4;
  v29 = 0;
  v11 = a5;
  v31 = 0;
  v13 = *(_DWORD *)a6;
  v26 = *(_DWORD *)a6;
  v33 = v8;
  v22 = a4;
  v23 = a5;
  v24 = 1;
  v25 = 1;
  v27 = 1;
  v30 = 40;
  if ( a7 )
  {
    v32 = 0x80000;
  }
  else
  {
    v32 = 0;
    if ( v13 == 87 || v13 == 28 )
    {
      IsGradientWhitePixelGPUBlacklistedGpu = CCommonRegistryData::IsGradientWhitePixelGPUBlacklistedGpu(
                                                *(_DWORD *)(*((_QWORD *)a2 + 87) + 296LL),
                                                *(_DWORD *)(*((_QWORD *)a2 + 87) + 300LL));
      v11 = v23;
      v15 = IsGradientWhitePixelGPUBlacklistedGpu == 0;
      v10 = v22;
      if ( !v15 )
        v32 |= 0x2802u;
    }
  }
  v16 = 0;
  if ( v10 > *((_DWORD *)a2 + 188) )
  {
    v10 = *((_DWORD *)a2 + 188);
    v22 = v10;
    v16 = 1;
  }
  if ( v11 > *((_DWORD *)a2 + 189) )
  {
    v23 = *((_DWORD *)a2 + 189);
LABEL_19:
    v18 = -2003292287;
    v21 = 366;
    v20 = -2003292287;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v20, v21);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 25);
    return v18;
  }
  if ( v16 == 1 || v10 != a4 || v11 != a5 )
    goto LABEL_19;
  Texture = CD3DVidMemOnlyTexture::CreateTexture(
              (const struct DWM_TEXTURE2D_DESC *)&v22,
              a2,
              (struct CD3DVidMemOnlyTexture **)this + 30);
  v18 = Texture;
  if ( Texture < 0 )
  {
    v21 = 371;
    goto LABEL_23;
  }
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  Texture = CHwTextureRenderTarget::InitTargetSurface(this, a6);
  v18 = Texture;
  if ( Texture < 0 )
  {
    v21 = 376;
    goto LABEL_23;
  }
  Texture = CBaseRenderTarget::Init(this);
  v18 = Texture;
  if ( Texture < 0 )
  {
    v21 = 378;
LABEL_23:
    v20 = Texture;
    goto LABEL_20;
  }
  return v18;
}
