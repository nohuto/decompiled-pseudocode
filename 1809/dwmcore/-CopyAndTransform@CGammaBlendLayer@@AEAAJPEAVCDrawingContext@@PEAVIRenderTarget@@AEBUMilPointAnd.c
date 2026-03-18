/*
 * XREFs of ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017D344
 * Callers:
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D240 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D880 (-RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18008E430 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180166768 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180201A54 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180201B60 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180202158 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
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
  int SurfacePixelShaderNoRef; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rcx
  char v27; // al
  int v28; // r8d
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  __int16 v31; // [rsp+70h] [rbp-90h] BYREF
  char v32; // [rsp+72h] [rbp-8Eh]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v35[2]; // [rsp+90h] [rbp-70h] BYREF
  float v36; // [rsp+98h] [rbp-68h]
  float v37; // [rsp+9Ch] [rbp-64h]
  float v38; // [rsp+A0h] [rbp-60h]
  float v39; // [rsp+A4h] [rbp-5Ch]
  int v40; // [rsp+A8h] [rbp-58h]
  int v41; // [rsp+ACh] [rbp-54h]
  float v42; // [rsp+B0h] [rbp-50h]
  float v43; // [rsp+B4h] [rbp-4Ch]
  float v44; // [rsp+B8h] [rbp-48h]
  float v45; // [rsp+BCh] [rbp-44h]
  int v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C4h] [rbp-3Ch]
  float v48; // [rsp+C8h] [rbp-38h]
  float v49; // [rsp+CCh] [rbp-34h]
  float v50; // [rsp+D0h] [rbp-30h]
  float v51; // [rsp+D4h] [rbp-2Ch]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  float v54; // [rsp+E0h] [rbp-20h]
  float v55; // [rsp+E4h] [rbp-1Ch]
  float v56; // [rsp+E8h] [rbp-18h]
  float v57; // [rsp+ECh] [rbp-14h]
  int v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F4h] [rbp-Ch]
  float v60; // [rsp+F8h] [rbp-8h]
  float v61; // [rsp+FCh] [rbp-4h]
  float v62; // [rsp+100h] [rbp+0h]
  float v63; // [rsp+104h] [rbp+4h]
  int v64; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+10Ch] [rbp+Ch]
  float v66; // [rsp+110h] [rbp+10h]
  float v67; // [rsp+114h] [rbp+14h]
  float v68; // [rsp+118h] [rbp+18h]
  float v69; // [rsp+11Ch] [rbp+1Ch]
  __int64 v70; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v71[2]; // [rsp+128h] [rbp+28h] BYREF
  float v72; // [rsp+138h] [rbp+38h] BYREF
  float v73; // [rsp+13Ch] [rbp+3Ch]
  float v74; // [rsp+140h] [rbp+40h]
  float v75; // [rsp+144h] [rbp+44h]
  _QWORD v76[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v77; // [rsp+158h] [rbp+58h]

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 384) + 160LL))(*(_QWORD *)(a2 + 384));
  v70 = 0LL;
  v33 = 0LL;
  v12 = *(CSurfaceShaderComposer **)(v10 + 1144);
  v13 = 0LL;
  v34 = 0LL;
  v76[0] = 0LL;
  v76[1] = 0LL;
  v77 = 0LL;
  v31 = 256;
  v32 = 1;
  if ( !v12 )
  {
    v14 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2005270524, 0x88u);
    goto LABEL_15;
  }
  do
  {
    *((float *)v76 + v13) = (float)*(int *)(a5 + 4 * v13);
    ++v13;
  }
  while ( v13 < 4 );
  v15 = *a3;
  HIDWORD(v77) = 1065353216;
  (*(void (__fastcall **)(__int64 *, float *))(v15 + 48))(a3, &v72);
  v16 = _mm_cvtsi32_si128(*a4);
  v17 = _mm_cvtsi32_si128(a4[1]);
  v18 = a4[1] + a4[3];
  v19 = (float)(int)(*a4 + a4[2]);
  v35[0] = -1082130432;
  v35[1] = 1065353216;
  v40 = -1082130432;
  v41 = -1082130432;
  v46 = 1065353216;
  v47 = 1065353216;
  v52 = -1082130432;
  v53 = -1082130432;
  v58 = 1065353216;
  v59 = -1082130432;
  v64 = 1065353216;
  v65 = 1065353216;
  v43 = (float)v18 / (float)(v75 - v73);
  v45 = v43;
  v55 = v43;
  v57 = v43;
  v61 = v43;
  v63 = v43;
  v36 = _mm_cvtepi32_ps(v16).m128_f32[0] / (float)(v74 - v72);
  v37 = _mm_cvtepi32_ps(v17).m128_f32[0] / (float)(v75 - v73);
  v38 = v36;
  v39 = v37;
  v42 = v36;
  v44 = v36;
  v48 = v19 / (float)(v74 - v72);
  v49 = v37;
  v50 = v48;
  v51 = v37;
  v54 = v36;
  v56 = v36;
  v60 = v48;
  v62 = v48;
  v66 = v48;
  v67 = v37;
  v68 = v48;
  v69 = v37;
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
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v12, a6, &v33);
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
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, SurfacePixelShaderNoRef, v30);
    goto LABEL_15;
  }
  v26 = *(_QWORD *)(a1 + 8);
  v71[1] = &v31;
  v71[0] = 1LL;
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 144LL))(v26);
  CSurfaceShaderComposer::RunShader(
    (_DWORD)v12,
    (unsigned int)v35,
    v28,
    (unsigned int)&v34,
    1,
    (__int64)v76,
    0,
    (__int64)v71,
    v27,
    v25,
    v33,
    0LL,
    0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture((CDrawingContext *)a2);
LABEL_15:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v70);
  return v14;
}
