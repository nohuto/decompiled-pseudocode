/*
 * XREFs of ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x1802334C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CBitmapColorKey@@EEAA@XZ @ 0x180233460 (--1CBitmapColorKey@@EEAA@XZ.c)
 */

CBitmapColorKey *__fastcall CBitmapColorKey::`scalar deleting destructor'(CBitmapColorKey *this, char a2)
{
  CBitmapColorKey::~CBitmapColorKey(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
