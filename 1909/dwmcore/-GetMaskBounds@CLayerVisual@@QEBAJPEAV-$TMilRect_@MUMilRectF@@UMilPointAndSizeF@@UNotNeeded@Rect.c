/*
 * XREFs of ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C7630
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000D5A0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000E1A0 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801C73B8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D75C (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180066F00 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801C8AF4 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CLayerVisual::GetMaskBounds(CVisual *this, _OWORD *a2)
{
  __int128 v2; // xmm0
  unsigned int v4; // ebx
  CDropShadow *v6; // rcx
  __int64 v7; // r10
  __int64 (__fastcall *v8)(__int64, _QWORD, __int128 *, _OWORD *); // rax
  signed int v9; // eax
  __int64 v10; // rcx
  signed int BoundsWithLayerEffect; // eax
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
        v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _OWORD *))(*(_QWORD *)v7 + 208LL);
        *((float *)&v15 + 1) = v14;
        v9 = v8(v7, 0LL, &v15, a2);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1CEu, 0LL);
      }
    }
    else
    {
      BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(this, a2);
      v4 = BoundsWithLayerEffect;
      if ( BoundsWithLayerEffect < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, BoundsWithLayerEffect, 0x1D3u, 0LL);
    }
  }
  return v4;
}
