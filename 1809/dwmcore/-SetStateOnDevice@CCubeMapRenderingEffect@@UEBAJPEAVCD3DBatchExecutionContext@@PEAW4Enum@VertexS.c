/*
 * XREFs of ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x18022A4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180015800 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18006AAA0 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5F60 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1801877D4 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x180187D50 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x1801FC69C (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::SetStateOnDevice(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        enum VertexShaderKey::Enum *a3)
{
  CD3DDeviceLevel1 *v3; // r14
  __int64 v4; // r12
  __int64 v6; // rbx
  enum DXGI_COLOR_SPACE_TYPE v7; // r15d
  const struct CLightsMask *LightsMask; // rax
  bool v11; // zf
  int v12; // ebx
  int v13; // ebx
  int ColorChannelDepth; // ebx
  char IsOpaque; // al
  int ConversionShader; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  __int64 v20; // rcx
  int D3DSamplerStateNoRef; // eax
  __int64 v22; // rcx
  int v23; // ebx
  __int16 v25; // [rsp+30h] [rbp-59h] BYREF
  char v26; // [rsp+32h] [rbp-57h]
  int v27; // [rsp+40h] [rbp-49h] BYREF
  struct ID3D11PixelShader *v28; // [rsp+48h] [rbp-41h] BYREF
  __int64 v29; // [rsp+50h] [rbp-39h] BYREF
  __int128 v30; // [rsp+58h] [rbp-31h] BYREF
  __int64 v31; // [rsp+68h] [rbp-21h] BYREF
  __int128 v32; // [rsp+70h] [rbp-19h]
  const char *v33; // [rsp+80h] [rbp-9h]
  int v34; // [rsp+88h] [rbp-1h]
  int v35; // [rsp+90h] [rbp+7h]
  bool v36[4]; // [rsp+94h] [rbp+Bh] BYREF
  enum DXGI_FORMAT v37[4]; // [rsp+98h] [rbp+Fh] BYREF

  v3 = (CD3DDeviceLevel1 *)*((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 2);
  v6 = *((_QWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 25);
  v31 = 0LL;
  v28 = 0LL;
  *(_QWORD *)&v32 = "NoOp";
  v33 = "NoOp";
  v29 = 0LL;
  DWORD2(v32) = 0;
  v34 = 0;
  *(_DWORD *)v36 = 0;
  LightsMask = CD3DBatchExecutionContext::GetLightsMask(a2);
  *(_WORD *)&v36[1] = v7 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  v11 = *(_BYTE *)(v6 + 256) == 0;
  v12 = 0;
  v35 = *(_DWORD *)LightsMask;
  if ( !v11 )
    v12 = 16;
  if ( *((_DWORD *)a2 + 16) == 22 )
    v12 |= 8u;
  v13 = v12 | 1;
  LODWORD(v31) = v13;
  if ( CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16)) )
    LODWORD(v31) = v13 | 4;
  (*(void (__fastcall **)(_QWORD, enum DXGI_FORMAT *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v37);
  DWORD2(v30) = 0;
  *(_QWORD *)&v30 = "NoOp";
  ColorChannelDepth = GetColorChannelDepth(v37[0]);
  IsOpaque = CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16));
  ConversionShader = ColorConversion::GetConversionShader(
                       (enum DXGI_COLOR_SPACE_TYPE)v37[2],
                       IsOpaque,
                       ColorChannelDepth,
                       v7,
                       (struct ColorConversion::Shader *)&v30,
                       v36);
  v18 = ConversionShader;
  if ( ConversionShader < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ConversionShader, 0x58u);
  }
  else
  {
    if ( DWORD2(v30) > 1 )
      v32 = v30;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     v3,
                                                     (const struct CommonRenderingShaderDesc *)&v31,
                                                     1,
                                                     (enum VertexShaderKey::Enum *)&v27,
                                                     &v28);
    v18 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0x61u);
    }
    else
    {
      v25 = *((_WORD *)this + 20);
      v26 = *((_BYTE *)this + 42);
      D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef((__int64)v3, (unsigned __int8 *)&v25, &v29);
      v18 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, D3DSamplerStateNoRef, 0x63u);
      }
      else
      {
        v23 = v27;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 88LL))(
          v4,
          *((_QWORD *)v3 + v27 + 129),
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(
          v4,
          v28,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v4 + 64LL))(
          v4,
          0LL,
          1LL,
          (char *)this + 48);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, 0LL, 1LL, &v29);
        *(_DWORD *)a3 = v23;
      }
    }
  }
  return v18;
}
