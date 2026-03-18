/*
 * XREFs of ?GetValueForFrame@?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@AEBV?$span@M$0?0@gsl@@@Z @ 0x1801E86DC
 * Callers:
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E83AC (-GetValueAt@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>::GetValueForFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r9d
  int v4; // r9d
  float *v5; // rax
  float v6; // xmm1_4
  __int64 v7; // xmm0_8

  v3 = *(_DWORD *)(a1 + 12);
  if ( !v3 )
    goto LABEL_6;
  v4 = v3 - 1;
  if ( !v4 )
  {
    v7 = **(_QWORD **)(a3 + 8);
LABEL_7:
    *(_QWORD *)a2 = v7;
    return a2;
  }
  if ( v4 != 1 )
  {
LABEL_6:
    v7 = *(_QWORD *)(a1 + 4);
    goto LABEL_7;
  }
  v5 = *(float **)(a3 + 8);
  v6 = *(float *)(a1 + 8) + v5[1];
  *(float *)a2 = *(float *)(a1 + 4) + *v5;
  *(float *)(a2 + 4) = v6;
  return a2;
}
