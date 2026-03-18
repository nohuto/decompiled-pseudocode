/*
 * XREFs of ?SetAnimatedProperty@CSpriteVisualContent@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A39A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A39EC (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::SetAnimatedProperty(
        CSpriteVisualContent *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    (*(void (__fastcall **)(CSpriteVisualContent *, _QWORD, CSpriteVisualContent *))(*(_QWORD *)this + 64LL))(
      this,
      0LL,
      this);
  }
  return 0LL;
}
