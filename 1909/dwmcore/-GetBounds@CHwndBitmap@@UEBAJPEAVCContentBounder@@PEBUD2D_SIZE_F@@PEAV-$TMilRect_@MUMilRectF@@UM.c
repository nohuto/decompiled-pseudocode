/*
 * XREFs of ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180023C20
 * Callers:
 *     ?GetBounds@CHwndBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F12E0 (-GetBounds@CHwndBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetTransform@CHwndBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180214DB0 (-GetTransform@CHwndBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180023CDC (-GetBoundsInternal@CHwndBitmap@@AEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x180025764 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18002579C (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x180176004 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?IsDirty@CVisualTree@@QEBA_NXZ @ 0x1801A78D0 (-IsDirty@CVisualTree@@QEBA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CVisualTree **v4; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx

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
    && (v10 = CVisualTree::PreCompute(v4[14], 0LL), v7 = v10, v10 < 0) )
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
