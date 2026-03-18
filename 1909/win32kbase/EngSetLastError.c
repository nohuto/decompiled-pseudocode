/*
 * XREFs of EngSetLastError @ 0x1C0093250
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000EAD0 (NtGdiCreateRectRgn.c)
 *     GreCreateBitmap @ 0x1C0016C90 (GreCreateBitmap.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C00177A0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     GreExtCreateRegion @ 0x1C0018220 (GreExtCreateRegion.c)
 *     GreIntersectClipRect @ 0x1C0019DF0 (GreIntersectClipRect.c)
 *     bDeleteDCInternalEx @ 0x1C0022200 (bDeleteDCInternalEx.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0023310 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0027830 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0029230 (-bCompute@DC@@QEAAHXZ.c)
 *     AllocateObject @ 0x1C002A780 (AllocateObject.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002B180 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     hdcOpenDCW @ 0x1C0039EC0 (hdcOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C003A7E0 (NtGdiGetRegionData.c)
 *     GreGetRegionData @ 0x1C003A8F0 (GreGetRegionData.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0049D80 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     GreGetDeviceCaps @ 0x1C00511A0 (GreGetDeviceCaps.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C006C9AC (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0072BA4 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00780DC (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0078390 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     GrePtInRegion @ 0x1C007ED00 (GrePtInRegion.c)
 *     GreCreatePatternBrushInternal @ 0x1C008CCA0 (GreCreatePatternBrushInternal.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C008D2D0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00AB930 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00AC8E0 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00AD050 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C00AD960 (NtGdiPolyPolyDraw.c)
 *     bPolyPolygon @ 0x1C00ADDC0 (bPolyPolygon.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C00ADFF0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C00AE190 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C0120F90 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0121000 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C0121070 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C0125ED0 (GreGetDpiDepDefaultGuiFont.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0125F80 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C012CBD0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     GreCreateRectRgn @ 0x1C012F350 (GreCreateRectRgn.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C012F82C (--0MALLOCOBJ@@QEAA@K@Z.c)
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
