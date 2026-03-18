/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800EABB0
 * Callers:
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800EADB0 (-GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18001310C (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBounds@CTreeEffect@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1800D94D8 (-GetBounds@CTreeEffect@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801CC960 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(CLayerVisual *this, _OWORD *a2, float *a3)
{
  unsigned int v3; // ebx
  struct CEffect *EffectInternal; // rdi
  signed int Bounds; // eax
  __int64 v9; // rcx
  char v10; // r9
  __int64 (*v11)(void); // rax
  __int64 *v12; // rax
  signed int v13; // eax
  __int64 v14; // rcx
  float v16; // [rsp+50h] [rbp+8h] BYREF
  float v17; // [rsp+54h] [rbp+Ch]
  float v18; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( (**((_DWORD **)this + 28) & 0x200000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           56LL) )
    {
      Bounds = CFilterEffect::GetBounds(EffectInternal, a2, a3);
      v3 = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, Bounds, 0x1AC1u, 0LL);
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 216LL))(this) )
  {
    CLayerVisual::GetAutomaticBoundsExpansion(this);
    if ( (CVisual::GetEffectiveSize(this, &v16, &v18) || v10)
      && (v11 = *(__int64 (**)(void))(*(_QWORD *)this + 224LL),
          v17 = v18,
          v12 = (__int64 *)v11(),
          v13 = CTreeEffect::GetBounds(v12, a2, (__int64)&v16, a3),
          v3 = v13,
          v13 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1AD7u, 0LL);
    }
    else if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a3) )
    {
      *(_OWORD *)a3 = *a2;
    }
  }
  return v3;
}
