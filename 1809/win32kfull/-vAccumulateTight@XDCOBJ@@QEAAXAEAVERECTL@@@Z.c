/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A4AFC
 * Callers:
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A4848 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C024FE1C (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C009FFE4 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ERECTL *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdx
  _DWORD *v4; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 36) & 0x40) != 0 )
  {
    if ( ERECTL::bEmpty((ERECTL *)(v2 + 1080)) )
      *(_OWORD *)v4 = *(_OWORD *)v3;
    else
      ERECTL::operator|=(v4, v3);
  }
}
