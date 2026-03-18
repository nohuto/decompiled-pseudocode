/*
 * XREFs of ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x180029160
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800291A0 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CSolidColorLegacyMilBrush *__fastcall CSolidColorLegacyMilBrush::`vector deleting destructor'(
        CSolidColorLegacyMilBrush *this,
        char a2)
{
  CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
