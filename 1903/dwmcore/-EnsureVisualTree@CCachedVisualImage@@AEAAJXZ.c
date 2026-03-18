/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800B4714
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043890 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x1800B4F98 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this, __int64 a2, bool a3)
{
  unsigned int v3; // ebx
  struct CVisualTree **v4; // rdx
  CVisual *v6; // rcx
  signed int VisualTree; // eax
  __int64 v8; // rcx

  v3 = 0;
  v4 = (struct CVisualTree **)((char *)this + 232);
  if ( !*((_QWORD *)this + 29) )
  {
    v6 = (CVisual *)*((_QWORD *)this + 24);
    if ( v6 )
    {
      VisualTree = CVisual::GetVisualTree(v6, v4, a3, 0);
      v3 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, VisualTree, 0x195u, 0LL);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x88982F04, 0x199u, 0LL);
    }
  }
  return v3;
}
