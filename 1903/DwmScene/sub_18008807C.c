/*
 * XREFs of sub_18008807C @ 0x18008807C
 * Callers:
 *     sub_180087FFC @ 0x180087FFC (sub_180087FFC.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_18008807C(__m128 *a1, __m128 *a2, double a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm6
  __m128 v8; // xmm4
  __m128 v9; // xmm7
  __m128 v10; // xmm3
  __m128 v11; // xmm4

  v3 = *(__m128 *)&a3;
  if ( !a1 )
    wassert(L"pSin != nullptr", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathVector.inl", 0x1152u);
  if ( !a2 )
    wassert(L"pCos != nullptr", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathVector.inl", 0x1153u);
  v4 = _mm_mul_ps((__m128)xmmword_180142E70, *(__m128 *)&a3);
  v5 = _mm_cmple_ps(_mm_and_ps(v4, (__m128)xmmword_180142EB0), (__m128)xmmword_180142F00);
  v6 = _mm_or_ps(_mm_and_ps(v4, (__m128)xmmword_180142DD0), (__m128)xmmword_180142F00);
  v7 = _mm_sub_ps(
         v3,
         _mm_mul_ps(
           _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v6, v4), v6), v5), _mm_andnot_ps(v5, v4)),
           (__m128)xmmword_180142E60));
  v8 = _mm_and_ps((__m128)xmmword_180142DD0, v7);
  v9 = _mm_cmple_ps(_mm_andnot_ps(v8, v7), (__m128)xmmword_180142E40);
  v10 = _mm_or_ps(_mm_andnot_ps(v9, _mm_sub_ps(_mm_or_ps((__m128)xmmword_180142E50, v8), v7)), _mm_and_ps(v9, v7));
  v11 = _mm_mul_ps(v10, v10);
  *a1 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_180142D50, (__m128)xmmword_180142D50, 0), v11),
                            _mm_shuffle_ps((__m128)xmmword_180142D40, (__m128)xmmword_180142D40, 255)),
                          v11),
                        _mm_shuffle_ps((__m128)xmmword_180142D40, (__m128)xmmword_180142D40, 170)),
                      v11),
                    _mm_shuffle_ps((__m128)xmmword_180142D40, (__m128)xmmword_180142D40, 85)),
                  v11),
                _mm_shuffle_ps((__m128)xmmword_180142D40, (__m128)xmmword_180142D40, 0)),
              v11),
            (__m128)xmmword_180142E10),
          v10);
  *a2 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_180142D70, (__m128)xmmword_180142D70, 0), v11),
                            _mm_shuffle_ps((__m128)xmmword_180142D60, (__m128)xmmword_180142D60, 255)),
                          v11),
                        _mm_shuffle_ps((__m128)xmmword_180142D60, (__m128)xmmword_180142D60, 170)),
                      v11),
                    _mm_shuffle_ps((__m128)xmmword_180142D60, (__m128)xmmword_180142D60, 85)),
                  v11),
                _mm_shuffle_ps((__m128)xmmword_180142D60, (__m128)xmmword_180142D60, 0)),
              v11),
            (__m128)xmmword_180142E10),
          _mm_or_ps(_mm_andnot_ps(v9, (__m128)xmmword_180142E30), _mm_and_ps((__m128)xmmword_180142E10, v9)));
}
