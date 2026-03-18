/*
 * XREFs of ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18000DCFC
 * Callers:
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D75C (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18000D8D4 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000DC70 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1801C9CA0 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetSourceInputBounds(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rcx
  int v16; // eax
  unsigned int v17; // ecx

  v4 = *(_DWORD *)(a1 + 136);
  v8 = DynArrayImpl<0>::Grow(a4, 16, v4, 1, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x34Du, 0LL);
    return v10;
  }
  v11 = 0;
  *(_DWORD *)(a4 + 24) = v4;
  if ( v4 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      v14 = *(_QWORD *)(v13 + *(_QWORD *)(a1 + 112));
      if ( v14 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v14 + 208LL))(
                v14,
                0LL,
                a3,
                *(_QWORD *)a4 + 16LL * v11);
        v10 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x354u, 0LL);
          return v10;
        }
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)a4 + v12) = *a2;
      }
      ++v11;
      v13 += 8LL;
      v12 += 16LL;
    }
    while ( v11 < v4 );
  }
  return v10;
}
