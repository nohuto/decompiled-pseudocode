/*
 * XREFs of ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C7458
 * Callers:
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1800232B0 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 * Callees:
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
 *     ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C75B4 (-IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

bool __fastcall IntersectFourLines(__int128 *a1, __int128 *a2, __int128 *a3, __int128 *a4, float a5, __int64 a6)
{
  __int64 v7; // xmm1_8
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  char v11; // al
  __int64 v12; // xmm1_8
  __int128 v13; // xmm0
  char v14; // si
  __int64 v15; // xmm1_8
  __int64 v16; // r8
  char v17; // dl
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  float v23; // eax
  __int128 v25; // [rsp+28h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-39h]
  float v27; // [rsp+48h] [rbp-29h] BYREF
  float v28; // [rsp+4Ch] [rbp-25h]
  float v29; // [rsp+50h] [rbp-21h]
  __int128 v30; // [rsp+58h] [rbp-19h] BYREF
  __int64 v31; // [rsp+68h] [rbp-9h]
  __int128 v32; // [rsp+78h] [rbp+7h] BYREF
  __int64 v33; // [rsp+88h] [rbp+17h]

  v7 = *((_QWORD *)a2 + 2);
  v25 = *a2;
  v9 = *a1;
  v26 = v7;
  v10 = *((_QWORD *)a1 + 2);
  v30 = v9;
  v31 = v10;
  v11 = IntersectTwoLines(&v30, &v25, a3, &v27);
  v12 = *((_QWORD *)a4 + 2);
  v30 = *a4;
  v13 = *a3;
  v31 = v12;
  v14 = v11;
  v15 = *((_QWORD *)a3 + 2);
  v32 = v13;
  v33 = v15;
  v17 = IntersectTwoLines(&v32, &v30, v16, &v25);
  v18 = v29;
  v19 = v27;
  v20 = v28;
  v21 = (__m128)LODWORD(v27);
  v22 = (__m128)LODWORD(v28);
  v21.m128_f32[0] = (float)(v27 + *(float *)&v25) * 0.5;
  v22.m128_f32[0] = (float)(v28 + *((float *)&v25 + 1)) * 0.5;
  v29 = (float)(v29 + *((float *)&v25 + 2)) * 0.5;
  v23 = v29;
  *(_QWORD *)a6 = _mm_unpacklo_ps(v21, v22).m128_u64[0];
  *(float *)(a6 + 8) = v23;
  return v14
      && v17
      && a5 > sqrtf_0(
                (float)((float)((float)(v20 - *((float *)&v25 + 1)) * (float)(v20 - *((float *)&v25 + 1)))
                      + (float)((float)(v19 - *(float *)&v25) * (float)(v19 - *(float *)&v25)))
              + (float)((float)(v18 - *((float *)&v25 + 2)) * (float)(v18 - *((float *)&v25 + 2))));
}
