/*
 * XREFs of ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017E130
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017E300 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     floor @ 0x1800EC5F8 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017DA84 (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017DE9C (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180201A54 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x180201AD0 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 */

__int64 __fastcall CResampleLayer::RenderLanczos(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        const struct D3D11_VIEWPORT *a4)
{
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rax
  float v12; // xmm0_4
  bool v13; // al
  int v14; // r8d
  int v15; // edx
  int SurfacePixelShaderNoRef; // ebx
  __int64 v17; // rdx
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int16 v24; // [rsp+B0h] [rbp+30h] BYREF
  char v25; // [rsp+B2h] [rbp+32h]
  __int64 v26; // [rsp+C8h] [rbp+48h] BYREF

  v8 = (int)floor(a4->Width + 0.5);
  v9 = (int)floor(a4->Height + 0.5);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 120) + 32LL))(v10 + 120);
  v12 = *((float *)this + 32);
  v26 = 0LL;
  v21 = v11;
  v13 = v12 >= 1.0 && *((float *)this + 33) >= 1.0;
  v14 = *((_DWORD *)this + 7);
  v15 = *((_DWORD *)this + 6);
  if ( v13 )
  {
    SurfacePixelShaderNoRef = FillLanczosUpBuffer(a2, v15, v14, v8, v9);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v17 = 306LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
        (const char *)(unsigned int)SurfacePixelShaderNoRef);
      return (unsigned int)SurfacePixelShaderNoRef;
    }
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 1LL, &v26);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v17 = 310LL;
      goto LABEL_8;
    }
  }
  else
  {
    SurfacePixelShaderNoRef = ComputeLanczosKernel(a2, v15, v14, v8, v9);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v17 = 320LL;
      goto LABEL_8;
    }
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 0LL, &v26);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v17 = 324LL;
      goto LABEL_8;
    }
  }
  v19 = *((_QWORD *)this + 1);
  v22[1] = &v24;
  v24 = 256;
  v25 = 1;
  v22[0] = 1LL;
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 144LL))(v19);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::RunShader(
                              (_DWORD)a2,
                              (unsigned int)&v21,
                              1,
                              (_DWORD)a4,
                              0,
                              (__int64)v22,
                              v20,
                              (__int64)a3,
                              v26);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v17 = 339LL;
    goto LABEL_8;
  }
  return 0LL;
}
