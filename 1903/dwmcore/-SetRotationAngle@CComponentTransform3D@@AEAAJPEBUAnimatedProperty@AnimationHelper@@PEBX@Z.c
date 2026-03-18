/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800D0020
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18007F49C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAngle(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( *((float *)this + 56) != *(float *)a3 )
  {
    *((_DWORD *)this + 56) = *a3;
    CResource::InvalidateAnimationSources(this, 15);
    CResource::InvalidateAnimationSources(this, 16);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v6 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0xFu, *((float *)this + 56));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x166u, 0LL);
  }
  return v3;
}
