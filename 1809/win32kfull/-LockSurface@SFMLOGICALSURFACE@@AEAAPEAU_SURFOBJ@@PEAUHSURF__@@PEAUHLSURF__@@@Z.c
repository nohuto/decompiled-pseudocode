/*
 * XREFs of ?LockSurface@SFMLOGICALSURFACE@@AEAAPEAU_SURFOBJ@@PEAUHSURF__@@PEAUHLSURF__@@@Z @ 0x1C000E748
 * Callers:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C000E604 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SFMLOGICALSURFACE::LockSurface(SFMLOGICALSURFACE *this, HSURF a2, HLSURF a3)
{
  SURFOBJ *v4; // rax
  SURFOBJ *v5; // rbx
  SURFACE *v6; // rax

  v4 = EngLockSurface(a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v4);
    SURFACE::AddLSurf(v6, this);
  }
  return v5;
}
