/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002E3A0
 * Callers:
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180015440 (-GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000FCC0 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800102E0 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180197668 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(CLayerVisual *this, _OWORD *a2, _OWORD *a3)
{
  int v3; // ebx
  struct CEffect *EffectInternal; // rdi
  char v9; // r9
  __int64 (*v10)(void); // rax
  __int64 v11; // rcx
  int Bounds; // eax
  unsigned int v13; // ecx
  float v14; // [rsp+50h] [rbp+8h] BYREF
  float v15; // [rsp+54h] [rbp+Ch]
  float v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( (**((_DWORD **)this + 28) & 0x200000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           54LL) )
    {
      Bounds = CFilterEffect::GetBounds(EffectInternal, a2, a3);
      v3 = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Bounds, 0x19C2u);
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL))(this) )
  {
    CLayerVisual::GetAutomaticBoundsExpansion(this);
    if ( !CVisual::GetEffectiveSize(this, &v14, &v16) && !v9 )
      goto LABEL_19;
    v10 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
    v15 = v16;
    v11 = *(_QWORD *)v10();
    if ( v11 )
      v3 = CEffectBrush::GetBounds(v11, a2, (__int64)&v14, a3);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0x19D8u);
    }
    else
    {
LABEL_19:
      if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a3) )
        *a3 = *a2;
    }
  }
  return (unsigned int)v3;
}
