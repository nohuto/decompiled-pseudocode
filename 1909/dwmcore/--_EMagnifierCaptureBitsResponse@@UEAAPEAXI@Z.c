/*
 * XREFs of ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801AAAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1801AAA88 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 */

MagnifierCaptureBitsResponse *__fastcall MagnifierCaptureBitsResponse::`vector deleting destructor'(
        MagnifierCaptureBitsResponse *this,
        char a2)
{
  MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
