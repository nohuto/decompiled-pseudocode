/*
 * XREFs of ?GetValueForFrame@?$ParticleKeyframe@M@Particles@@QEBAMAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9E14
 * Callers:
 *     ?GetValueAt@?$LinearKeyframeAnimation@M@Particles@@QEBAMMAEBV?$span@M$0?0@gsl@@@Z @ 0x1801E9A64 (-GetValueAt@-$LinearKeyframeAnimation@M@Particles@@QEBAMMAEBV-$span@M$0-0@gsl@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Particles::ParticleKeyframe<float>::GetValueForFrame(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return **(float **)(a2 + 8);
    if ( v3 == 1 )
      return **(float **)(a2 + 8) + *(float *)(a1 + 4);
  }
  return *(float *)(a1 + 4);
}
