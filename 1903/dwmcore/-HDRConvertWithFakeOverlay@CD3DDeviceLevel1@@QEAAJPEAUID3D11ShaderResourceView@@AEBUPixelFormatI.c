/*
 * XREFs of ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015D988
 * Callers:
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180168E04 (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x18015BD64 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18015D170 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180162958 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180162F3C (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18021D1A0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
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
  __int64 v19; // xmm1_8
  unsigned int v20; // r11d
  int v21; // r10d
  int v22; // r11d
  signed int CompositingPixelShaderNoRef; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  CSurfaceShaderComposer *v26; // rcx
  signed int updated; // eax
  __int64 v28; // rcx
  int v29; // r8d
  CSurfaceShaderComposer *v30; // rcx
  signed int v31; // eax
  __int64 v32; // rcx
  __int16 v34; // [rsp+70h] [rbp-90h] BYREF
  char v35; // [rsp+72h] [rbp-8Eh]
  __int128 v36; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v37[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v40[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp+0h] BYREF
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h] BYREF
  int v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+124h] [rbp+24h]
  int v48; // [rsp+12Ch] [rbp+2Ch]
  _DWORD v49[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v50; // [rsp+138h] [rbp+38h]
  __int64 v51; // [rsp+140h] [rbp+40h]
  int v52; // [rsp+148h] [rbp+48h]
  int v53; // [rsp+14Ch] [rbp+4Ch]
  int v54; // [rsp+150h] [rbp+50h]
  int v55; // [rsp+154h] [rbp+54h]
  int v56; // [rsp+158h] [rbp+58h]
  __int64 v57; // [rsp+15Ch] [rbp+5Ch]
  __int64 v58; // [rsp+164h] [rbp+64h]
  int v59; // [rsp+16Ch] [rbp+6Ch]
  __int128 v60; // [rsp+170h] [rbp+70h]
  __int128 v61; // [rsp+180h] [rbp+80h]
  __int128 v62; // [rsp+190h] [rbp+90h]
  __int128 v63; // [rsp+1A0h] [rbp+A0h]
  __int128 v64; // [rsp+1B0h] [rbp+B0h]

  v41 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v54 = 0;
  v56 = 0;
  v38 = 0LL;
  v59 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v57 = 0x3F8000003F800000LL;
  v58 = 0x3F8000003F800000LL;
  v46 = *((_DWORD *)a3 + 2);
  v60 = _xmm_bf800000bf800000000000003f800000;
  v62 = _xmm;
  v61 = _xmm;
  v64 = _xmm;
  v18 = *a9;
  v48 = *((_DWORD *)a9 + 2);
  v63 = _xmm;
  v19 = *a3;
  v39[0] = a2;
  v39[1] = a4;
  v34 = 257;
  v35 = 1;
  v49[0] = -1082130432;
  v49[1] = 1065353216;
  v52 = -1082130432;
  v53 = -1082130432;
  v55 = 1065353216;
  v45 = v19;
  v47 = v18;
  CD3DDeviceLevel1::CalcHDRConvertUVTransform((__int64)this, a12, a13, a5, a6, a7, a8, a10, (CMILMatrix *)v40);
  v20 = 0;
  do
  {
    v37[0] = v49[6 * v20 + 2];
    v37[1] = v49[6 * v20 + 3];
    CMILMatrix::Transform((CMILMatrix *)v40, (const struct MilPoint2F *)v37, (struct MilPoint2F *)&v36, 1u);
    v49[v21 + 4] = v36;
    v20 = v22 + 1;
    v49[v21 + 5] = DWORD1(v36);
  }
  while ( v20 < 6 );
  *((_QWORD *)&v36 + 1) = &v45;
  *(_QWORD *)&v36 = 2LL;
  CompositingPixelShaderNoRef = CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
                                  (struct CD3DDeviceLevel1 *)this,
                                  &v36,
                                  a14,
                                  &v38);
  v25 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, CompositingPixelShaderNoRef, 0xB98u, 0LL);
  }
  else
  {
    v26 = this[155];
    HIDWORD(v44) = 1065353216;
    *(float *)&v43 = (float)a12;
    *((float *)&v43 + 1) = (float)a13;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v26, a15);
    v25 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, updated, 0xB9Eu, 0LL);
    }
    else
    {
      v30 = this[155];
      *((_QWORD *)&v36 + 1) = &v34;
      *(_QWORD *)&v36 = 1LL;
      v31 = CSurfaceShaderComposer::RunShader(
              (_DWORD)v30,
              (unsigned int)v49,
              v29,
              (unsigned int)v39,
              2,
              (__int64)&v42,
              5,
              (__int64)&v36,
              a16,
              a11,
              v38,
              a17,
              1);
      v25 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xBABu, 0LL);
    }
  }
  return v25;
}
