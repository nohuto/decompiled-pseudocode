/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     NtGdiGetRandomRgn @ 0x1C00761B0 (NtGdiGetRandomRgn.c)
 *     GreGradientFill @ 0x1C00C9504 (GreGradientFill.c)
 *     NtGdiGetWidthTable @ 0x1C00E0EA0 (NtGdiGetWidthTable.c)
 *     NtGdiFastPolyPolyline @ 0x1C00E27E0 (NtGdiFastPolyPolyline.c)
 *     NtGdiSetMetaRgn @ 0x1C00E56D0 (NtGdiSetMetaRgn.c)
 *     NtGdiGetETM @ 0x1C0118830 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C011936C (GreGetKerningPairs.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013B460 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013BA84 (GreExtSelectClipRgnInternal.c)
 *     GreSaveDCInternal @ 0x1C013BC08 (GreSaveDCInternal.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0248900 (NtGdiAddEmbFontToDC.c)
 *     GrePolyDraw @ 0x1C026F8F8 (GrePolyDraw.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02775D8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetPath @ 0x1C027DC40 (NtGdiGetPath.c)
 *     NtGdiGetDeviceWidth @ 0x1C027F120 (NtGdiGetDeviceWidth.c)
 *     NtGdiMirrorWindowOrg @ 0x1C027FE70 (NtGdiMirrorWindowOrg.c)
 *     NtGdiColorCorrectPalette @ 0x1C0286800 (NtGdiColorCorrectPalette.c)
 *     NtGdiConvertMetafileRect @ 0x1C02871E0 (NtGdiConvertMetafileRect.c)
 *     NtGdiScaleViewportExtEx @ 0x1C0287390 (NtGdiScaleViewportExtEx.c)
 *     GreCreateHalftonePalette @ 0x1C0287704 (GreCreateHalftonePalette.c)
 *     NtGdiEnumObjects @ 0x1C0288AB0 (NtGdiEnumObjects.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
