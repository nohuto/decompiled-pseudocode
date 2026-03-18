/*
 * XREFs of PATHOBJ_bMoveTo @ 0x1C00B2E30
 * Callers:
 *     <none>
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0082470 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 */

BOOL __stdcall PATHOBJ_bMoveTo(PATHOBJ *ppo, POINTFIX ptfx)
{
  struct _POINTL v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = (struct _POINTL)ptfx;
  return EPATHOBJ::bMoveTo((EPATHOBJ *)ppo, 0LL, &v3);
}
