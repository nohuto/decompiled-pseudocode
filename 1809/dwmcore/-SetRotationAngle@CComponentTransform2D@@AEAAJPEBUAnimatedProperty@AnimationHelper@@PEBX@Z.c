/*
 * XREFs of ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800701D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x1800A2EDC (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform2D::SetRotationAngle(
        CComponentTransform2D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  v3 = 0;
  if ( *((float *)this + 46) != *(float *)a3 )
  {
    *((_DWORD *)this + 46) = *a3;
    CResource::InvalidateAnimationSources(this, 3u);
    CResource::InvalidateAnimationSources(this, 4u);
    (*(void (__fastcall **)(CComponentTransform2D *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    v6 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 3u, *((float *)this + 46));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xDBu);
  }
  return v3;
}
