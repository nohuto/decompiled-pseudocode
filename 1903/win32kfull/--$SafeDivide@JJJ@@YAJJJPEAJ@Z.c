/*
 * XREFs of ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C0128FF4
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C004CC08 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00A7780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C011DF8C (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0128FBC (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C01386CC (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C015D874 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeDivide<long,long,long>(int a1, int a2, int *a3)
{
  if ( !a2 || a1 == 0x80000000 && a2 == -1 )
    return 2147500037LL;
  *a3 = a1 / a2;
  return 0LL;
}
