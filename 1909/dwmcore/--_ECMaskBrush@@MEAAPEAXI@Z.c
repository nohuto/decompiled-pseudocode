/*
 * XREFs of ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x1800C8730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x1800C8770 (--1CMaskBrush@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CMaskBrush *__fastcall CMaskBrush::`vector deleting destructor'(CMaskBrush *this, char a2)
{
  CMaskBrush::~CMaskBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
