/*
 * XREFs of ?GetValueAt@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat4@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9D24
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E94A0 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 * Callees:
 *     ?FindFirstFrameIndex@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@IEBAIM@Z @ 0x1801E9A04 (-FindFirstFrameIndex@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@.c)
 *     ?GetValueForFrame@?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9F0C (-GetValueForFrame@-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA-AUflo.c)
 */

// local variable allocation has failed, the output may be wrong!
_OWORD *__fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::GetValueAt(
        __int64 a1,
        _OWORD *a2,
        double a3,
        __int64 a4)
{
  __m128 v4; // xmm3
  unsigned int FirstFrameIndex; // eax
  __int64 v8; // r10
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  float *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r11
  __m128 *ValueForFrame; // rax
  __m128 *v15; // r10
  _BYTE v17[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(__m128 *)&a3;
  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::FindFirstFrameIndex(
                      a1,
                      *(float *)&a3);
  v9 = *(_QWORD *)(v8 + 8);
  v10 = FirstFrameIndex + 1;
  if ( v10 >= (*(_QWORD *)(v8 + 16) - v9) / 24 )
  {
    *a2 = *(_OWORD *)(*(_QWORD *)(v8 + 16) - 20LL);
  }
  else
  {
    v11 = (float *)(v9 + 24 * v10);
    v4.m128_f32[0] = fminf(
                       (float)(*(float *)&a3 - *(float *)(v9 + 24LL * FirstFrameIndex))
                     / (float)(*v11 - *(float *)(v9 + 24LL * FirstFrameIndex)),
                       1.0);
    Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>::GetValueForFrame(v11, v17, a4);
    ValueForFrame = (__m128 *)Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>::GetValueForFrame(
                                v13,
                                v18,
                                v12);
    v4.m128_f32[0] = fmaxf(v4.m128_f32[0], 0.0);
    *a2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), _mm_sub_ps(*v15, *ValueForFrame)), *ValueForFrame);
  }
  return a2;
}
