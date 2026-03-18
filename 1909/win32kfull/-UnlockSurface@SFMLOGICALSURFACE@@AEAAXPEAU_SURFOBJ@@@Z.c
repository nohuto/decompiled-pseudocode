/*
 * XREFs of ?UnlockSurface@SFMLOGICALSURFACE@@AEAAXPEAU_SURFOBJ@@@Z @ 0x1C008ABAC
 * Callers:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008CB08 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::UnlockSurface(SFMLOGICALSURFACE *this, struct _SURFOBJ *a2)
{
  SURFACE *v4; // rax

  if ( a2 )
  {
    v4 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(a2);
    SURFACE::RemoveLSurf(v4, this);
    EngUnlockSurface(a2);
  }
}
