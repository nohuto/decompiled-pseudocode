/*
 * XREFs of ??_ECYCbCrSurface@@MEAAPEAXI@Z @ 0x180174F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CYCbCrSurface@@MEAA@XZ @ 0x1801BA384 (--1CYCbCrSurface@@MEAA@XZ.c)
 */

CYCbCrSurface *__fastcall CYCbCrSurface::`vector deleting destructor'(CYCbCrSurface *this, char a2)
{
  CYCbCrSurface::~CYCbCrSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
