/*
 * XREFs of ?GetValueAt@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E83AC
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E7C70 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 * Callees:
 *     ?FindFirstFrameIndex@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@IEBAIM@Z @ 0x1801E81E4 (-FindFirstFrameIndex@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@.c)
 *     ?GetValueForFrame@?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@AEBV?$span@M$0?0@gsl@@@Z @ 0x1801E86DC (-GetValueForFrame@-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA-AUflo.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::GetValueAt(
        __int64 a1,
        __int64 a2,
        float a3,
        __int64 a4)
{
  int FirstFrameIndex; // eax
  __int64 v7; // r10
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  float *ValueForFrame; // rbx
  __int64 v11; // r8
  __int64 v12; // r10
  float *v13; // rax
  float *v14; // r10
  float *v15; // r11
  float v16; // xmm2_4
  float v17; // xmm1_4
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp+8h] BYREF

  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::FindFirstFrameIndex(
                      a1,
                      a3);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = (unsigned int)(FirstFrameIndex + 1);
  if ( v9 >= (*(_QWORD *)(v7 + 16) - v8) >> 4 )
  {
    *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(v7 + 16) - 12LL);
  }
  else
  {
    ValueForFrame = (float *)Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>::GetValueForFrame(
                               v8 + 16 * v9,
                               &v20,
                               a4);
    v13 = (float *)Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>::GetValueForFrame(v12, v19, v11);
    v16 = fmaxf(fminf((float)(a3 - *v14) / (float)(*v15 - *v14), 1.0), 0.0);
    v17 = (float)((float)(ValueForFrame[1] - v13[1]) * v16) + v13[1];
    *(float *)a2 = (float)((float)(*ValueForFrame - *v13) * v16) + *v13;
    *(float *)(a2 + 4) = v17;
  }
  return a2;
}
