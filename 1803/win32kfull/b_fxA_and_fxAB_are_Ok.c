/*
 * XREFs of b_fxA_and_fxAB_are_Ok @ 0x1C021EED8
 * Callers:
 *     vFillGLYPHDATA @ 0x1C0221048 (vFillGLYPHDATA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall b_fxA_and_fxAB_are_Ok(__int64 a1, __int64 a2, int *a3, int a4, int a5)
{
  float v5; // xmm4_4
  float v7; // xmm3_4
  int v8; // eax
  int v11; // ecx
  unsigned int v12; // ebp
  float v13; // xmm0_4
  float v14; // xmm1_4
  __m128i v15; // xmm2
  int v16; // edx
  int v17; // r11d
  int v18; // esi
  int v19; // edi
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int *v25; // r9
  int v26; // eax
  int v27; // edx
  __int64 v28; // r10
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // r8d
  int v35; // edx
  int v36; // esi
  int v37; // edi
  int v38; // ecx
  int v40; // [rsp+8h] [rbp-40h]
  _DWORD v41[5]; // [rsp+Ch] [rbp-3Ch] BYREF

  v5 = *(float *)(a1 + 216);
  v7 = *(float *)(a1 + 220);
  v8 = *(_DWORD *)(a1 + 288);
  v11 = *(_DWORD *)(a1 + 292);
  v12 = 1;
  v13 = v5 * (float)*(int *)(a2 + 16);
  v14 = v7 * (float)*(int *)(a2 + 16);
  v15 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 20));
  v16 = *(_DWORD *)(a1 + 296);
  v17 = (int)v13;
  v18 = (int)v13 + v8;
  v19 = (int)v14 + v11;
  v20 = _mm_cvtepi32_ps(v15).m128_f32[0];
  *(float *)v15.m128i_i32 = v20 * v7;
  v21 = v20 * v5;
  v40 = (int)v21 + v8;
  v22 = (int)*(float *)v15.m128i_i32 + v11;
  v23 = *(_DWORD *)(a1 + 300);
  v41[0] = v22;
  v41[1] = (int)v21 + v16;
  v24 = v18;
  v41[2] = (int)*(float *)v15.m128i_i32 + v23;
  v25 = v41;
  v26 = v17 + v16;
  v27 = v19;
  v41[3] = v26;
  v41[4] = (int)v14 + v23;
  v28 = 3LL;
  do
  {
    v29 = *(v25 - 1);
    v30 = v29;
    if ( v29 >= v18 )
      v30 = v18;
    v18 = v30;
    if ( v29 <= v24 )
      v29 = v24;
    v24 = v29;
    v31 = *v25;
    v25 += 2;
    v32 = v31;
    if ( v31 >= v19 )
      v32 = v19;
    v19 = v32;
    if ( v31 <= v27 )
      v31 = v27;
    v27 = v31;
    --v28;
  }
  while ( v28 );
  v33 = *a3;
  v34 = ((v24 + 15) >> 4) + 1;
  v35 = ((v31 + 15) >> 4) + 1;
  v36 = (v18 >> 4) - 1;
  v37 = (v19 >> 4) - 1;
  if ( v36 > *a3 )
  {
    *a3 = v36;
    v33 = v36;
  }
  v38 = a3[1];
  if ( v37 > v38 )
  {
    a3[1] = v37;
    v38 = v37;
  }
  if ( v34 < a4 + v33 || v35 < a5 + v38 )
    return 0;
  return v12;
}
