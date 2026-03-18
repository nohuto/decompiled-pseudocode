/*
 * XREFs of ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18017E034
 * Callers:
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D11_VIEWPORT@@@Z @ 0x18017E498 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@AEBUD3D1.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180202088 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall FillXBRPass2Buffer(struct CSurfaceShaderComposer *a1, int a2, int a3, int a4, signed int a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+20h] [rbp-40h] BYREF
  float v13[8]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  memset_0(v13, 0, sizeof(v13));
  v12[0] = 32LL;
  v13[4] = (float)a4;
  v12[1] = v13;
  v13[0] = (float)a2;
  v13[5] = (float)a5;
  v13[1] = (float)a3;
  v13[2] = (float)a2;
  v13[3] = (float)a3;
  v13[6] = (float)a2;
  v13[7] = (float)a3;
  v9 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, v12, 0LL);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
