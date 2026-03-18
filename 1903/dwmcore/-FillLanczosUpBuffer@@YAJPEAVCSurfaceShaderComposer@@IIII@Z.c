/*
 * XREFs of ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017FAE0
 * Callers:
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017FD24 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180162E60 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall FillLanczosUpBuffer(struct CSurfaceShaderComposer *a1, int a2, int a3, int a4, signed int a5)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  const void *v9[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  float v11; // [rsp+48h] [rbp-28h]
  float v12; // [rsp+4Ch] [rbp-24h]
  float v13; // [rsp+50h] [rbp-20h]
  float v14; // [rsp+54h] [rbp-1Ch]
  __int64 v15; // [rsp+58h] [rbp-18h]

  v10 = 0LL;
  v15 = 0LL;
  v9[0] = (const void *)32;
  v11 = (float)a2;
  v12 = (float)a3;
  v9[1] = &v10;
  v13 = (float)a4;
  v14 = (float)a5;
  v5 = CSurfaceShaderComposer::SetScratchConstantBuffer((__int64)a1, v9, D3D11_USAGE_DEFAULT);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Eu, 0LL);
  return v7;
}
