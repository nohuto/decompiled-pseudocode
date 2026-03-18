/*
 * XREFs of ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000FCC0
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002E3A0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18000FD4C (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetBounds(__int64 a1, _OWORD *a2, __int64 a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  int SourceInputBounds; // eax
  unsigned int v8; // ecx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]
  unsigned int v13; // [rsp+48h] [rbp-10h]

  v4 = 0;
  *a4 = *a2;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v10 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, &v10);
    v4 = SourceInputBounds;
    if ( SourceInputBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, SourceInputBounds, 0x276u);
    else
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(**(_QWORD **)(a1 + 96) + 88LL))(
             *(_QWORD *)(a1 + 96),
             v10,
             v13,
             a4);
    DynArrayImpl<1>::~DynArrayImpl<1>(&v10);
  }
  return v4;
}
