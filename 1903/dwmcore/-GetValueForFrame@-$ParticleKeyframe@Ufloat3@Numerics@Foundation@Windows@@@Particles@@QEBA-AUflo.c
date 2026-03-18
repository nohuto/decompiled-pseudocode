/*
 * XREFs of ?GetValueForFrame@?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9EA0
 * Callers:
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9C00 (-GetValueAt@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>::GetValueForFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r9d
  int v4; // r9d
  float *v5; // rax
  float v6; // xmm1_4
  float v7; // xmm0_4
  __int64 *v8; // rax
  __int64 v9; // xmm0_8
  int v10; // eax

  v3 = *(_DWORD *)(a1 + 16);
  if ( !v3 )
    goto LABEL_6;
  v4 = v3 - 1;
  if ( !v4 )
  {
    v8 = *(__int64 **)(a3 + 8);
    v9 = *v8;
    v10 = *((_DWORD *)v8 + 2);
LABEL_7:
    *(_QWORD *)a2 = v9;
    *(_DWORD *)(a2 + 8) = v10;
    return a2;
  }
  if ( v4 != 1 )
  {
LABEL_6:
    v9 = *(_QWORD *)(a1 + 4);
    v10 = *(_DWORD *)(a1 + 12);
    goto LABEL_7;
  }
  v5 = *(float **)(a3 + 8);
  v6 = *(float *)(a1 + 8) + v5[1];
  *(float *)a2 = *(float *)(a1 + 4) + *v5;
  v7 = *(float *)(a1 + 12) + v5[2];
  *(float *)(a2 + 4) = v6;
  *(float *)(a2 + 8) = v7;
  return a2;
}
