/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x1801FC69C
 * Callers:
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180201B60 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x18022A4F0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x18007A9EC (-GetD3D11SamplerDesc@SamplerMode@@SA-AUD3D11_SAMPLER_DESC@@U1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 *v7; // r15
  int v8; // eax
  __int64 D3D11SamplerDesc; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int16 v14; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int8 v15; // [rsp+32h] [rbp-57h]
  int v16[14]; // [rsp+40h] [rbp-49h] BYREF
  _OWORD v17[3]; // [rsp+78h] [rbp-11h] BYREF
  int v18; // [rsp+A8h] [rbp+1Fh]

  v3 = 0;
  v6 = a2[2] + 4 * (a2[1] + 4LL * *a2 + 43);
  v7 = (__int64 *)(a1 + 8 * v6);
  if ( *v7 )
    goto LABEL_10;
  v14 = *(_WORD *)a2;
  if ( !HIBYTE(v14) || (v8 = 37120, !a2[2]) )
    v8 = 37632;
  if ( *(_DWORD *)(a1 + 740) < v8 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0xE6Bu);
    return v3;
  }
  v14 = *(_WORD *)a2;
  v15 = a2[2];
  D3D11SamplerDesc = SamplerMode::GetD3D11SamplerDesc(v16, &v14);
  v10 = *(_QWORD *)(a1 + 632);
  v17[0] = *(_OWORD *)D3D11SamplerDesc;
  v17[1] = *(_OWORD *)(D3D11SamplerDesc + 16);
  v17[2] = *(_OWORD *)(D3D11SamplerDesc + 32);
  v18 = *(_DWORD *)(D3D11SamplerDesc + 48);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v7);
  v11 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64 *))(*(_QWORD *)v10 + 184LL))(v10, v17, v7);
  v3 = v11;
  if ( v11 >= 0 )
LABEL_10:
    *a3 = *(_QWORD *)(a1 + 8 * v6);
  else
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xE6Fu);
  return v3;
}
