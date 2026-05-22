/*
 * XREFs of ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180035578
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800351D4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     powf @ 0x18012BF24 (powf.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ControllerProcessor::CalculateNavigationDelta(ControllerProcessor *this, double a2, double a3)
{
  __m128 v4; // xmm6
  __m128 v5; // xmm1
  __m128 v6; // xmm6
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  __m128 v9; // xmm6
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  __m128 v13; // xmm0
  signed __int64 v14; // rax
  __m128 v15; // xmm0
  __int64 result; // rax
  __m128 v17; // xmm0
  float v18; // xmm1_4

  v4 = _mm_unpacklo_ps(_mm_unpacklo_ps(*(__m128 *)&a2, (__m128)0LL), _mm_unpacklo_ps(*(__m128 *)&a3, (__m128)0LL));
  v5 = _mm_mul_ps(v4, v4);
  v6 = _mm_shuffle_ps(v4, v4, 198);
  v5.m128_f32[0] = v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v7 = _mm_sqrt_ps(_mm_shuffle_ps(v5, v5, 0));
  v8 = _mm_shuffle_ps(v7, v7, 170);
  v6.m128_f32[0] = v8.m128_f32[0];
  v9 = _mm_shuffle_ps(v6, v6, 198);
  if ( v8.m128_f32[0] > 1.0 )
  {
    v10 = _mm_shuffle_ps(v8, v8, 0);
    v8.m128_f32[0] = FLOAT_1_0;
    v9 = _mm_div_ps(v9, v10);
  }
  v11 = 0LL;
  *(double *)v11.m128_u64 = v8.m128_f32[0];
  v12 = _mm_cvtpd_ps((__m128d)_mm_and_ps(v11, (__m128)_xmm));
  if ( v12.m128_f32[0] > 0.00000011920929 )
  {
    v13 = v12;
    v13.m128_f32[0] = powf(v12.m128_f32[0], 1.8);
    v9 = _mm_mul_ps(v9, _mm_shuffle_ps(v13, v13, 0));
    v14 = GetTickCount64() - *((_QWORD *)this + 225);
    v15 = 0LL;
    v15.m128_f32[0] = (float)(int)v14;
    if ( v14 < 0 )
      v15.m128_f32[0] = v15.m128_f32[0] + 1.8446744e19;
    if ( v15.m128_f32[0] < 1750.0 )
    {
      v15.m128_f32[0] = (float)(powf(v15.m128_f32[0] / 1750.0, 0.60000002) * 0.89999998) + 0.1;
      v9 = _mm_mul_ps(v9, _mm_shuffle_ps(v15, v15, 0));
    }
  }
  else
  {
    *((_QWORD *)this + 225) = GetTickCount();
  }
  result = 0LL;
  v17 = _mm_mul_ps(
          _mm_mul_ps((__m128)_xmm, v9),
          _mm_shuffle_ps((__m128)*((unsigned int *)this + 1741), (__m128)*((unsigned int *)this + 1741), 0));
  v18 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0] + *((float *)this + 448);
  v17.m128_f32[0] = v17.m128_f32[0] + *((float *)this + 447);
  *((float *)this + 448) = v18;
  *((_DWORD *)this + 447) = v17.m128_i32[0];
  return result;
}
