/*
 * XREFs of ?GetValueForFrame@?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9F0C
 * Callers:
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat4@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9D24 (-GetValueAt@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>::GetValueForFrame(
        __int64 a1,
        _OWORD *a2,
        __int64 a3)
{
  int v3; // r9d
  int v4; // r9d
  __int128 v5; // xmm0

  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    goto LABEL_6;
  v4 = v3 - 1;
  if ( !v4 )
  {
    v5 = *(_OWORD *)*(_QWORD *)(a3 + 8);
LABEL_7:
    *a2 = v5;
    return a2;
  }
  if ( v4 != 1 )
  {
LABEL_6:
    v5 = *(_OWORD *)(a1 + 4);
    goto LABEL_7;
  }
  *a2 = _mm_add_ps(*(__m128 *)*(_QWORD *)(a3 + 8), *(__m128 *)(a1 + 4));
  return a2;
}
