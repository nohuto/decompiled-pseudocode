/*
 * XREFs of ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802570F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180015B80 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180044440 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1800451AC (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x180051138 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18015BD44 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801B6E44 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     ?GetVertexShaderNoRef@CD3DDeviceLevel1@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x1801BAD88 (-GetVertexShaderNoRef@CD3DDeviceLevel1@@QEBAPEAUID3D11VertexShader@@I@Z.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::SetStateOnDevice(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  CD3DDeviceLevel1 *v3; // r15
  __int64 v4; // r12
  __int64 v6; // rbx
  enum DXGI_COLOR_SPACE_TYPE v7; // esi
  const struct CLightsMask *LightsMask; // rax
  bool v11; // zf
  int v12; // ebx
  int v13; // ebx
  int ColorChannelDepth; // ebx
  char IsOpaque; // al
  signed int ConversionShader; // eax
  __int64 v17; // rcx
  unsigned int v18; // esi
  signed int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  __int64 v20; // rcx
  signed int D3DSamplerStateNoRef; // eax
  __int64 v22; // rcx
  unsigned int v23; // edi
  void (__fastcall *v24)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD); // rbx
  struct ID3D11VertexShader *VertexShaderNoRef; // rax
  __int16 v27; // [rsp+30h] [rbp-59h] BYREF
  char v28; // [rsp+32h] [rbp-57h]
  unsigned int v29; // [rsp+40h] [rbp-49h] BYREF
  struct ID3D11PixelShader *v30; // [rsp+48h] [rbp-41h] BYREF
  __int64 v31; // [rsp+50h] [rbp-39h] BYREF
  __int128 v32; // [rsp+58h] [rbp-31h] BYREF
  __int64 v33; // [rsp+68h] [rbp-21h] BYREF
  __int128 v34; // [rsp+70h] [rbp-19h]
  const char *v35; // [rsp+80h] [rbp-9h]
  int v36; // [rsp+88h] [rbp-1h]
  int v37; // [rsp+90h] [rbp+7h]
  bool v38[4]; // [rsp+94h] [rbp+Bh] BYREF
  enum DXGI_FORMAT v39[4]; // [rsp+98h] [rbp+Fh] BYREF

  v3 = (CD3DDeviceLevel1 *)*((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 2);
  v6 = *((_QWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 27);
  v33 = 0LL;
  v30 = 0LL;
  *(_QWORD *)&v34 = "NoOp";
  v35 = "NoOp";
  v31 = 0LL;
  DWORD2(v34) = 0;
  v36 = 0;
  *(_DWORD *)v38 = 0;
  LightsMask = CD3DBatchExecutionContext::GetLightsMask(a2);
  *(_WORD *)&v38[1] = v7 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  v11 = *(_BYTE *)(v6 + 368) == 0;
  v12 = 0;
  v37 = *(_DWORD *)LightsMask;
  if ( !v11 )
    v12 = 16;
  if ( *((_DWORD *)a2 + 16) == 22 )
    v12 |= 8u;
  v13 = v12 | 1;
  LODWORD(v33) = v13;
  if ( CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16)) )
    LODWORD(v33) = v13 | 4;
  (*(void (__fastcall **)(_QWORD, enum DXGI_FORMAT *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v39);
  DWORD2(v32) = 0;
  *(_QWORD *)&v32 = "NoOp";
  ColorChannelDepth = GetColorChannelDepth(v39[0]);
  IsOpaque = CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16));
  ConversionShader = ColorConversion::GetConversionShader(
                       (enum DXGI_COLOR_SPACE_TYPE)v39[2],
                       IsOpaque,
                       ColorChannelDepth,
                       v7,
                       (struct ColorConversion::Shader *)&v32,
                       v38);
  v18 = ConversionShader;
  if ( ConversionShader < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ConversionShader, 0x56u, 0LL);
  }
  else
  {
    if ( DWORD2(v32) > 1 )
      v34 = v32;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     v3,
                                                     (const struct CommonRenderingShaderDesc *)&v33,
                                                     1,
                                                     &v29,
                                                     &v30);
    v18 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0x5Fu, 0LL);
    }
    else
    {
      v27 = *((_WORD *)this + 20);
      v28 = *((_BYTE *)this + 42);
      D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef((__int64)v3, (unsigned __int8 *)&v27, &v31);
      v18 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, D3DSamplerStateNoRef, 0x61u, 0LL);
      }
      else
      {
        v23 = v29;
        v24 = *(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 88LL);
        VertexShaderNoRef = CD3DDeviceLevel1::GetVertexShaderNoRef(v3, v29);
        v24(v4, VertexShaderNoRef, 0LL, 0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(
          v4,
          v30,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v4 + 64LL))(
          v4,
          0LL,
          1LL,
          (char *)this + 48);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, 0LL, 1LL, &v31);
        *a3 = v23;
      }
    }
  }
  return v18;
}
