/*
 * XREFs of ?GetValueAt@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@M@Z @ 0x1801DDD58
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD4B0 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEAAXA.c)
 * Callees:
 *     ?FindFirstFrameIndex@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@IEBAIM@Z @ 0x1801DDC18 (-FindFirstFrameIndex@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::GetValueAt(
        __int64 a1,
        __int64 a2,
        float a3)
{
  unsigned int FirstFrameIndex; // eax
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  float v8; // xmm2_4
  float v9; // xmm1_4

  if ( !*(_DWORD *)(a1 + 8) )
    a3 = 1.0 - a3;
  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::FindFirstFrameIndex(
                      a1,
                      a3);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = FirstFrameIndex + 1;
  if ( v7 >= (*(_QWORD *)(v4 + 24) - v6) / 12 )
  {
    *(_QWORD *)v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) - 8LL);
  }
  else
  {
    v8 = fmaxf(
           fminf(
             (float)(a3 - *(float *)(v6 + 12LL * FirstFrameIndex))
           / (float)(*(float *)(v6 + 12 * v7) - *(float *)(v6 + 12LL * FirstFrameIndex)),
             1.0),
           0.0);
    v9 = (float)((float)(*(float *)(v6 + 12 * v7 + 8) - *(float *)(v6 + 12LL * FirstFrameIndex + 8)) * v8)
       + *(float *)(v6 + 12LL * FirstFrameIndex + 8);
    *(float *)v5 = (float)((float)(*(float *)(v6 + 12 * v7 + 4) - *(float *)(v6 + 12LL * FirstFrameIndex + 4)) * v8)
                 + *(float *)(v6 + 12LL * FirstFrameIndex + 4);
    *(float *)(v5 + 4) = v9;
  }
  return v5;
}
