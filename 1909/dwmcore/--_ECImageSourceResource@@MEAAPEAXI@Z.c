/*
 * XREFs of ??_ECImageSourceResource@@MEAAPEAXI@Z @ 0x18019D880
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CImageSourceResource@@MEAA@XZ @ 0x18019C878 (--1CImageSourceResource@@MEAA@XZ.c)
 */

CImageSourceResource *__fastcall CImageSourceResource::`vector deleting destructor'(
        CImageSourceResource *this,
        char a2)
{
  CImageSourceResource::~CImageSourceResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
