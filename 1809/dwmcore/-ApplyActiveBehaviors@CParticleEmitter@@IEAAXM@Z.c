/*
 * XREFs of ?ApplyActiveBehaviors@CParticleEmitter@@IEAAXM@Z @ 0x1801C5318
 * Callers:
 *     ?Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801C7770 (-Update@CParticleEmitter@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?Update@BulkAnimator@Particles@@QEAAXH@Z @ 0x1801DDF28 (-Update@BulkAnimator@Particles@@QEAAXH@Z.c)
 */

void __fastcall CParticleEmitter::ApplyActiveBehaviors(CParticleEmitter *this, float a2)
{
  __int64 v2; // rbx
  Particles::BulkAnimator **v3; // rdi
  unsigned __int64 v5; // rsi

  v2 = 0LL;
  v3 = (Particles::BulkAnimator **)*((_QWORD *)this + 32);
  v5 = (unsigned __int64)(*((_QWORD *)this + 33) - (_QWORD)v3 + 7LL) >> 3;
  if ( (unsigned __int64)v3 > *((_QWORD *)this + 33) )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      Particles::BulkAnimator::Update(*v3, *((_DWORD *)this + 62));
      ++v2;
      ++v3;
    }
    while ( v2 != v5 );
  }
}
