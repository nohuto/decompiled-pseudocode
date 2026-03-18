/*
 * XREFs of ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800ACC30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800ACBC0 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

struct CResource **__fastcall CSolidColorLegacyMilBrush::`vector deleting destructor'(struct CResource **this, char a2)
{
  CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      operator delete(this);
  }
  return this;
}
