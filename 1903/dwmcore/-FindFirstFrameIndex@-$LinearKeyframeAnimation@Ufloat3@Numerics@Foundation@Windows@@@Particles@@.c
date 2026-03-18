/*
 * XREFs of ?FindFirstFrameIndex@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@IEBAIM@Z @ 0x1801E99A4
 * Callers:
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat3@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9C00 (-GetValueAt@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::FindFirstFrameIndex(
        __int64 a1,
        float a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 1;
  v4 = (*(_QWORD *)(a1 + 16) - v2) / 20;
  while ( v3 < v4 )
  {
    if ( (float)(*(float *)(v2 + 20LL * v3) + 0.00000011920929) >= a2 )
      return v3 - 1;
    ++v3;
  }
  return (unsigned int)(v4 - 1);
}
