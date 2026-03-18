/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C01122A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C7B74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 */

_BOOL8 __fastcall vSpDwmMigrateLSurfShapeReferenceWrap(_QWORD *a1, SFMLOGICALSURFACE *this, __int64 a3)
{
  _BOOL8 result; // rax

  result = SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
  if ( a3 )
    return SFMLOGICALSURFACE::SetShape(this, a1, (struct _SURFOBJ *)(a3 + 24));
  return result;
}
