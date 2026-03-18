/*
 * XREFs of W32kCddStrokePath @ 0x1C0130C30
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C00E3150 (EngStrokePath.c)
 */

BOOL __fastcall W32kCddStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix,
        __int64 a9)
{
  __int64 v13; // rbx
  BOOL result; // eax

  v13 = SURFOBJ_TO_SURFACE(pso);
  *(_QWORD *)(v13 + 632) = a9;
  result = EngStrokePath(pso, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  *(_QWORD *)(v13 + 632) = 0LL;
  return result;
}
