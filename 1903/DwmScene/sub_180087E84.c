/*
 * XREFs of sub_180087E84 @ 0x180087E84
 * Callers:
 *     sub_180083074 @ 0x180083074 (sub_180083074.c)
 *     sub_1800874E8 @ 0x1800874E8 (sub_1800874E8.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180087E84(double a1, double a2, double a3)
{
  __m128 v3; // xmm5
  __m128 v4; // xmm6
  __m128 v5; // xmm3
  __m128 v6; // xmm4
  __m128 v7; // xmm11
  __m128 v8; // xmm9
  __m128 v9; // xmm12
  __m128 v10; // xmm7
  __m128 v11; // xmm0
  __m128 v12; // xmm5
  __m128 v13; // xmm0
  __m128 v14; // xmm7
  __m128 v15; // xmm10
  __m128 v16; // xmm3
  __m128 v17; // xmm5
  __m128 v18; // xmm7
  __m128 v19; // xmm4
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm2
  __m128 v24; // xmm2

  v3 = _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0);
  v4 = *(__m128 *)&a1;
  v5 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 85);
  v6 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 170);
  v7 = _mm_cmple_ps(v6, (__m128)xmmword_180142E20);
  v8 = _mm_cmple_ps(_mm_add_ps(v5, v3), (__m128)xmmword_180142E20);
  v9 = _mm_cmple_ps(_mm_sub_ps(v5, v3), (__m128)xmmword_180142E20);
  v10 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_1801E36E0, v5), _mm_mul_ps((__m128)xmmword_1801E36D0, v3));
  v11 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a3, 64);
  v12 = _mm_add_ps(_mm_shuffle_ps(v4, *(__m128 *)&a2, 105), _mm_shuffle_ps(v11, v11, 120));
  v13 = _mm_shuffle_ps(*(__m128 *)&a2, v4, 106);
  v14 = _mm_add_ps(_mm_add_ps(v10, _mm_mul_ps((__m128)xmmword_1801E36F0, v6)), (__m128)xmmword_180142E10);
  v15 = _mm_mul_ps(
          _mm_sub_ps(_mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a2, 1), _mm_shuffle_ps(v13, v13, 120)),
          (__m128)xmmword_1801E36E0);
  v16 = _mm_shuffle_ps(v14, v12, 4);
  v17 = _mm_shuffle_ps(v12, v15, 73);
  v18 = _mm_shuffle_ps(v14, v15, 46);
  v19 = _mm_or_ps(
          _mm_andnot_ps(
            v7,
            _mm_or_ps(_mm_andnot_ps(v8, _mm_shuffle_ps(v17, v18, 110)), _mm_and_ps(_mm_shuffle_ps(v17, v18, 132), v8))),
          _mm_and_ps(
            _mm_or_ps(_mm_andnot_ps(v9, _mm_shuffle_ps(v16, v17, 214)), _mm_and_ps(_mm_shuffle_ps(v16, v17, 136), v9)),
            v7));
  v20 = _mm_mul_ps(v19, v19);
  v21 = _mm_shuffle_ps(v20, v20, 238);
  v22 = _mm_add_ps(v20, v21);
  v23 = _mm_shuffle_ps(v22, v22, 64);
  v24 = _mm_add_ps(v23, _mm_shuffle_ps(v21, v23, 240));
  return _mm_div_ps(v19, _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 170)));
}
