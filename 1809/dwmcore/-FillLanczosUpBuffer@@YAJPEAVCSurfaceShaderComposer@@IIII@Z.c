/*
 * XREFs of ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017DE9C
 * Callers:
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017E130 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180202088 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall FillLanczosUpBuffer(struct CSurfaceShaderComposer *a1, int a2, int a3, int a4, signed int a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-38h] BYREF
  float v15; // [rsp+48h] [rbp-30h]
  float v16; // [rsp+4Ch] [rbp-2Ch]
  float v17; // [rsp+50h] [rbp-28h]
  float v18; // [rsp+54h] [rbp-24h]

  memset_0(v14, 0, 0x20uLL);
  v13[0] = 32LL;
  v15 = (float)a2;
  v16 = (float)a3;
  v13[1] = v14;
  v17 = (float)a4;
  v18 = (float)a5;
  v9 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, v13, 0LL);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1Eu);
  return v11;
}
