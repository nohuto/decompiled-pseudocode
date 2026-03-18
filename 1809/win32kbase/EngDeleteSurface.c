/*
 * XREFs of EngDeleteSurface @ 0x1C00434C0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface(hsurf);
  return result;
}
