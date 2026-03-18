/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800704D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x1800A2EDC (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAngle(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  v3 = 0;
  if ( *((float *)this + 56) != *(float *)a3 )
  {
    *((_DWORD *)this + 56) = *a3;
    CResource::InvalidateAnimationSources(this, 0xFu);
    CResource::InvalidateAnimationSources(this, 0x10u);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v6 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0xFu, *((float *)this + 56));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x135u);
  }
  return v3;
}
