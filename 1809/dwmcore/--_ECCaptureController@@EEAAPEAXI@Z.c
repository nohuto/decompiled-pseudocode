/*
 * XREFs of ??_ECCaptureController@@EEAAPEAXI@Z @ 0x1801743F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x18018DB84 (--1CCaptureController@@EEAA@XZ.c)
 */

CCaptureController *__fastcall CCaptureController::`vector deleting destructor'(CCaptureController *this, char a2)
{
  CCaptureController::~CCaptureController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
