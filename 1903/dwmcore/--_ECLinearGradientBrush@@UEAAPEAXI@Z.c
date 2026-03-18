/*
 * XREFs of ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x180020F80
 * Callers:
 *     ??_ECLinearGradientBrush@@WFA@EAAPEAXI@Z @ 0x1800ED5C0 (--_ECLinearGradientBrush@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x180020FC0 (--1CGradientBrush@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::`vector deleting destructor'(
        CLinearGradientBrush *this,
        char a2)
{
  CGradientBrush::~CGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
