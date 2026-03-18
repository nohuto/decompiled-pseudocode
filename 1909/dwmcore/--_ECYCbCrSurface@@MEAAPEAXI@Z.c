/*
 * XREFs of ??_ECYCbCrSurface@@MEAAPEAXI@Z @ 0x18019E570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CYCbCrSurface@@MEAA@XZ @ 0x1802125B0 (--1CYCbCrSurface@@MEAA@XZ.c)
 */

CYCbCrSurface *__fastcall CYCbCrSurface::`vector deleting destructor'(CYCbCrSurface *this, char a2)
{
  CYCbCrSurface::~CYCbCrSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
