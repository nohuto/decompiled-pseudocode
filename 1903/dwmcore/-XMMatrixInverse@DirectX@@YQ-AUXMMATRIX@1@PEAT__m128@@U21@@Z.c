/*
 * XREFs of ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1801BF718
 * Callers:
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801BF130 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MMAEBUStereoscopicSlateData@@PEAUStereoscopicViewData@@@Z @ 0x1802434FC (-CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MM.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixInverse(__m128 *a1, double a2, double a3, double a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm13
  __m128 v6; // xmm14
  __m128 v7; // xmm1
  __m128 v8; // xmm12
  __m128 v9; // xmm14
  __m128 v10; // xmm2
  __m128 v11; // xmm11
  __m128 v12; // xmm13
  __m128 v13; // xmm9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __m128 v16; // xmm0
  __m128 v17; // xmm12
  __m128 v18; // xmm1
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __m128 v21; // xmm14
  __m128 v22; // xmm0
  __m128 v23; // xmm0

  v5 = _mm_shuffle_ps(v4, *(__m128 *)&a2, 238);
  v6 = _mm_shuffle_ps(v4, *(__m128 *)&a2, 68);
  v7 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a4, 68);
  v8 = _mm_shuffle_ps(v6, v7, 221);
  v9 = _mm_shuffle_ps(v6, v7, 136);
  v10 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a4, 238);
  v11 = _mm_shuffle_ps(v5, v10, 136);
  v12 = _mm_shuffle_ps(v5, v10, 221);
  v13 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v12, v12, 238), _mm_shuffle_ps(v11, v11, 80)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 238), _mm_shuffle_ps(v12, v12, 80)));
  v14 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v12, v8, 221), _mm_shuffle_ps(v11, v9, 136)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v9, 221), _mm_shuffle_ps(v12, v8, 136)));
  v15 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(v13, v14, 93), v13, 50), _mm_shuffle_ps(v8, v8, 73)),
          _mm_mul_ps(_mm_shuffle_ps(v8, v8, 158), _mm_shuffle_ps(v13, _mm_shuffle_ps(v13, v14, 4), 147)));
  v16 = _mm_shuffle_ps(v13, v14, 74);
  v17 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 51), _mm_shuffle_ps(v16, v16, 44));
  v18 = _mm_shuffle_ps(_mm_add_ps(v15, v17), _mm_sub_ps(v15, v17), 216);
  v19 = _mm_shuffle_ps(v18, v18, 216);
  v20 = _mm_mul_ps(v9, v19);
  v21 = _mm_add_ps(_mm_shuffle_ps(v9, v20, 64), v20);
  v22 = _mm_add_ps(_mm_shuffle_ps(v20, v21, 48), v21);
  v23 = _mm_shuffle_ps(v22, v22, 170);
  if ( a1 )
    *a1 = v23;
  return _mm_mul_ps(_mm_div_ps(DirectX::g_XMOne, v23), v19);
}
