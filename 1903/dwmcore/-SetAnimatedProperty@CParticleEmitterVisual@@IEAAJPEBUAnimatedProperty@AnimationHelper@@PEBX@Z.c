/*
 * XREFs of ?SetAnimatedProperty@CParticleEmitterVisual@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801EDC70
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C408C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::SetAnimatedProperty(
        CParticleEmitterVisual *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
  return 0LL;
}
