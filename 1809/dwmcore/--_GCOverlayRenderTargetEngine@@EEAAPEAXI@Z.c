/*
 * XREFs of ??_GCOverlayRenderTargetEngine@@EEAAPEAXI@Z @ 0x18015E2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x18015E1F8 (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
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
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
