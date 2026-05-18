/*
 * XREFs of sub_180104470 @ 0x180104470
 * Callers:
 *     sub_1801062D0 @ 0x1801062D0 (sub_1801062D0.c)
 * Callees:
 *     sub_18001BF20 @ 0x18001BF20 (sub_18001BF20.c)
 *     sub_18006DA90 @ 0x18006DA90 (sub_18006DA90.c)
 *     sub_1800B73B0 @ 0x1800B73B0 (sub_1800B73B0.c)
 *     sub_180105F94 @ 0x180105F94 (sub_180105F94.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     floorf @ 0x18012731A (floorf.c)
 */

__m128 *__fastcall sub_180104470(__int64 a1, __m128 *a2, __m128 *a3)
{
  int v3; // edi
  __m128 *v6; // rsi
  __int32 v7; // xmm1_4
  __int64 v8; // r12
  __int64 v9; // rbx
  float v10; // xmm6_4
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // esi
  __int64 v15; // r15
  __int64 v16; // r13
  int v17; // edx
  __int64 v18; // r12
  float v19; // xmm1_4
  __m128 v20; // xmm6
  float v21; // xmm0_4
  __m128 X; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+30h] [rbp-50h]
  __m128 v25; // [rsp+38h] [rbp-48h] BYREF
  float v26; // [rsp+48h] [rbp-38h]
  float v27[3]; // [rsp+4Ch] [rbp-34h]
  __int64 v28; // [rsp+58h] [rbp-28h]
  int v29; // [rsp+60h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 136);
  v24 = a1;
  sub_18006DA90(a3);
  sub_1800B73B0(a3, COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)v3)));
  v6 = &v25;
  v7 = a3->m128_i32[1];
  X.m128_i32[0] = a3->m128_i32[0];
  X.m128_i32[2] = a3->m128_i32[2];
  v26 = 0.0;
  X.m128_i32[1] = v7;
  v8 = 3LL;
  v28 = 0LL;
  v29 = 0;
  *(_QWORD *)v27 = 0LL;
  v25.m128_u64[0] = 0x100000000LL;
  v25.m128_i32[2] = 2;
  do
  {
    v9 = v6->m128_i32[0];
    v10 = X.m128_f32[v9];
    v11 = (int)floorf(v10);
    v12 = v11;
    if ( v11 > v3 - 2 )
      v12 = v3 - 2;
    if ( v11 < 0 )
      v12 = 0;
    v6 = (__m128 *)((char *)v6 + 4);
    *((_DWORD *)&v28 + v9) = v12;
    v27[v9 - 1] = v10 - (float)v12;
    --v8;
  }
  while ( v8 );
  v13 = v29;
  v14 = 0;
  v15 = 0LL;
  v16 = v24;
  v17 = v3 * HIDWORD(v28);
  *a2 = (__m128)xmmword_18025F030;
  v18 = (int)v28 + v3 * v3 * v13 + v17;
  do
  {
    if ( (v14 & 1) != 0 )
      v19 = v26;
    else
      v19 = 1.0 - v26;
    if ( (v14 & 2) != 0 )
    {
      v20 = (__m128)LODWORD(v27[0]);
    }
    else
    {
      v20 = (__m128)0x3F800000u;
      v20.m128_f32[0] = 1.0 - v27[0];
    }
    if ( (v14 & 4) != 0 )
      v21 = v27[1];
    else
      v21 = 1.0 - v27[1];
    v20.m128_f32[0] = (float)(v20.m128_f32[0] * v19) * v21;
    sub_180105F94(v16, &v25, ((v14 & 4) != 0 ? v3 * v3 : 0) + v18 + ((v14 & 2) != 0 ? v3 : 0) + (v15 & 1));
    X = _mm_mul_ps(v25, _mm_shuffle_ps(v20, v20, 0));
    sub_18001BF20(a2, &X);
    ++v14;
    ++v15;
  }
  while ( v14 < 8 );
  return a2;
}
