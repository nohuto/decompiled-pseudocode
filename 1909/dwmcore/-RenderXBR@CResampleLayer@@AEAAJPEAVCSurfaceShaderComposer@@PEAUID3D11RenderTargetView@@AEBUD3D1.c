/*
 * XREFs of ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017E9AC
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017E7F4 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     floor @ 0x1800E8DF8 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180161150 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x1801611D8 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x18017E4AC (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017E550 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 */

__int64 __fastcall CResampleLayer::RenderXBR(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        const struct D3D11_VIEWPORT *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  int SurfacePixelShaderNoRef; // ebx
  __int64 v13; // rdx
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm7
  float v22; // xmm0_4
  signed int v23; // ebx
  double v24; // xmm0_8
  __int64 v25; // rcx
  char v26; // al
  __int16 v27; // [rsp+68h] [rbp-49h] BYREF
  char v28; // [rsp+6Ah] [rbp-47h]
  __int16 v29; // [rsp+6Ch] [rbp-45h] BYREF
  char v30; // [rsp+6Eh] [rbp-43h]
  __int16 v31; // [rsp+6Fh] [rbp-42h]
  char v32; // [rsp+71h] [rbp-40h]
  __int64 v33; // [rsp+78h] [rbp-39h] BYREF
  __int64 v34; // [rsp+80h] [rbp-31h] BYREF
  __int64 v35; // [rsp+88h] [rbp-29h] BYREF
  __int16 *v36; // [rsp+90h] [rbp-21h]
  _QWORD v37[2]; // [rsp+98h] [rbp-19h] BYREF
  _DWORD v38[6]; // [rsp+A8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 120) + 32LL))(v8 + 120);
  v10 = *((_QWORD *)this + 15);
  v34 = v9;
  v27 = 256;
  v28 = 1;
  v11 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10) + 192);
  SurfacePixelShaderNoRef = FillXBRPass1Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7));
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v13 = 372LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
    return (unsigned int)SurfacePixelShaderNoRef;
  }
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)a2, 4u, &v33);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v13 = 377LL;
    goto LABEL_3;
  }
  v15 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v16 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v17 = *((_QWORD *)this + 1);
  v38[4] = 0;
  v38[0] = 0;
  v38[1] = 0;
  v36 = &v27;
  v35 = 1LL;
  v38[2] = _mm_cvtepi32_ps(v15).m128_u32[0];
  v38[5] = (_DWORD)FLOAT_1_0;
  v38[3] = _mm_cvtepi32_ps(v16).m128_u32[0];
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 144LL))(v17);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::RunShader(
                              (int)a2,
                              (int)&v34,
                              1,
                              (__int64)v38,
                              5,
                              (__int64)&v35,
                              v18,
                              v11,
                              v33);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v13 = 397LL;
    goto LABEL_3;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 104LL))(*((_QWORD *)this + 15));
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v19 + 120) + 32LL))(v19 + 120);
  v21 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v22 = (float)*((int *)this + 7);
  v37[0] = v20;
  v37[1] = v34;
  *(float *)v21.m128i_i32 = _mm_cvtepi32_ps(v21).m128_f32[0] * *((float *)this + 32);
  v23 = (int)floor((float)(v22 * *((float *)this + 33)) + 0.5);
  v24 = floor(*(float *)v21.m128i_i32 + 0.5);
  SurfacePixelShaderNoRef = FillXBRPass2Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7), (int)v24, v23);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v13 = 412LL;
    goto LABEL_3;
  }
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)a2, 5u, &v33);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v13 = 417LL;
    goto LABEL_3;
  }
  v30 = v28;
  v32 = v28;
  v29 = v27;
  v31 = v27;
  v25 = *((_QWORD *)this + 1);
  v36 = &v29;
  v35 = 2LL;
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 144LL))(v25);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::RunShader(
                              (int)a2,
                              (int)v37,
                              2,
                              (__int64)a4,
                              0,
                              (__int64)&v35,
                              v26,
                              (__int64)a3,
                              v33);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v13 = 431LL;
    goto LABEL_3;
  }
  return 0LL;
}
