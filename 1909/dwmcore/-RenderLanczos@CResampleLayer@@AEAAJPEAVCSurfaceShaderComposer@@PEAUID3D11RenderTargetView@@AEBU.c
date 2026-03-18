/*
 * XREFs of ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017E624
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017E7F4 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     floor @ 0x1800E8DF8 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180161150 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x1801611D8 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017DFB4 (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017E3E0 (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
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
  __int64 *v19; // rcx
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int16 v25; // [rsp+B0h] [rbp+30h] BYREF
  char v26; // [rsp+B2h] [rbp+32h]
  __int64 v27; // [rsp+C8h] [rbp+48h] BYREF

  v8 = (int)floor(a4->Width + 0.5);
  v9 = (int)floor(a4->Height + 0.5);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 120) + 32LL))(v10 + 120);
  v12 = *((float *)this + 32);
  v27 = 0LL;
  v22 = v11;
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
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)a2, 1u, &v27);
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
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)a2, 0, &v27);
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v17 = 324LL;
      goto LABEL_8;
    }
  }
  v19 = (__int64 *)*((_QWORD *)this + 1);
  v23[1] = &v25;
  v25 = 256;
  v26 = 1;
  v20 = *v19;
  v23[0] = 1LL;
  v21 = (*(__int64 (__fastcall **)(__int64 *))(v20 + 144))(v19);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::RunShader(
                              (int)a2,
                              (int)&v22,
                              1,
                              (__int64)a4,
                              0,
                              (__int64)v23,
                              v21,
                              (__int64)a3,
                              v27);
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v17 = 339LL;
    goto LABEL_8;
  }
  return 0LL;
}
