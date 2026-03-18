/*
 * XREFs of ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017EF44
 * Callers:
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017EE30 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017F4B0 (-RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18007A960 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180162840 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180162958 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180162F3C (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180170DD4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CGammaBlendLayer::CopyAndTransform(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  CSurfaceShaderComposer *v12; // r14
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __m128i v16; // xmm2
  __m128i v17; // xmm4
  int v18; // eax
  float v19; // xmm3_4
  signed int SurfacePixelShaderNoRef; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // r8
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  __int16 v31; // [rsp+70h] [rbp-90h] BYREF
  char v32; // [rsp+72h] [rbp-8Eh]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  __int128 v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  int v39; // [rsp+B0h] [rbp-50h]
  float v40; // [rsp+B4h] [rbp-4Ch]
  int v41; // [rsp+B8h] [rbp-48h]
  float v42; // [rsp+BCh] [rbp-44h]
  int v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C4h] [rbp-3Ch]
  float v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  float v47; // [rsp+D0h] [rbp-30h]
  int v48; // [rsp+D4h] [rbp-2Ch]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  int v51; // [rsp+E0h] [rbp-20h]
  float v52; // [rsp+E4h] [rbp-1Ch]
  int v53; // [rsp+E8h] [rbp-18h]
  float v54; // [rsp+ECh] [rbp-14h]
  int v55; // [rsp+F0h] [rbp-10h]
  int v56; // [rsp+F4h] [rbp-Ch]
  float v57; // [rsp+F8h] [rbp-8h]
  float v58; // [rsp+FCh] [rbp-4h]
  float v59; // [rsp+100h] [rbp+0h]
  float v60; // [rsp+104h] [rbp+4h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]
  float v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+114h] [rbp+14h]
  float v65; // [rsp+118h] [rbp+18h]
  int v66; // [rsp+11Ch] [rbp+1Ch]
  __int64 v67; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v68[2]; // [rsp+128h] [rbp+28h] BYREF
  float v69; // [rsp+138h] [rbp+38h] BYREF
  float v70; // [rsp+13Ch] [rbp+3Ch]
  float v71; // [rsp+140h] [rbp+40h]
  float v72; // [rsp+144h] [rbp+44h]
  _QWORD v73[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v74; // [rsp+158h] [rbp+58h]

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 384) + 160LL))(*(_QWORD *)(a2 + 384));
  v67 = 0LL;
  v33 = 0LL;
  v12 = *(CSurfaceShaderComposer **)(v10 + 1240);
  v13 = 0LL;
  v34 = 0LL;
  v73[0] = 0LL;
  v73[1] = 0LL;
  v74 = 0LL;
  v31 = 256;
  v32 = 1;
  if ( !v12 )
  {
    v14 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x887A0004, 0x88u, 0LL);
    goto LABEL_15;
  }
  do
  {
    *((float *)v73 + v13) = (float)*(int *)(a5 + 4 * v13);
    ++v13;
  }
  while ( v13 < 4 );
  v15 = *a3;
  HIDWORD(v74) = 1065353216;
  (*(void (__fastcall **)(__int64 *, float *))(v15 + 48))(a3, &v69);
  v16 = _mm_cvtsi32_si128(*a4);
  v17 = _mm_cvtsi32_si128(a4[1]);
  v18 = a4[1] + a4[3];
  v19 = (float)(int)(*a4 + a4[2]);
  *(_QWORD *)&v35 = 0x3F800000BF800000LL;
  v37 = -1082130432;
  v38 = -1082130432;
  v43 = 1065353216;
  v44 = 1065353216;
  v49 = -1082130432;
  v50 = -1082130432;
  v55 = 1065353216;
  v56 = -1082130432;
  v61 = 1065353216;
  v62 = 1065353216;
  v40 = (float)v18 / (float)(v72 - v70);
  v42 = v40;
  v52 = v40;
  v54 = v40;
  v58 = v40;
  v60 = v40;
  *((float *)&v35 + 2) = _mm_cvtepi32_ps(v16).m128_f32[0] / (float)(v71 - v69);
  *((float *)&v35 + 3) = _mm_cvtepi32_ps(v17).m128_f32[0] / (float)(v72 - v70);
  v36 = *((_QWORD *)&v35 + 1);
  v39 = DWORD2(v35);
  v41 = DWORD2(v35);
  v45 = v19 / (float)(v71 - v69);
  v46 = HIDWORD(v35);
  v47 = v45;
  v48 = HIDWORD(v35);
  v51 = DWORD2(v35);
  v53 = DWORD2(v35);
  v57 = v45;
  v59 = v45;
  v63 = v45;
  v64 = HIDWORD(v35);
  v65 = v45;
  v66 = HIDWORD(v35);
  SurfacePixelShaderNoRef = CDrawingContext::FlushD2D((CDrawingContext *)a2);
  v14 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v30 = 171;
    goto LABEL_14;
  }
  if ( g_LockAndReadLayer )
  {
    CDrawingContext::ReadTexture((CDrawingContext *)a2);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 216LL))(*(_QWORD *)(a1 + 8), 0LL, 0LL);
  }
  v22 = (*(__int64 (__fastcall **)(__int64 *))(*a3 + 104))(a3);
  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v22 + 120) + 32LL))(v22 + 120);
  v24 = *(_QWORD *)(a2 + 352);
  v34 = v23;
  v25 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 104LL))(v24) + 192);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef((__int64)v12, a6, &v33);
  v14 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v30 = 184;
    goto LABEL_14;
  }
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v12, *(float *)(a1 + 112));
  v14 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v30 = 186;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, SurfacePixelShaderNoRef, v30, 0LL);
    goto LABEL_15;
  }
  v26 = *(_QWORD *)(a1 + 8);
  v68[1] = (unsigned __int64)&v31;
  v68[0] = 1LL;
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 144LL))(v26);
  CSurfaceShaderComposer::RunShader(v12, &v35, v28, (__int64)&v34, 1u, (float *)v73, 0, v68, v27, v25, v33, 0LL, 0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture((CDrawingContext *)a2);
LABEL_15:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v67);
  return v14;
}
