/*
 * XREFs of ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x18019D970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180211B9C (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::`scalar deleting destructor'(
        CLinearGradientLegacyMilBrush *this,
        char a2)
{
  CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
