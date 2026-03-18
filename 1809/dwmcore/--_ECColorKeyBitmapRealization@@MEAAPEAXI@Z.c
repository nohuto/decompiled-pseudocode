/*
 * XREFs of ??_ECColorKeyBitmapRealization@@MEAAPEAXI@Z @ 0x180226570
 * Callers:
 *     ??_ECColorKeyBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800F13B0 (--_ECColorKeyBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CColorKeyBitmapRealization@@MEAA@XZ @ 0x1802264FC (--1CColorKeyBitmapRealization@@MEAA@XZ.c)
 */

CColorKeyBitmapRealization *__fastcall CColorKeyBitmapRealization::`vector deleting destructor'(
        CColorKeyBitmapRealization *this,
        char a2)
{
  CColorKeyBitmapRealization::~CColorKeyBitmapRealization(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
