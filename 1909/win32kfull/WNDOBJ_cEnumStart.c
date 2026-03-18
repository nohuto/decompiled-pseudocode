/*
 * XREFs of WNDOBJ_cEnumStart @ 0x1C0284660
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00D5CE8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

ULONG __stdcall WNDOBJ_cEnumStart(WNDOBJ *pwo, ULONG iType, ULONG iDirection, ULONG cLimit)
{
  return XCLIPOBJ::cEnumStart((XCLIPOBJ *)pwo, 1, iType, iDirection, cLimit);
}
