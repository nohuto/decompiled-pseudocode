/*
 * XREFs of ?FindFirstFrameIndex@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@IEBAIM@Z @ 0x1801E9954
 * Callers:
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9B1C (-GetValueAt@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::FindFirstFrameIndex(
        __int64 a1,
        float a2)
{
  __int64 v2; // r8
  unsigned int v3; // edx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 1;
  v4 = (*(_QWORD *)(a1 + 16) - v2) >> 4;
  if ( v4 <= 1 )
    return (unsigned int)(v4 - 1);
  v5 = 1LL;
  while ( (float)(*(float *)(v2 + 16 * v5) + 0.00000011920929) < a2 )
  {
    v5 = ++v3;
    if ( v3 >= v4 )
      return (unsigned int)(v4 - 1);
  }
  return v3 - 1;
}
