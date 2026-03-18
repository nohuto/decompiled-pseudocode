/*
 * XREFs of ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4830
 * Callers:
 *     ?GetBounds@CHwndBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800ED620 (-GetBounds@CHwndBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetTransform@CHwndBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802164A0 (-GetTransform@CHwndBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B48EC (-GetBoundsInternal@CHwndBitmap@@AEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x1800B53A4 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800B53DC (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x180177774 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?IsDirty@CVisualTree@@QEBA_NXZ @ 0x1801A9190 (-IsDirty@CVisualTree@@QEBA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CVisualTree **v4; // rdi
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx

  v4 = (CVisualTree **)(a1 - 8);
  v7 = 0;
  if ( !CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 8)) )
    goto LABEL_9;
  v8 = CHwndBitmap::EnsureVisualTree((CHwndBitmap *)v4);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x93u, 0LL);
    return v7;
  }
  if ( CVisualTree::IsDirty(v4[14])
    && CComposition::IsCompositionThread(*(CComposition **)(a1 + 24))
    && (v10 = CVisualTree::PreCompute((__int64)v4[14], 0LL), v7 = v10, v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x97u, 0LL);
  }
  else
  {
LABEL_9:
    CHwndBitmap::GetBoundsInternal(v4, a4);
  }
  return v7;
}
