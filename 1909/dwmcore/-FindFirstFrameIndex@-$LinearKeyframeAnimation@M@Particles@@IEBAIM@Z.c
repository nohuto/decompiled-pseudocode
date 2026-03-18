/*
 * XREFs of ?FindFirstFrameIndex@?$LinearKeyframeAnimation@M@Particles@@IEBAIM@Z @ 0x1801E8184
 * Callers:
 *     ?GetValueAt@?$LinearKeyframeAnimation@M@Particles@@QEBAMMAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E82F4 (-GetValueAt@-$LinearKeyframeAnimation@M@Particles@@QEBAMMAEBV-$span@M$0-0@gsl@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<float>::FindFirstFrameIndex(__int64 a1, float a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 1;
  v4 = (*(_QWORD *)(a1 + 16) - v2) / 12;
  while ( v3 < v4 )
  {
    if ( (float)(*(float *)(v2 + 12LL * v3) + 0.00000011920929) >= a2 )
      return v3 - 1;
    ++v3;
  }
  return (unsigned int)(v4 - 1);
}
