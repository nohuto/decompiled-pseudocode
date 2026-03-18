/*
 * XREFs of ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800ADD30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800ADD70 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::`vector deleting destructor'(
        CImageLegacyMilBrush *this,
        char a2)
{
  CImageLegacyMilBrush::~CImageLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
