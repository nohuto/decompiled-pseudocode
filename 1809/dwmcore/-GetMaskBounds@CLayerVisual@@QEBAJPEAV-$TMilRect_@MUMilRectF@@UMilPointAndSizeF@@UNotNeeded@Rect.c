/*
 * XREFs of ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4868
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000F5F0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180010364 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801A45F8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F7AC (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18019451C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CLayerVisual::GetMaskBounds(CVisual *this, _OWORD *a2)
{
  __int128 v2; // xmm0
  unsigned int v4; // ebx
  CDropShadow *v6; // rcx
  __int64 v7; // r10
  __int64 (__fastcall *v8)(__int64, _QWORD, __int128 *, _OWORD *); // rax
  int v9; // eax
  __int64 v10; // rcx
  int BoundsWithLayerEffect; // eax
  __int64 v12; // rcx
  float v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF

  v2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = 0;
  *a2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = (CDropShadow *)*((_QWORD *)this + 70);
  v15 = v2;
  if ( v6 )
  {
    if ( CDropShadow::GetMaskForLayerVisualNoRef(v6) )
    {
      if ( CVisual::GetEffectiveSize(this, (float *)&v15, &v14) )
      {
        v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _OWORD *))(*(_QWORD *)v7 + 168LL);
        *((float *)&v15 + 1) = v14;
        v9 = v8(v7, 0LL, &v15, a2);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1D0u);
      }
    }
    else
    {
      BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(this, a2);
      v4 = BoundsWithLayerEffect;
      if ( BoundsWithLayerEffect < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, BoundsWithLayerEffect, 0x1D5u);
    }
  }
  return v4;
}
