/*
 * XREFs of ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00A3A98
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C009DC3C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     GreGetBoundsRect @ 0x1C00A3168 (GreGetBoundsRect.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00A3500 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     GreSetBoundsRect @ 0x1C00A37AC (GreSetBoundsRect.c)
 *     GreRectangle @ 0x1C00A3F7C (GreRectangle.c)
 *     xxEngNineGrid @ 0x1C00E08E0 (xxEngNineGrid.c)
 *     ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C011EE38 (-bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C02542F8 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreLockDisplayArea @ 0x1C02694E8 (GreLockDisplayArea.c)
 *     GreUnlockDisplayArea @ 0x1C02696EC (GreUnlockDisplayArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bWrapped(ERECTL *this)
{
  return *(_DWORD *)this >= *((_DWORD *)this + 2) || *((_DWORD *)this + 1) >= *((_DWORD *)this + 3);
}
