/*
 * XREFs of ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x18015BD40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18015BCC0 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 */

CIndirectSwapchainRenderTarget *__fastcall CIndirectSwapchainRenderTarget::`scalar deleting destructor'(
        CIndirectSwapchainRenderTarget *this,
        char a2)
{
  CIndirectSwapchainRenderTarget::~CIndirectSwapchainRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
