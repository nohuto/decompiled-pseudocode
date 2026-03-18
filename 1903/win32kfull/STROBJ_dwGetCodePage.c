/*
 * XREFs of STROBJ_dwGetCodePage @ 0x1C028A6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall STROBJ_dwGetCodePage(STROBJ *pstro)
{
  return *((_DWORD *)&pstro[2].rclBkGround + 4);
}
