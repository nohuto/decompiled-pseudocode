/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C011C1A0
 * Callers:
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F7358 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C026E9B0 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A51B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ERECTL *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdx
  _DWORD *v4; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 36) & 0x40) != 0 )
  {
    if ( ERECTL::bEmpty((ERECTL *)(v2 + 1488)) )
      *(_OWORD *)v4 = *(_OWORD *)v3;
    else
      ERECTL::operator|=(v4, v3);
  }
}
