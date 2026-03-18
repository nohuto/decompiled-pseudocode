/*
 * XREFs of ??_GCDWMOffScreenSwapChain@@MEAAPEAXI@Z @ 0x1800E8710
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800E8750 (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 */

CDWMOffScreenSwapChain *__fastcall CDWMOffScreenSwapChain::`scalar deleting destructor'(
        CDWMOffScreenSwapChain *this,
        char a2)
{
  CDWMOffScreenSwapChain::~CDWMOffScreenSwapChain(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
