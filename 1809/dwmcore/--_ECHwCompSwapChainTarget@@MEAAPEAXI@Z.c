/*
 * XREFs of ??_ECHwCompSwapChainTarget@@MEAAPEAXI@Z @ 0x180200450
 * Callers:
 *     ??_ECHwCompSwapChainTarget@@OKA@EAAPEAXI@Z @ 0x1800F0C20 (--_ECHwCompSwapChainTarget@@OKA@EAAPEAXI@Z.c)
 *     ??_ECHwCompSwapChainTarget@@ONA@EAAPEAXI@Z @ 0x1800F0C30 (--_ECHwCompSwapChainTarget@@ONA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x180200388 (--1CHwCompSwapChainTarget@@MEAA@XZ.c)
 */

CHwCompSwapChainTarget *__fastcall CHwCompSwapChainTarget::`vector deleting destructor'(
        CHwCompSwapChainTarget *this,
        char a2)
{
  CHwCompSwapChainTarget::~CHwCompSwapChainTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
