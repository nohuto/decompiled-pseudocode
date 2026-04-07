/*
 * XREFs of ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x1800048C0
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001FD30 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180025544 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetMarginClip(CAtlasedImage *this, struct tagRECT *a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 128);
  if ( a2 )
  {
    if ( !v2 || !EqualRect((const RECT *)this + 7, a2) )
    {
      *((_BYTE *)this + 128) = 1;
      *((struct tagRECT *)this + 7) = *a2;
LABEL_4:
      CAtlasedImage::SetDirtyFlags(this, 1u, 0x2000u);
    }
  }
  else if ( v2 )
  {
    *((_BYTE *)this + 128) = 0;
    goto LABEL_4;
  }
}
