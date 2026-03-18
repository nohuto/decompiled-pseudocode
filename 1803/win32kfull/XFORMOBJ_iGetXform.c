/*
 * XREFs of XFORMOBJ_iGetXform @ 0x1C007F260
 * Callers:
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C007F1C0 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C011EAB0 (NtGdiXFORMOBJ_iGetXform.c)
 *     bNewXform @ 0x1C0222920 (bNewXform.c)
 *     ulGetRotate @ 0x1C0227380 (ulGetRotate.c)
 *     bInitXform @ 0x1C022A630 (bInitXform.c)
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
