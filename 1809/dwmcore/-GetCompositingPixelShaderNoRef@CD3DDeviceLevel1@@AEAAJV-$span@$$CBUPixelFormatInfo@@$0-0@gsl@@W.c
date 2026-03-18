/*
 * XREFs of ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801FC3FC
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801FC7D4 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801FCAA4 (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x18006C0D8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800916FC (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x1801FB28C (-Add@-$CMap@W4CompositingShaderLookupKey@@V-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V-$CMapE.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18022B044 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 *     ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18022B578 (-GetCompositingShaderLookupKey@@YA-AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V-$span@$.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
        struct CD3DDeviceLevel1 *this,
        __int128 *a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v8; // edi
  __int64 CompositingShaderLookupKey; // r9
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rbx
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdi
  const void *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  __int128 v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+90h] [rbp+40h] BYREF
  struct CD3DPixelShader *v28; // [rsp+98h] [rbp+48h] BYREF

  v26 = *a2;
  v8 = 0;
  CompositingShaderLookupKey = GetCompositingShaderLookupKey(*((unsigned int *)this + 185), &v26);
  v25 = CompositingShaderLookupKey;
  v10 = 0;
  if ( *((int *)this + 284) <= 0 )
  {
LABEL_5:
    v10 = -1;
  }
  else
  {
    v11 = 0LL;
    v12 = (_QWORD *)*((_QWORD *)this + 140);
    while ( *v12 != CompositingShaderLookupKey )
    {
      ++v10;
      ++v11;
      ++v12;
      if ( v11 >= *((int *)this + 284) )
        goto LABEL_5;
    }
  }
  if ( v10 == -1 )
  {
    v24 = 0LL;
  }
  else
  {
    v24 = *(_QWORD *)(*((_QWORD *)this + 141) + 8LL * v10);
    v13 = v24;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v24);
    if ( v13 )
      goto LABEL_14;
  }
  v14 = *a2;
  v27 = 0LL;
  v26 = v14;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v27);
  v15 = CreateCompositingShader(*((unsigned int *)this + 185), &v26, a3, &v27);
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x10B1u);
    goto LABEL_19;
  }
  v28 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
  v17 = v27;
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
  v19 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
  v20 = CD3DPixelShader::Create(this, v19, v18, &v28);
  v8 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x10B4u);
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v24, *((_QWORD *)v28 + 15));
  if ( !(unsigned int)CMap<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
                        (__int64)this + 1120,
                        &v25,
                        &v24) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0x10BAu);
LABEL_17:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
LABEL_19:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v27);
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v27);
  v13 = v24;
LABEL_14:
  *a4 = v13;
LABEL_15:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
  return v8;
}
