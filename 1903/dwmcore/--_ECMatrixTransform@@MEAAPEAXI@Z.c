/*
 * XREFs of ??_ECMatrixTransform@@MEAAPEAXI@Z @ 0x1800CE500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CMatrixTransform@@MEAA@XZ @ 0x1800CE540 (--1CMatrixTransform@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CMatrixTransform *__fastcall CMatrixTransform::`vector deleting destructor'(CMatrixTransform *this, char a2)
{
  CMatrixTransform::~CMatrixTransform(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
