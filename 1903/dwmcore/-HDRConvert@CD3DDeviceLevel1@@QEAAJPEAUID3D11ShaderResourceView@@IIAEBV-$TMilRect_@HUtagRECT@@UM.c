/*
 * XREFs of ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015D694
 * Callers:
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x180168C64 (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x18015BD64 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18015D170 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180162958 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180162F3C (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18021D1A0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
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
  int v17; // xmm1_4
  __int64 v18; // r11
  __int64 v19; // rax
  signed int CompositingPixelShaderNoRef; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  CSurfaceShaderComposer *v23; // rcx
  signed int updated; // eax
  __int64 v25; // rcx
  int v26; // r8d
  CSurfaceShaderComposer *v27; // rcx
  signed int v28; // eax
  __int64 v29; // rcx
  __int16 v31; // [rsp+70h] [rbp-90h] BYREF
  char v32; // [rsp+72h] [rbp-8Eh]
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h] BYREF
  int v37[20]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v38; // [rsp+100h] [rbp+0h] BYREF
  __int64 v39; // [rsp+108h] [rbp+8h]
  __int64 v40; // [rsp+110h] [rbp+10h]
  _DWORD v41[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  int v45; // [rsp+13Ch] [rbp+3Ch]
  int v46; // [rsp+140h] [rbp+40h]
  int v47; // [rsp+144h] [rbp+44h]
  int v48; // [rsp+148h] [rbp+48h]
  __int64 v49; // [rsp+14Ch] [rbp+4Ch]
  __int64 v50; // [rsp+154h] [rbp+54h]
  int v51; // [rsp+15Ch] [rbp+5Ch]
  __int128 v52; // [rsp+160h] [rbp+60h]
  __int128 v53; // [rsp+170h] [rbp+70h]
  __int128 v54; // [rsp+180h] [rbp+80h]
  __int128 v55; // [rsp+190h] [rbp+90h]
  __int128 v56; // [rsp+1A0h] [rbp+A0h]

  v37[16] = 0;
  v42 = 0LL;
  v43 = 0LL;
  v46 = 0;
  v48 = 0;
  v35 = 0LL;
  v51 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v36 = a2;
  v52 = _xmm_bf800000bf800000000000003f800000;
  v49 = 0x3F8000003F800000LL;
  v50 = 0x3F8000003F800000LL;
  v53 = _xmm;
  v54 = _xmm;
  v31 = 257;
  v32 = 1;
  v41[0] = -1082130432;
  v41[1] = 1065353216;
  v44 = -1082130432;
  v45 = -1082130432;
  v47 = 1065353216;
  v55 = _xmm;
  v56 = _xmm;
  CD3DDeviceLevel1::CalcHDRConvertUVTransform((__int64)v37, a10, a11, a3, a4, a5, a6, a8, (CMILMatrix *)v37);
  v16 = 0;
  do
  {
    v34[0] = v41[6 * v16 + 2];
    v34[1] = v41[6 * v16 + 3];
    CMILMatrix::Transform((CMILMatrix *)v37, (const struct MilPoint2F *)v34, (struct MilPoint2F *)&v33, 1u);
    ++v16;
    v17 = DWORD1(v33);
    v41[v18] = v33;
    v41[v19] = v17;
  }
  while ( v16 < 6 );
  *(_QWORD *)&v33 = 1LL;
  *((_QWORD *)&v33 + 1) = a7;
  if ( !a7 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  CompositingPixelShaderNoRef = CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
                                  (struct CD3DDeviceLevel1 *)this,
                                  &v33,
                                  a12,
                                  &v35);
  v22 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, CompositingPixelShaderNoRef, 0xB30u, 0LL);
  }
  else
  {
    v23 = this[155];
    HIDWORD(v40) = 1065353216;
    *(float *)&v39 = (float)a10;
    *((float *)&v39 + 1) = (float)a11;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v23, a13);
    v22 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, updated, 0xB36u, 0LL);
    }
    else
    {
      v27 = this[155];
      *((_QWORD *)&v33 + 1) = &v31;
      *(_QWORD *)&v33 = 1LL;
      v28 = CSurfaceShaderComposer::RunShader(
              (_DWORD)v27,
              (unsigned int)v41,
              v26,
              (unsigned int)&v36,
              1,
              (__int64)&v38,
              5,
              (__int64)&v33,
              a14,
              a9,
              v35,
              a15,
              1);
      v22 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xB43u, 0LL);
    }
  }
  return v22;
}
