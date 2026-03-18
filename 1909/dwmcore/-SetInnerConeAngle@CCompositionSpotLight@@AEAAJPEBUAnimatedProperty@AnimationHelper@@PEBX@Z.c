/*
 * XREFs of ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A0300
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800A1F80 (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetInnerConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 93) != *(float *)a3 )
  {
    *((_DWORD *)this + 93) = *a3;
    CResource::InvalidateAnimationSources(this, 8u);
    CResource::InvalidateAnimationSources(this, 9u);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
