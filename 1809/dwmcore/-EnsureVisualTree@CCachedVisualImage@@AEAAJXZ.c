/*
 * XREFs of ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18008FA28
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008D080 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureVisualTree(CCachedVisualImage *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct CVisualTree **v4; // rdx
  struct CComposition **v5; // rcx
  int VisualTree; // eax
  unsigned int v7; // ecx

  v3 = 0;
  v4 = (struct CVisualTree **)((char *)this + 232);
  if ( !*((_QWORD *)this + 29) )
  {
    v5 = (struct CComposition **)*((_QWORD *)this + 24);
    if ( v5 )
    {
      VisualTree = CVisual::GetVisualTree(v5, v4, a3, 0);
      v3 = VisualTree;
      if ( VisualTree < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, VisualTree, 0x207u);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2003292412, 0x20Bu);
    }
  }
  return v3;
}
