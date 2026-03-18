/*
 * XREFs of ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C00269E0
 * Callers:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0026A58 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0026B90 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vClearDpiScaling(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 132);
  if ( (v1 & 1) != 0 )
  {
    *((_DWORD *)this + 9) |= 0x10u;
    *(_QWORD *)((char *)this + 532) = 0LL;
    *(_QWORD *)((char *)this + 540) = 0LL;
    *((_DWORD *)this + 132) = v1 & 0xFFFFFFF8 | 4;
    DC::vUpdateCachedDPIScaleValue(this);
  }
}
