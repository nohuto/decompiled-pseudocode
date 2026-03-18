/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18015D424
 * Callers:
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180162958 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180258860 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x1800D87F8 (-GetD3D11SamplerDesc@SamplerMode@@SA-AUD3D11_SAMPLER_DESC@@U1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 *v6; // rsi
  int v7; // eax
  __int64 D3D11SamplerDesc; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _OWORD *, __int64 *); // rbx
  signed int v11; // eax
  __int64 v12; // rcx
  __int16 v14; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int8 v15; // [rsp+32h] [rbp-A6h]
  int v16[14]; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v17[3]; // [rsp+78h] [rbp-60h] BYREF
  int v18; // [rsp+A8h] [rbp-30h]

  v3 = 0;
  v6 = (__int64 *)(a1 + 8 * (a2[2] + 4 * (a2[1] + 4 * (*a2 + 12LL))));
  if ( *v6 )
    goto LABEL_10;
  v14 = *(_WORD *)a2;
  if ( !HIBYTE(v14) || (v7 = 37120, !a2[2]) )
    v7 = 37632;
  if ( *(_DWORD *)(a1 + 740) < v7 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0xE5Eu, 0LL);
    return v3;
  }
  v14 = *(_WORD *)a2;
  v15 = a2[2];
  D3D11SamplerDesc = SamplerMode::GetD3D11SamplerDesc(v16, &v14);
  v9 = *(_QWORD *)(a1 + 632);
  v17[0] = *(_OWORD *)D3D11SamplerDesc;
  v17[1] = *(_OWORD *)(D3D11SamplerDesc + 16);
  v17[2] = *(_OWORD *)(D3D11SamplerDesc + 32);
  v18 = *(_DWORD *)(D3D11SamplerDesc + 48);
  v10 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int64 *))(*(_QWORD *)v9 + 184LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v6);
  v11 = v10(v9, v17, v6);
  v3 = v11;
  if ( v11 >= 0 )
LABEL_10:
    *a3 = *v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xE62u, 0LL);
  return v3;
}
