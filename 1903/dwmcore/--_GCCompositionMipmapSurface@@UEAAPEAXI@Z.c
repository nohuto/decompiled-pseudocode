/*
 * XREFs of ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x1801D1500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1801D144C (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 */

CCompositionMipmapSurface *__fastcall CCompositionMipmapSurface::`scalar deleting destructor'(
        CCompositionMipmapSurface *this,
        char a2)
{
  CCompositionMipmapSurface::~CCompositionMipmapSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
