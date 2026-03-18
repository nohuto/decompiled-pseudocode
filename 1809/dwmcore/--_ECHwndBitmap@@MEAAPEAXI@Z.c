/*
 * XREFs of ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x180076A58
 * Callers:
 *     ??_ECHwndBitmap@@OBA@EAAPEAXI@Z @ 0x1800F0A60 (--_ECHwndBitmap@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x180076A98 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::`vector deleting destructor'(CHwndBitmap *this, char a2)
{
  CHwndBitmap::~CHwndBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
