/*
 * XREFs of ?CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MMAEBUStereoscopicSlateData@@PEAUStereoscopicViewData@@@Z @ 0x180241DEC
 * Callers:
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x180241B70 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x18001418C (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1801BDF78 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CStereoscopicContentManager::CalculateViewTransformsForSlate(
        __int64 a1,
        char a2,
        double a3,
        double a4,
        __m128 *a5,
        __int64 a6)
{
  __m128 v7; // xmm6
  __m128 v8; // xmm7
  __int128 v10; // xmm2
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm3
  __int128 v14; // xmm2
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  int v21; // esi
  __m128 v22; // xmm8
  __m128 v23; // xmm1
  __m128 v24; // xmm0
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm13
  __m128 v29; // xmm14
  __m128 v30; // xmm15
  __int64 v31; // r8
  __m128 v32; // xmm11
  __m128 v33; // xmm12
  __m128 *v34; // rax
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  __m128 v37; // xmm3
  double v38; // xmm0_8
  double v39; // xmm0_8
  __m128 v40; // xmm0
  __m128 v41; // xmm5
  __m128 v42; // xmm6
  __m128 v43; // xmm0
  __m128 v44; // xmm2
  __m128 v45; // xmm0
  double v46; // xmm0_8
  __m128 v47; // xmm0
  double v48; // xmm1_8
  __int128 v49; // xmm2
  __int128 v50; // xmm3
  __m128 v51; // xmm4
  unsigned __int64 v52; // xmm0_8
  double v53; // xmm0_8
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  __m128 v56; // xmm3
  unsigned __int64 v57; // xmm0_8
  __m128 v58; // xmm0
  __int64 v59; // r8
  __int64 result; // rax
  __int64 v61; // r9
  __m128 v62; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v63[4]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v64[4]; // [rsp+78h] [rbp-90h] BYREF
  __m128 v65[4]; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v66[4]; // [rsp+F8h] [rbp-10h] BYREF
  __m128 v67[4]; // [rsp+138h] [rbp+30h] BYREF
  __m128 v68[4]; // [rsp+178h] [rbp+70h] BYREF
  __m128 v69[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  _OWORD v70[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  _OWORD v71[4]; // [rsp+238h] [rbp+130h] BYREF
  _OWORD v72[4]; // [rsp+278h] [rbp+170h] BYREF
  _QWORD v73[3]; // [rsp+2B8h] [rbp+1B0h]
  _QWORD v74[3]; // [rsp+2D0h] [rbp+1C8h]

  v7 = *(__m128 *)&a4;
  v62.m128_u64[0] = a1 + 96;
  v8 = *(__m128 *)&a3;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v10 = *(_OWORD *)(a1 + 216);
  v11 = *(_OWORD *)(a1 + 232);
  v12 = *(_OWORD *)(a1 + 248);
  v70[0] = *(_OWORD *)(a1 + 200);
  v13 = *(_OWORD *)(a1 + 264);
  v70[1] = v10;
  v14 = *(_OWORD *)(a1 + 280);
  v70[2] = v11;
  v15 = *(_OWORD *)(a1 + 296);
  v70[3] = v12;
  v16 = *(_OWORD *)(a1 + 312);
  v71[0] = v13;
  v17 = *(__m128 *)(a1 + 136);
  v71[1] = v14;
  v18 = *(__m128 *)(a1 + 152);
  v71[2] = v15;
  v19 = *(__m128 *)(a1 + 168);
  v71[3] = v16;
  v20 = *(__m128 *)(a1 + 184);
  v64[0] = v17;
  v64[1] = v18;
  v64[2] = v19;
  v64[3] = v20;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&v62);
  v21 = a2 & 1;
  v73[0] = v70;
  v73[1] = v71;
  v73[2] = v72;
  v72[3] = *(const struct _D3DCOLORVALUE *)&CTextBrush::k_defaultFontColor.r;
  v72[1] = DirectX::g_XMIdentityR1;
  v74[0] = a6 + 64;
  v72[0] = DirectX::g_XMIdentityR0;
  v74[1] = a6 + 128;
  v72[2] = DirectX::g_XMIdentityR2;
  v22 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 0);
  v74[2] = a6;
  v23 = a5[2];
  v24 = a5[3];
  v25 = a5[1];
  v65[0] = *a5;
  v26 = v8;
  v26.m128_f32[0] = v8.m128_f32[0] * -0.5;
  v65[2] = v23;
  v27 = v7;
  v27.m128_f32[0] = v7.m128_f32[0] * -0.5;
  v65[3] = v24;
  v65[1] = v25;
  v28 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255);
  v29 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170);
  v30 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85);
  v62 = v22;
  v7.m128_f32[0] = v7.m128_f32[0] * 0.5;
  v31 = 0LL;
  v8.m128_f32[0] = v8.m128_f32[0] * 0.5;
  v32 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, (__m128)0LL), _mm_unpacklo_ps(v27, (__m128)(unsigned int)FLOAT_1_0));
  v33 = _mm_unpacklo_ps(_mm_unpacklo_ps(v8, (__m128)0LL), _mm_unpacklo_ps(v7, (__m128)(unsigned int)FLOAT_1_0));
  do
  {
    v34 = *(__m128 **)((char *)v73 + v31);
    v35 = v34[1];
    v36 = v34[2];
    v37 = v34[3];
    *(_QWORD *)&v38 = DirectX::XMMatrixInverse(
                        0LL,
                        *(double *)v35.m128_u64,
                        *(double *)v36.m128_u64,
                        *(double *)v37.m128_u64).m128_u64[0];
    *(_QWORD *)&v39 = DirectX::XMMatrixMultiply(v38, v64).m128_u64[0];
    v40 = DirectX::XMMatrixMultiply(v39, v65);
    v66[0] = (__m128)DirectX::g_XMIdentityR0;
    v66[1] = (__m128)DirectX::g_XMIdentityR1;
    v66[2] = (__m128)DirectX::g_XMIdentityR2;
    v41 = _mm_mul_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(v22, v40), _mm_mul_ps(v30, v35)),
              _mm_add_ps(_mm_mul_ps(v29, v36), _mm_mul_ps(v28, v37))),
            (__m128)_xmm);
    v42 = _mm_unpacklo_ps(
            _mm_unpacklo_ps(v41, (__m128)0LL),
            _mm_unpacklo_ps(_mm_shuffle_ps(v41, v41, 85), (__m128)(unsigned int)FLOAT_1_0));
    v43 = (__m128)LODWORD(FLOAT_N1_0);
    v66[3] = v42;
    v43.m128_f32[0] = (float)(-1.0 / _mm_shuffle_ps(v41, v41, 170).m128_f32[0]) * 4.0;
    v44 = _mm_unpacklo_ps((__m128)_xmm, _mm_unpacklo_ps((__m128)0LL, v43));
    v45 = DirectX::XMMatrixMultiply(*(double *)&_xmm, v66);
    v67[3] = (__m128)_xmm;
    v67[2] = v44;
    v67[1] = (__m128)_xmm;
    v67[0] = v45;
    *(_QWORD *)&v46 = DirectX::XMMatrixInverse(0LL, DirectX::g_XMIdentityR1, 0.0, *(double *)v42.m128_u64).m128_u64[0];
    v47 = DirectX::XMMatrixMultiply(v46, v67);
    v63[0] = (__m128)_xmm;
    v68[0] = v47;
    v68[1] = (__m128)DirectX::g_XMIdentityR1;
    v48 = DirectX::g_XMIdentityR0;
    v68[2] = (__m128)DirectX::g_XMIdentityR2;
    v49 = DirectX::g_XMIdentityR1;
    v68[3] = v42;
    v50 = DirectX::g_XMIdentityR2;
    v63[2] = (__m128)_xmm;
    v69[0] = (__m128)DirectX::g_XMIdentityR0;
    v69[1] = (__m128)DirectX::g_XMIdentityR1;
    v69[2] = (__m128)DirectX::g_XMIdentityR2;
    v69[3] = v33;
    v63[1] = (__m128)_xmm;
    v63[3] = *(__m128 *)&CTextBrush::k_defaultFontColor.r;
    v51 = v32;
    if ( v21 )
    {
      v52 = DirectX::XMMatrixMultiply(DirectX::g_XMIdentityR0, v63).m128_u64[0];
      v51 = v32;
      v50 = DirectX::g_XMIdentityR2;
      v49 = DirectX::g_XMIdentityR1;
      v48 = *(double *)&v52;
    }
    v53 = v48;
    v54 = v49;
    v55 = v50;
    v56 = v51;
    v57 = DirectX::XMMatrixMultiply(v53, v68).m128_u64[0];
    if ( v21 )
      v57 = DirectX::XMMatrixMultiply(*(double *)&v57, v63).m128_u64[0];
    v58 = DirectX::XMMatrixMultiply(*(double *)&v57, v69);
    result = *(_QWORD *)((char *)v74 + v59);
    v31 = v59 + 8;
    v22 = v62;
    *(__m128 *)result = v58;
    *(_OWORD *)(result + 16) = v54;
    *(_OWORD *)(result + 32) = v55;
    *(__m128 *)(result + 48) = v56;
  }
  while ( v61 != 1 );
  return result;
}
