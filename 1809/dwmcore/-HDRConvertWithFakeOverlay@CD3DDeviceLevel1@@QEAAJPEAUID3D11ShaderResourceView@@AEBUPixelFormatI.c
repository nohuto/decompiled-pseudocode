/*
 * XREFs of ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801FCAA4
 * Callers:
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18020902C (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180016DAC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x1801FB334 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801FC3FC (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180201B60 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180202158 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::HDRConvertWithFakeOverlay(
        CSurfaceShaderComposer **this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int *a7,
        enum DXGI_MODE_ROTATION a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        unsigned int a14,
        float a15,
        char a16,
        __int64 a17)
{
  __int64 v18; // xmm0_8
  unsigned int v19; // r11d
  int v20; // r10d
  int v21; // r11d
  int CompositingPixelShaderNoRef; // eax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  CSurfaceShaderComposer *v25; // rcx
  int updated; // eax
  __int64 v27; // rcx
  int v28; // r8d
  CSurfaceShaderComposer *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int16 v33; // [rsp+70h] [rbp-90h] BYREF
  char v34; // [rsp+72h] [rbp-8Eh]
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v36[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v38[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v39[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp+0h] BYREF
  __int64 v42; // [rsp+108h] [rbp+8h]
  __int64 v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h] BYREF
  int v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+124h] [rbp+24h]
  int v47; // [rsp+12Ch] [rbp+2Ch]
  _DWORD v48[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int64 v50; // [rsp+140h] [rbp+40h]
  int v51; // [rsp+148h] [rbp+48h]
  int v52; // [rsp+14Ch] [rbp+4Ch]
  int v53; // [rsp+150h] [rbp+50h]
  int v54; // [rsp+154h] [rbp+54h]
  int v55; // [rsp+158h] [rbp+58h]
  __int64 v56; // [rsp+15Ch] [rbp+5Ch]
  __int64 v57; // [rsp+164h] [rbp+64h]
  int v58; // [rsp+16Ch] [rbp+6Ch]
  __int128 v59; // [rsp+170h] [rbp+70h]
  __int128 v60; // [rsp+180h] [rbp+80h]
  __int128 v61; // [rsp+190h] [rbp+90h]
  __int128 v62; // [rsp+1A0h] [rbp+A0h]
  __int128 v63; // [rsp+1B0h] [rbp+B0h]

  v40 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v53 = 0;
  v55 = 0;
  v37 = 0LL;
  v58 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v56 = 0x3F8000003F800000LL;
  v57 = 0x3F8000003F800000LL;
  v45 = *((_DWORD *)a3 + 2);
  v59 = _xmm_bf800000bf800000000000003f800000;
  v61 = _xmm;
  v63 = _xmm;
  v44 = *a3;
  v18 = *a9;
  v47 = *((_DWORD *)a9 + 2);
  v60 = _xmm;
  v38[0] = a2;
  v38[1] = a4;
  v33 = 257;
  v34 = 1;
  v48[0] = -1082130432;
  v48[1] = 1065353216;
  v51 = -1082130432;
  v52 = -1082130432;
  v54 = 1065353216;
  v62 = _xmm;
  v46 = v18;
  CD3DDeviceLevel1::CalcHDRConvertUVTransform((__int64)this, a12, a13, a5, a6, a7, a8, a10, (CMILMatrix *)v39);
  v19 = 0;
  do
  {
    v36[0] = v48[6 * v19 + 2];
    v36[1] = v48[6 * v19 + 3];
    CMILMatrix::Transform((CMILMatrix *)v39, (const struct MilPoint2F *)v36, (struct MilPoint2F *)&v35, 1);
    v48[v20 + 4] = v35;
    v19 = v21 + 1;
    v48[v20 + 5] = DWORD1(v35);
  }
  while ( v19 < 6 );
  *((_QWORD *)&v35 + 1) = &v44;
  *(_QWORD *)&v35 = 2LL;
  CompositingPixelShaderNoRef = CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
                                  (struct CD3DDeviceLevel1 *)this,
                                  &v35,
                                  a14,
                                  &v37);
  v24 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, CompositingPixelShaderNoRef, 0xB85u);
  }
  else
  {
    v25 = this[143];
    HIDWORD(v43) = 1065353216;
    *(float *)&v42 = (float)a12;
    *((float *)&v42 + 1) = (float)a13;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v25, a15);
    v24 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, updated, 0xB8Bu);
    }
    else
    {
      v29 = this[143];
      *((_QWORD *)&v35 + 1) = &v33;
      *(_QWORD *)&v35 = 1LL;
      v30 = CSurfaceShaderComposer::RunShader(
              (_DWORD)v29,
              (unsigned int)v48,
              v28,
              (unsigned int)v38,
              2,
              (__int64)&v41,
              5,
              (__int64)&v35,
              a16,
              a11,
              v37,
              a17,
              1);
      v24 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xB98u);
    }
  }
  return v24;
}
