/*
 * XREFs of EngSetLastError @ 0x1C0081C80
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0004E38 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GreCreateRectRgn @ 0x1C0004F50 (GreCreateRectRgn.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C001A5E0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     GreExtCreateRegion @ 0x1C001A670 (GreExtCreateRegion.c)
 *     NtGdiGetRegionData @ 0x1C001D2B0 (NtGdiGetRegionData.c)
 *     GreGetRegionData @ 0x1C001D400 (GreGetRegionData.c)
 *     bDeleteDCInternalEx @ 0x1C001DC90 (bDeleteDCInternalEx.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C001DEDC (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C001E5B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     AllocateObject @ 0x1C00255D0 (AllocateObject.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0029190 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029690 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     GreCreatePatternBrushInternal @ 0x1C00434E0 (GreCreatePatternBrushInternal.c)
 *     GreCreateBitmap @ 0x1C0043DF0 (GreCreateBitmap.c)
 *     GreGetDeviceCaps @ 0x1C0045080 (GreGetDeviceCaps.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0069854 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C006AF70 (NtGdiCreateRectRgn.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C006E820 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     GrePtInRegion @ 0x1C0071910 (GrePtInRegion.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreIntersectClipRect @ 0x1C009DA90 (GreIntersectClipRect.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C009EF10 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C009F120 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C009F8E0 (NtGdiPolyPolyDraw.c)
 *     bPolyPolygon @ 0x1C009FD40 (bPolyPolygon.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1C00A9D40 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00ABCF8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C00F6E90 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00F6F00 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C00F6F70 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00F6FE0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00FA8E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C00FC630 (GreGetDpiDepDefaultGuiFont.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00FC6E0 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0105C70 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0107C08 (--0MALLOCOBJ@@QEAA@K@Z.c)
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
