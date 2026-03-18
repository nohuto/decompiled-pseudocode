/*
 * XREFs of ??_GCCaptureRenderTarget@@EEAAPEAXI@Z @ 0x180157F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180157CA0 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 */

CCaptureRenderTarget *__fastcall CCaptureRenderTarget::`scalar deleting destructor'(
        CCaptureRenderTarget *this,
        char a2)
{
  CCaptureRenderTarget::~CCaptureRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
