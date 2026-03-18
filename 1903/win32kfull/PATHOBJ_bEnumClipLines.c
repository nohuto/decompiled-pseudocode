/*
 * XREFs of PATHOBJ_bEnumClipLines @ 0x1C02B5F00
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C014CF28 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 */

BOOL __stdcall PATHOBJ_bEnumClipLines(PATHOBJ *ppo, ULONG cj, CLIPLINE *pcl)
{
  return XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&ppo[9], ppo, cj, pcl, 1);
}
