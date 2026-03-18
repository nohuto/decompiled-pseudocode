/*
 * XREFs of ?SetAnimatedProperty@CSpriteVisualContent@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C4040
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C408C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
