/*
 * XREFs of ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CE04
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x18012D9F8 (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     powf @ 0x18002C1B4 (powf.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     acosf_0 @ 0x180037807 (acosf_0.c)
 *     sqrtf_0 @ 0x18003785B (sqrtf_0.c)
 *     ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x18012D888 (-Slerp@MPCMath@@YA-AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x18012DB14 (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x18014091C (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     ?GetStabilizedRay@RayStabilizationResult@@QEBA?AUTargetingRay@@XZ @ 0x180140964 (-GetStabilizedRay@RayStabilizationResult@@QEBA-AUTargetingRay@@XZ.c)
 */

void __fastcall RayStabilizer::PerformDynamicExponential(RayStabilizer *this, struct RayStabilizationResult *a2)
{
  _QWORD *v4; // rax
  __int128 *v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  bool v14; // zf
  __int128 v15; // xmm6
  __int64 v16; // xmm7_8
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm6_4
  float v21; // xmm11_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm10_4
  float v26; // xmm11_4
  float v27; // xmm9_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float *v31; // rcx
  int v32; // eax
  double v33; // xmm1_8
  unsigned __int64 *v34; // rax
  __m128 v35; // xmm3
  __m128 v36; // xmm2
  __m128 v37; // xmm1
  __m128 v38; // xmm3
  __int128 v39; // xmm1
  __int64 v40; // rcx
  __m256i v41; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v42[12]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h]
  _QWORD v45[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h]
  int v47; // [rsp+98h] [rbp-70h]
  __int128 v48; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-50h]
  _OWORD v50[6]; // [rsp+C8h] [rbp-40h] BYREF
  int v51; // [rsp+128h] [rbp+20h]

  RayStabilizationResult::GetAtStep(a2, &v48, *(unsigned int *)a2 - 1LL);
  if ( !*((_BYTE *)this + 80) && *((_QWORD *)this + 4) )
  {
    v4 = *(_QWORD **)this;
    if ( *(_QWORD *)this )
      v4 = (_QWORD *)*v4;
    v5 = *(__int128 **)(v4[1] + 8 * (*((_QWORD *)this + 3) & (v4[2] - 1LL)));
    v6 = *v5;
    v7 = v5[1];
    v51 = *((_DWORD *)v5 + 24);
    v50[0] = v6;
    v8 = v5[2];
    v50[1] = v7;
    v9 = v5[3];
    v50[2] = v8;
    v10 = v5[4];
    v50[3] = v9;
    v11 = v5[5];
    v50[4] = v10;
    v50[5] = v11;
    RayStabilizationResult::GetStabilizedRay(v50, &v43);
    *(_OWORD *)&v45[1] = v43;
    v46 = v44;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v45[1], &v41) )
    {
      v12 = *(_OWORD *)v41.m256i_i8;
      *((_BYTE *)this + 80) = 1;
      v13 = *(_OWORD *)&v41.m256i_u64[2];
      *((_OWORD *)this + 3) = v12;
      *((_OWORD *)this + 4) = v13;
    }
  }
  v14 = *((_BYTE *)this + 80) == 0;
  v15 = v48;
  v16 = v49;
  v44 = v49;
  v43 = v48;
  if ( !v14 )
  {
    *(_OWORD *)&v45[1] = v48;
    v46 = v49;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v45[1], &v41) )
    {
      v17 = *(float *)&v41.m256i_i32[1];
      v18 = *((float *)this + 12);
      v19 = *((float *)this + 13);
      v20 = *(float *)&v41.m256i_i32[2];
      v21 = *((float *)this + 14);
      v22 = sqrtf_0(
              (float)((float)((float)(*(float *)&v41.m256i_i32[1] - v19) * (float)(*(float *)&v41.m256i_i32[1] - v19))
                    + (float)((float)(*(float *)v41.m256i_i32 - v18) * (float)(*(float *)v41.m256i_i32 - v18)))
            + (float)((float)(*(float *)&v41.m256i_i32[2] - v21) * (float)(*(float *)&v41.m256i_i32[2] - v21)));
      v23 = powf(0.5, v22 / 0.02);
      v24 = *(float *)&v41.m256i_i32[5] * *((float *)this + 17);
      v47 = 1065353216;
      v25 = (float)((float)(v19 - v17) * v23) + v17;
      v26 = (float)((float)(v21 - v20) * v23) + v20;
      v27 = (float)((float)(v18 - *(float *)v41.m256i_i32) * v23) + *(float *)v41.m256i_i32;
      v28 = (float)(*(float *)&v41.m256i_i32[4] * *((float *)this + 16))
          + (float)(*(float *)&v41.m256i_i32[3] * *((float *)this + 15));
      *(float *)&v41.m256i_i32[2] = v26;
      v29 = FLOAT_1_0;
      v41.m256i_i64[0] = __PAIR64__(LODWORD(v25), LODWORD(v27));
      v30 = v28 + v24;
      v45[0] = LODWORD(v30) | 0xBF80000000000000uLL;
      if ( v30 <= 1.0 )
      {
        v31 = (float *)v45;
        if ( v30 < -1.0 )
          v31 = (float *)v45 + 1;
        v29 = *v31;
      }
      v32 = *((_DWORD *)this + 17);
      *(_QWORD *)v42 = *(_QWORD *)((char *)this + 60);
      *(_DWORD *)&v42[8] = v32;
      *(_QWORD *)&v48 = *(__int64 *)((char *)&v41.m256i_i64[1] + 4);
      DWORD2(v48) = v41.m256i_i32[5];
      v33 = acosf_0(v29);
      powf(0.5, (float)((float)COERCE_DOUBLE(*(_QWORD *)&v33 & _xmm) * 0.1) / 0.02);
      v34 = (unsigned __int64 *)MPCMath::Slerp(&v45[1], &v48, v42);
      *(_QWORD *)&v43 = __PAIR64__(LODWORD(v25), LODWORD(v27));
      *((float *)&v43 + 2) = v26;
      v35 = _mm_movelh_ps((__m128)*v34, (__m128)*((unsigned int *)v34 + 2));
      v36 = _mm_mul_ps(v35, v35);
      v37 = _mm_shuffle_ps(v36, v36, 102);
      v36.m128_f32[0] = (float)(v36.m128_f32[0] + v37.m128_f32[0]) + _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
      v38 = _mm_div_ps(v35, _mm_sqrt_ps(_mm_shuffle_ps(v36, v36, 0)));
      *(_DWORD *)v42 = v38.m128_i32[0];
      *(_DWORD *)&v42[4] = _mm_shuffle_ps(v38, v38, 85).m128_u32[0];
      *(_DWORD *)&v42[8] = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
      v44 = *(_QWORD *)&v42[4];
      v16 = *(_QWORD *)&v42[4];
      v41.m256i_i32[3] = v38.m128_i32[0];
      v41.m256i_i64[2] = *(_QWORD *)&v42[4];
      v39 = *(_OWORD *)&v41.m256i_u64[2];
      *((_OWORD *)this + 3) = *(_OWORD *)v41.m256i_i8;
      HIDWORD(v43) = v38.m128_i32[0];
      v15 = v43;
      *((_OWORD *)this + 4) = v39;
    }
  }
  v40 = 3LL * *(unsigned int *)a2;
  *(_OWORD *)((char *)a2 + 8 * v40 + 4) = v15;
  *(_QWORD *)((char *)a2 + 8 * v40 + 20) = v16;
  ++*(_DWORD *)a2;
}
