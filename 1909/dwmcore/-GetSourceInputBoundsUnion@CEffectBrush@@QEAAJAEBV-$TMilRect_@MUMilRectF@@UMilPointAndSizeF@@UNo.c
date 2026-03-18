/*
 * XREFs of ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1801C9CA0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800BB4A0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18000DCFC (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CEffectBrush::GetSourceInputBoundsUnion(__int64 a1, _OWORD *a2, __int64 a3, float *a4)
{
  __int128 v4; // xmm0
  unsigned int v5; // ebx
  signed int SourceInputBounds; // eax
  __int64 v8; // rcx
  float *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+48h] [rbp-18h]

  v4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = 0;
  *(_OWORD *)a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v13 = v4;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v13 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, (__int64)&v13);
    v5 = SourceInputBounds;
    if ( SourceInputBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, SourceInputBounds, 0x265u, 0LL);
    }
    else if ( v16 )
    {
      v9 = (float *)v13;
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a4, v9);
        v9 = (float *)(v10 + 16);
      }
      while ( v11 != 1 );
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v13);
  }
  return v5;
}
