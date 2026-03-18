/*
 * XREFs of EngDeleteSurface @ 0x1C0052500
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0054290 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface(hsurf);
  return result;
}
