/*
 * XREFs of ??_ECInk@@UEAAPEAXI@Z @ 0x180174760
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CInk@@UEAA@XZ @ 0x180173718 (--1CInk@@UEAA@XZ.c)
 */

void **__fastcall CInk::`vector deleting destructor'(void **this, char a2)
{
  CInk::~CInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
