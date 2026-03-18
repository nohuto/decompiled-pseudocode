/*
 * XREFs of ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x18001F030
 * Callers:
 *     ??_ECLinearGradientBrush@@WFA@EAAPEAXI@Z @ 0x1800F1280 (--_ECLinearGradientBrush@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18001F070 (--1CGradientBrush@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
