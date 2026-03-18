/*
 * XREFs of CLIPOBJ_ppoGetPath @ 0x1C026AB20
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C026A8D8 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 */

PATHOBJ *__stdcall CLIPOBJ_ppoGetPath(CLIPOBJ *pco)
{
  return XCLIPOBJ::ppoGetPath((XCLIPOBJ *)pco);
}
