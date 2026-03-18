/*
 * XREFs of ??_GCOverlayRenderTargetEngine@@EEAAPEAXI@Z @ 0x1801A2B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x1801A2AEC (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
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
