/*
 * XREFs of ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C015C5DC
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C00FD58C (GreGetDxSharedSurface.c)
 *     GreWindowResizeComplete @ 0x1C026D404 (GreWindowResizeComplete.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall SFMLOGICALSURFACE::AdapterLuid(SFMLOGICALSURFACE *this, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 23);
  if ( v4 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v4) + 116) & 1) != 0 )
    *a2 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)this + 23)) + 576);
  else
    *a2 = *((_QWORD *)this + 25);
  return (struct _LUID)a2;
}
