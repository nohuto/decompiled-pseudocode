/*
 * XREFs of ??_GCOverlayRenderTargetEngine@@EEAAPEAXI@Z @ 0x1801A4430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x1801A43AC (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
 */

COverlayRenderTargetEngine *__fastcall COverlayRenderTargetEngine::`scalar deleting destructor'(
        COverlayRenderTargetEngine *this,
        char a2)
{
  COverlayRenderTargetEngine::~COverlayRenderTargetEngine(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
