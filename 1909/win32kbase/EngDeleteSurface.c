/*
 * XREFs of EngDeleteSurface @ 0x1C00A0380
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  __int64 v1; // rdx
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface((__int64)hsurf, v1);
  return result;
}
