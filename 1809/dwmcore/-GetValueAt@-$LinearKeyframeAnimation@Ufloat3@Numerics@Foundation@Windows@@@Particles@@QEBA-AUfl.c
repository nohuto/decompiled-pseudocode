/*
 * XREFs of ?GetValueAt@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801DDE3C
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD500 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEAAXA.c)
 * Callees:
 *     ?FindFirstFrameIndex@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@IEBAIM@Z @ 0x1801DDC78 (-FindFirstFrameIndex@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::GetValueAt(
        __int64 a1,
        __int64 a2,
        float a3)
{
  unsigned int FirstFrameIndex; // eax
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  __int64 v13; // rax
  __int64 v14; // xmm0_8

  if ( !*(_DWORD *)(a1 + 8) )
    a3 = 1.0 - a3;
  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::FindFirstFrameIndex(
                      a1,
                      a3);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = FirstFrameIndex + 1;
  if ( v7 >= (*(_QWORD *)(v4 + 24) - v6) >> 4 )
  {
    v13 = *(_QWORD *)(v4 + 24);
    v14 = *(_QWORD *)(v13 - 12);
    LODWORD(v13) = *(_DWORD *)(v13 - 4);
    *(_QWORD *)v5 = v14;
    *(_DWORD *)(v5 + 8) = v13;
  }
  else
  {
    v8 = 2LL * FirstFrameIndex;
    v9 = 2 * v7;
    v10 = fmaxf(
            fminf(
              (float)(a3 - *(float *)(v6 + 8 * v8)) / (float)(*(float *)(v6 + 8 * v9) - *(float *)(v6 + 8 * v8)),
              1.0),
            0.0);
    v11 = (float)((float)(*(float *)(v6 + 8 * v9 + 8) - *(float *)(v6 + 8 * v8 + 8)) * v10)
        + *(float *)(v6 + 8 * v8 + 8);
    *(float *)v5 = (float)((float)(*(float *)(v6 + 8 * v9 + 4) - *(float *)(v6 + 8 * v8 + 4)) * v10)
                 + *(float *)(v6 + 8 * v8 + 4);
    v12 = *(float *)(v6 + 8 * v9 + 12) - *(float *)(v6 + 8 * v8 + 12);
    *(float *)(v5 + 4) = v11;
    *(float *)(v5 + 8) = (float)(v12 * v10) + *(float *)(v6 + 8 * v8 + 12);
  }
  return v5;
}
