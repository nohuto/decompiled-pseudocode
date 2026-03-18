/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00FBD30
 * Callers:
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FBAD4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0269AA0 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0073078 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
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
