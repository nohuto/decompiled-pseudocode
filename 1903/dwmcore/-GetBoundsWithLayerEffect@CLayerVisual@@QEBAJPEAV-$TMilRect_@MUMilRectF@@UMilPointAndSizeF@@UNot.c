/*
 * XREFs of ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001274C
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180012590 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C8DD0 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180012CEC (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18001310C (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(CVisual *a1, _OWORD *a2)
{
  _OWORD *v2; // r14
  int v5; // ebx
  CLayerVisual *v6; // rcx
  __int64 (__fastcall *v7)(CVisual *); // rax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  int SourceInputBounds; // eax
  unsigned int v11; // ecx
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+44h] [rbp-Ch]
  unsigned int v16; // [rsp+48h] [rbp-8h]
  float v17; // [rsp+70h] [rbp+20h] BYREF
  float v18; // [rsp+74h] [rbp+24h]
  float v19; // [rsp+78h] [rbp+28h] BYREF

  v2 = (_OWORD *)((char *)a1 + 164);
  v5 = 0;
  *a2 = *(_OWORD *)((char *)a1 + 164);
  if ( (CVisual::GetEffectiveSize(a1, &v17, &v19) || CLayerVisual::GetAutomaticBoundsExpansion(v6))
    && (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)a1 + 216LL))(a1) )
  {
    v7 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)a1 + 224LL);
    v18 = v19;
    v9 = *(_QWORD *)v7(a1);
    if ( v9 )
    {
      *a2 = *v2;
      if ( *(_QWORD *)(v9 + 104) )
      {
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v13 = 0LL;
        SourceInputBounds = CEffectBrush::GetSourceInputBounds(v9, v2, &v17, &v13);
        v5 = SourceInputBounds;
        if ( SourceInputBounds < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, SourceInputBounds, 0x28Bu, 0LL);
        else
          v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v9 + 104) + 88LL))(
                 *(_QWORD *)(v9 + 104),
                 v13,
                 v16,
                 a2);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v13);
      }
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v5, 0x194u, 0LL);
    }
    else if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
    {
      *a2 = *v2;
    }
  }
  return (unsigned int)v5;
}
