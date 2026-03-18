/*
 * XREFs of PATHOBJ_bPolyLineTo @ 0x1C0072BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C001B980 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 */

BOOL __stdcall PATHOBJ_bPolyLineTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  return EPATHOBJ::bPolyLineTo((EPATHOBJ *)ppo, 0LL, (struct _POINTL *)pptfx, cptfx);
}
