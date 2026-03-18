/*
 * XREFs of ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801AB8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x1801AB884 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::`scalar deleting destructor'(
        VisualCaptureBitsResponse *this,
        void *a2)
{
  char v2; // di

  v2 = (char)a2;
  VisualCaptureBitsResponse::~VisualCaptureBitsResponse(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
