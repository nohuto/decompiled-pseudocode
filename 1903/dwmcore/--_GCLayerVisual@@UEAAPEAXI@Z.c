/*
 * XREFs of ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800CF550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800CF590 (--1CLayerVisual@@UEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CLayerVisual *__fastcall CLayerVisual::`scalar deleting destructor'(CLayerVisual *this, char a2)
{
  CLayerVisual::~CLayerVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
