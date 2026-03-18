/*
 * XREFs of ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x180039520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DSurface@@MEAA@XZ @ 0x180039474 (--1CD3DSurface@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CD3DSurface *__fastcall CD3DSurface::`vector deleting destructor'(CD3DSurface *this, char a2)
{
  CD3DSurface::~CD3DSurface(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xF0uLL);
  return this;
}
