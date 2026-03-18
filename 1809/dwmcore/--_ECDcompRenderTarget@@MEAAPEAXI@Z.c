/*
 * XREFs of ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x1800EAEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CDcompRenderTarget@@MEAA@XZ @ 0x1800EAEE0 (--1CDcompRenderTarget@@MEAA@XZ.c)
 */

CDcompRenderTarget *__fastcall CDcompRenderTarget::`vector deleting destructor'(CDcompRenderTarget *this, char a2)
{
  CDcompRenderTarget::~CDcompRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
