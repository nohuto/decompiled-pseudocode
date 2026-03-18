/*
 * XREFs of XFORMOBJ_iGetXform @ 0x1C008D690
 * Callers:
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C008BB40 (NtGdiXFORMOBJ_iGetXform.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C008D5E0 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall XFORMOBJ_iGetXform(XFORMOBJ *pxo, XFORML *pxform)
{
  if ( !pxo )
    return -1;
  if ( pxform )
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)pxo, pxform);
  switch ( *(_DWORD *)(*(_QWORD *)&pxo->ulReserved + 32LL) & 0x43 )
  {
    case 1:
      return 2;
    case 3:
      return 1;
    case 67:
      return 0;
  }
  return 3;
}
