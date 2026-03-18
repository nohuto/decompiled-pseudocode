/*
 * XREFs of ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x1801764E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180176470 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 */

CHwndRenderTargetDDA *__fastcall CHwndRenderTargetDDA::`vector deleting destructor'(
        CHwndRenderTargetDDA *this,
        char a2)
{
  CHwndRenderTargetDDA::~CHwndRenderTargetDDA(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
