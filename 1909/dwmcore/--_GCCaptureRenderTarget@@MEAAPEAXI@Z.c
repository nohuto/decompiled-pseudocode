/*
 * XREFs of ??_GCCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18019D560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18024D798 (--1CCaptureRenderTarget@@MEAA@XZ.c)
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
      operator delete(this);
  }
  return this;
}
