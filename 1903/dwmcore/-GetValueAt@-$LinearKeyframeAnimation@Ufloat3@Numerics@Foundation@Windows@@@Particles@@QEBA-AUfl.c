/*
 * XREFs of ?GetValueAt@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9C00
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E9440 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 * Callees:
 *     ?FindFirstFrameIndex@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@IEBAIM@Z @ 0x1801E99A4 (-FindFirstFrameIndex@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@.c)
 *     ?GetValueForFrame@?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9EA0 (-GetValueForFrame@-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA-AUflo.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::GetValueAt(
        __int64 a1,
        __int64 a2,
        float a3,
        __int64 a4)
{
  int FirstFrameIndex; // eax
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rbx
  float *ValueForFrame; // rbx
  __int64 v11; // r8
  __int64 v12; // r10
  float *v13; // rax
  float *v14; // r10
  float *v15; // r11
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  __int64 v19; // rax
  __int64 v20; // xmm0_8
  _BYTE v22[12]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v23[28]; // [rsp+2Ch] [rbp-1Ch] BYREF

  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::FindFirstFrameIndex(
                      a1,
                      a3);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = (unsigned int)(FirstFrameIndex + 1);
  if ( v9 >= (*(_QWORD *)(v7 + 16) - v8) / 20 )
  {
    v19 = *(_QWORD *)(v7 + 16);
    v20 = *(_QWORD *)(v19 - 16);
    LODWORD(v19) = *(_DWORD *)(v19 - 8);
    *(_QWORD *)a2 = v20;
    *(_DWORD *)(a2 + 8) = v19;
  }
  else
  {
    ValueForFrame = (float *)Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>::GetValueForFrame(
                               v8 + 20 * v9,
                               v22,
                               a4);
    v13 = (float *)Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>::GetValueForFrame(v12, v23, v11);
    v16 = fmaxf(fminf((float)(a3 - *v14) / (float)(*v15 - *v14), 1.0), 0.0);
    v17 = (float)((float)(ValueForFrame[1] - v13[1]) * v16) + v13[1];
    *(float *)a2 = (float)((float)(*ValueForFrame - *v13) * v16) + *v13;
    v18 = ValueForFrame[2] - v13[2];
    *(float *)(a2 + 4) = v17;
    *(float *)(a2 + 8) = (float)(v18 * v16) + v13[2];
  }
  return a2;
}
