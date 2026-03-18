/*
 * XREFs of ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1800CB810
 * Callers:
 *     ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x1800CB7D0 (--_ECRedirectedGDISurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveLogicalSurfaceEntry@CLogicalSurfaceHandleMap@@QEAAXPEBVCGdiSpriteBitmap@@PEAX@Z @ 0x1800CB9AC (-RemoveLogicalSurfaceEntry@CLogicalSurfaceHandleMap@@QEAAXPEBVCGdiSpriteBitmap@@PEAX@Z.c)
 */

void __fastcall CRedirectedGDISurface::~CRedirectedGDISurface(CRedirectedGDISurface *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 41) == 0;
  *(_QWORD *)this = &CRedirectedGDISurface::`vftable';
  if ( !v1 )
    DwmHLSurfCloseCompositorRef(*((_QWORD *)this + 3));
  if ( *((_BYTE *)this + 40) )
    CLogicalSurfaceHandleMap::RemoveLogicalSurfaceEntry(
      *((CLogicalSurfaceHandleMap **)this + 2),
      *((const struct CGdiSpriteBitmap **)this + 4),
      *((void **)this + 3));
}
