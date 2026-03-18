/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x180091FD4
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x1800F0940 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 *     ??_ECCachedVisualImage@@OEI@EAAPEAXI@Z @ 0x1800F0950 (--_ECCachedVisualImage@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x180092014 (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::`vector deleting destructor'(CCachedVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
