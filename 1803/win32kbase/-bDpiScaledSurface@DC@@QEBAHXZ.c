/*
 * XREFs of ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30
 * Callers:
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0025760 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0025790 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C002684C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0026A00 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0026A58 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0026B90 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00C05C0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 63);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 116) & 0x800) != 0;
  return v2;
}
