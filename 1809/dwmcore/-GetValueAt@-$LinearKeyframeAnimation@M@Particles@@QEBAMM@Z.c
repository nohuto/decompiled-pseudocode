/*
 * XREFs of ?GetValueAt@?$LinearKeyframeAnimation@M@Particles@@QEBAMM@Z @ 0x1801DDCC8
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@M@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD460 (-AnimateSingle@-$LinearKeyframeAnimation@M@Particles@@UEAAXAEAV-$span@M$0-0@gsl@@0@Z.c)
 * Callees:
 *     ?FindFirstFrameIndex@?$LinearKeyframeAnimation@M@Particles@@IEBAIM@Z @ 0x1801DDBCC (-FindFirstFrameIndex@-$LinearKeyframeAnimation@M@Particles@@IEBAIM@Z.c)
 */

float __fastcall Particles::LinearKeyframeAnimation<float>::GetValueAt(__int64 a1, float a2)
{
  unsigned int FirstFrameIndex; // eax
  __int64 v3; // r10
  __int64 v4; // rdx
  unsigned __int64 v5; // r8

  if ( !*(_DWORD *)(a1 + 8) )
    a2 = 1.0 - a2;
  FirstFrameIndex = Particles::LinearKeyframeAnimation<float>::FindFirstFrameIndex(a1, a2);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = FirstFrameIndex + 1;
  if ( v5 >= (*(_QWORD *)(v3 + 24) - v4) >> 3 )
    return *(float *)(*(_QWORD *)(v3 + 24) - 4LL);
  else
    return (float)(fmaxf(
                     fminf(
                       (float)(a2 - *(float *)(v4 + 8LL * FirstFrameIndex))
                     / (float)(*(float *)(v4 + 8 * v5) - *(float *)(v4 + 8LL * FirstFrameIndex)),
                       1.0),
                     0.0)
                 * (float)(*(float *)(v4 + 8 * v5 + 4) - *(float *)(v4 + 8LL * FirstFrameIndex + 4)))
         + *(float *)(v4 + 8LL * FirstFrameIndex + 4);
}
