/*
 * XREFs of ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18015BA90
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015BFB4 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015C2AC (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 * Callees:
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x1800120C8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800CF574 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x18015A5DC (-Add@-$CMap@W4CompositingShaderLookupKey@@V-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V-$CMapE.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801AC910 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 *     ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801ACEBC (-GetCompositingShaderLookupKey@@YA-AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V-$span@$.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
        struct CD3DDeviceLevel1 *this,
        __int128 *a2,
        unsigned int a3,
        _QWORD *a4)
{
  void *v6; // rdi
  unsigned int v8; // ebx
  _QWORD **v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  const void *v18; // rax
  signed int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int128 v25; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF
  struct CD3DPixelShader *v27; // [rsp+A8h] [rbp+48h] BYREF

  v24 = *a2;
  v6 = 0LL;
  v8 = 0;
  v10 = (_QWORD **)((char *)this + 1216);
  *(_QWORD *)&v24 = GetCompositingShaderLookupKey(*((unsigned int *)this + 185), &v24);
  v11 = 0;
  if ( *((int *)this + 308) <= 0 )
  {
LABEL_5:
    v11 = -1;
  }
  else
  {
    v12 = 0LL;
    v13 = *v10;
    while ( *v13 != (_QWORD)v24 )
    {
      ++v11;
      ++v12;
      ++v13;
      if ( v12 >= *((int *)this + 308) )
        goto LABEL_5;
    }
  }
  if ( v11 == -1 )
  {
    v23[0] = 0LL;
  }
  else
  {
    v23[0] = *(_QWORD *)(*((_QWORD *)this + 153) + 8LL * v11);
    v6 = (void *)v23[0];
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v23);
    if ( v6 )
      goto LABEL_14;
  }
  v25 = *a2;
  v26 = (__int64)v6;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v26);
  v14 = CreateCompositingShader(*((unsigned int *)this + 185), &v25, a3, &v26);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x10BEu, v6);
    goto LABEL_19;
  }
  v27 = (struct CD3DPixelShader *)v6;
  v16 = v26;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
  v18 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  v19 = CD3DPixelShader::Create(this, v18, v17, &v27);
  v8 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x10C1u, 0LL);
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(v23, *((_QWORD *)v27 + 15));
  if ( !(unsigned int)CMap<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
                        (__int64)this + 1216,
                        &v24,
                        v23) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, 0x8007000E, 0x10C7u, 0LL);
LABEL_17:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
LABEL_19:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v26);
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v26);
  v6 = (void *)v23[0];
LABEL_14:
  *a4 = v6;
LABEL_15:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v23);
  return v8;
}
