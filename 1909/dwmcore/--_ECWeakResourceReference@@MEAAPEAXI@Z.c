/*
 * XREFs of ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x1800A5090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CWeakResourceReference@@MEAA@XZ @ 0x1800A50D0 (--1CWeakResourceReference@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CWeakResourceReference *__fastcall CWeakResourceReference::`vector deleting destructor'(
        CWeakResourceReference *this,
        char a2)
{
  CWeakResourceReference::~CWeakResourceReference(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
