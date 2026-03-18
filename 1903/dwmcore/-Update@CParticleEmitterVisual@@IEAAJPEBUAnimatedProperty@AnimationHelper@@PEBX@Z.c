/*
 * XREFs of ?Update@CParticleEmitterVisual@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801EE8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C408C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitterVisual::Update(
        CParticleEmitterVisual *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  __int64 v4; // rax

  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    v4 = *(_QWORD *)this;
    *((_BYTE *)this + 6281) = 1;
    (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(v4 + 64))(this, 0LL, 0LL);
  }
  return 0LL;
}
