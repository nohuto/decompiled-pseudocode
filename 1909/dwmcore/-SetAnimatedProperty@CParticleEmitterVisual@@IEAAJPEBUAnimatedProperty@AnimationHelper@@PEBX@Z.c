/*
 * XREFs of ?SetAnimatedProperty@CParticleEmitterVisual@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801EC500
 * Callers:
 *     <none>
 * Callees:
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A316C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::SetAnimatedProperty(
        CParticleEmitterVisual *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
    CResource::InvalidateAnimationSources(this);
  return 0LL;
}
