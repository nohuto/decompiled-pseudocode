/*
 * XREFs of ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C011C274
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0028020 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C007F790 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C01118DC (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C011C23C (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C012C9A0 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0156F04 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
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
