/*
 * XREFs of EngSetLastError @ 0x1C00689B0
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0014250 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C001A470 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C001A4C0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C001A550 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C001A610 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C001A6D0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C001BB64 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiGetRegionData @ 0x1C001E410 (NtGdiGetRegionData.c)
 *     GreGetRegionData @ 0x1C001E520 (GreGetRegionData.c)
 *     GreCreateRectRgnIndirect @ 0x1C001E910 (GreCreateRectRgnIndirect.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0020FD0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0021AF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0021EC0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     GreCreateBitmap @ 0x1C003D960 (GreCreateBitmap.c)
 *     GreCreatePatternBrushInternal @ 0x1C0041420 (GreCreatePatternBrushInternal.c)
 *     NtGdiCreateRectRgn @ 0x1C00430D0 (NtGdiCreateRectRgn.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     GreGetDeviceCaps @ 0x1C0054280 (GreGetDeviceCaps.c)
 *     GrePtInRegion @ 0x1C00646D0 (GrePtInRegion.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00722B0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C0072440 (NtGdiPolyPolyDraw.c)
 *     bPolyPolygon @ 0x1C0072840 (bPolyPolygon.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C00C08D0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00C0940 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C00C83E0 (GreGetDpiDepDefaultGuiFont.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00C84B0 (NtGdiGetDeviceCapsAll.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00D6B94 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00D6FCC (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00D7190 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     GreCreateRectRgn @ 0x1C00D9A90 (GreCreateRectRgn.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00D9F1C (--0MALLOCOBJ@@QEAA@K@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall EngSetLastError(ULONG iError)
{
  _DWORD *CurrentThreadTeb; // rax

  CurrentThreadTeb = PsGetCurrentThreadTeb();
  if ( CurrentThreadTeb )
    CurrentThreadTeb[26] = iError;
}
