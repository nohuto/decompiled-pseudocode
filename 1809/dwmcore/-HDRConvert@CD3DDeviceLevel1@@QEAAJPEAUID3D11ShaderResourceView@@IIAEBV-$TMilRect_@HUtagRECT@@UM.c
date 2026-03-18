/*
 * XREFs of ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801FC7D4
 * Callers:
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x180208E94 (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x1801E2E0C (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x1801FB334 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801FC3FC (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180201B60 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180202158 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::HDRConvert(
        CSurfaceShaderComposer **this,
        __int64 a2,
        int a3,
        int a4,
        unsigned int *a5,
        enum DXGI_MODE_ROTATION a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12,
        float a13,
        char a14,
        __int64 a15)
{
  unsigned int v16; // ebx
  gsl::details *v17; // rcx
  FLOAT y; // xmm1_4
  __int64 v19; // r11
  __int64 v20; // rax
  int CompositingPixelShaderNoRef; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  CSurfaceShaderComposer *v24; // rcx
  int updated; // eax
  __int64 v26; // rcx
  int v27; // r8d
  CSurfaceShaderComposer *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int16 v32; // [rsp+70h] [rbp-90h] BYREF
  char v33; // [rsp+72h] [rbp-8Eh]
  struct D2D_POINT_2F v34[2]; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_POINT_2F v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  int v38[20]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+100h] [rbp+0h] BYREF
  __int64 v40; // [rsp+108h] [rbp+8h]
  __int64 v41; // [rsp+110h] [rbp+10h]
  _DWORD v42[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v43; // [rsp+128h] [rbp+28h]
  __int64 v44; // [rsp+130h] [rbp+30h]
  int v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+13Ch] [rbp+3Ch]
  int v47; // [rsp+140h] [rbp+40h]
  int v48; // [rsp+144h] [rbp+44h]
  int v49; // [rsp+148h] [rbp+48h]
  __int64 v50; // [rsp+14Ch] [rbp+4Ch]
  __int64 v51; // [rsp+154h] [rbp+54h]
  int v52; // [rsp+15Ch] [rbp+5Ch]
  __int128 v53; // [rsp+160h] [rbp+60h]
  __int128 v54; // [rsp+170h] [rbp+70h]
  __int128 v55; // [rsp+180h] [rbp+80h]
  __int128 v56; // [rsp+190h] [rbp+90h]
  __int128 v57; // [rsp+1A0h] [rbp+A0h]

  v38[16] = 0;
  v43 = 0LL;
  v44 = 0LL;
  v47 = 0;
  v49 = 0;
  v36 = 0LL;
  v52 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v37 = a2;
  v53 = _xmm_bf800000bf800000000000003f800000;
  v50 = 0x3F8000003F800000LL;
  v51 = 0x3F8000003F800000LL;
  v54 = _xmm;
  v55 = _xmm;
  v32 = 257;
  v33 = 1;
  v42[0] = -1082130432;
  v42[1] = 1065353216;
  v45 = -1082130432;
  v46 = -1082130432;
  v48 = 1065353216;
  v56 = _xmm;
  v57 = _xmm;
  CD3DDeviceLevel1::CalcHDRConvertUVTransform((__int64)v38, a10, a11, a3, a4, a5, a6, a8, (CMILMatrix *)v38);
  v16 = 0;
  do
  {
    LODWORD(v35.x) = v42[6 * v16 + 2];
    LODWORD(v35.y) = v42[6 * v16 + 3];
    CMILMatrix::Transform((CMILMatrix *)v38, &v35, v34);
    ++v16;
    y = v34[0].y;
    v42[v19] = LODWORD(v34[0].x);
    *(FLOAT *)&v42[v20] = y;
  }
  while ( v16 < 6 );
  v34[0] = (struct D2D_POINT_2F)1LL;
  v34[1] = (struct D2D_POINT_2F)a7;
  if ( !a7 )
  {
    gsl::details::terminate(v17);
    JUMPOUT(0x1801FCA9DLL);
  }
  CompositingPixelShaderNoRef = CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
                                  (struct CD3DDeviceLevel1 *)this,
                                  (__int128 *)v34,
                                  a12,
                                  &v36);
  v23 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, CompositingPixelShaderNoRef, 0xB1Du);
  }
  else
  {
    v24 = this[143];
    HIDWORD(v41) = 1065353216;
    *(float *)&v40 = (float)a10;
    *((float *)&v40 + 1) = (float)a11;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v24, a13);
    v23 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, updated, 0xB23u);
    }
    else
    {
      v28 = this[143];
      v34[1] = (struct D2D_POINT_2F)&v32;
      v34[0] = (struct D2D_POINT_2F)1LL;
      v29 = CSurfaceShaderComposer::RunShader(
              (_DWORD)v28,
              (unsigned int)v42,
              v27,
              (unsigned int)&v37,
              1,
              (__int64)&v39,
              5,
              (__int64)v34,
              a14,
              a9,
              v36,
              a15,
              1);
      v23 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xB30u);
    }
  }
  return v23;
}
