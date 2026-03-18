/*
 * XREFs of ?GetValueAt@?$LinearKeyframeAnimation@M@Particles@@QEBAMMAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9A64
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@M@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E9380 (-AnimateSingle@-$LinearKeyframeAnimation@M@Particles@@UEBAXAEAV-$span@M$0-0@gsl@@00@Z.c)
 * Callees:
 *     ?FindFirstFrameIndex@?$LinearKeyframeAnimation@M@Particles@@IEBAIM@Z @ 0x1801E98F4 (-FindFirstFrameIndex@-$LinearKeyframeAnimation@M@Particles@@IEBAIM@Z.c)
 *     ?GetValueForFrame@?$ParticleKeyframe@M@Particles@@QEBAMAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9E14 (-GetValueForFrame@-$ParticleKeyframe@M@Particles@@QEBAMAEBV-$span@M$0-0@gsl@@@Z.c)
 */

float __fastcall Particles::LinearKeyframeAnimation<float>::GetValueAt(__int64 a1, float a2, __int64 a3)
{
  unsigned int FirstFrameIndex; // eax
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rbx
  double ValueForFrame; // xmm0_8
  float v9; // xmm2_4
  __int64 v10; // r11
  __int64 v11; // rdx
  double v12; // xmm0_8
  float *v13; // r9
  float *v14; // rcx

  FirstFrameIndex = Particles::LinearKeyframeAnimation<float>::FindFirstFrameIndex(a1, a2);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = FirstFrameIndex + 1;
  if ( v7 >= (*(_QWORD *)(v5 + 16) - v6) / 12 )
    return *(float *)(*(_QWORD *)(v5 + 16) - 8LL);
  ValueForFrame = Particles::ParticleKeyframe<float>::GetValueForFrame(v6 + 12LL * FirstFrameIndex, a3);
  v9 = *(float *)&ValueForFrame;
  v12 = Particles::ParticleKeyframe<float>::GetValueForFrame(v10 + 12 * v7, v11);
  return (float)((float)(*(float *)&v12 - v9) * fmaxf(fminf((float)(a2 - *v13) / (float)(*v14 - *v13), 1.0), 0.0)) + v9;
}
