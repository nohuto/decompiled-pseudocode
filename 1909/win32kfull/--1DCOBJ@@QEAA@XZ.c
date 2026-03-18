/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     NtGdiGetWidthTable @ 0x1C009BC30 (NtGdiGetWidthTable.c)
 *     NtGdiGetRandomRgn @ 0x1C00AB010 (NtGdiGetRandomRgn.c)
 *     NtGdiSetMetaRgn @ 0x1C00E1A00 (NtGdiSetMetaRgn.c)
 *     GreGradientFill @ 0x1C0124B4C (GreGradientFill.c)
 *     GreGetKerningPairs @ 0x1C0144EE4 (GreGetKerningPairs.c)
 *     ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C0152ED0 (-NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z.c)
 *     NtGdiGetETM @ 0x1C0158E00 (NtGdiGetETM.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C01661E4 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0166B64 (GreExtSelectClipRgnInternal.c)
 *     GreSaveDCInternal @ 0x1C0166D00 (GreSaveDCInternal.c)
 *     GrePolyDraw @ 0x1C0269DF4 (GrePolyDraw.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0279940 (NtGdiAddEmbFontToDC.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A05A4 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetPath @ 0x1C02A6480 (NtGdiGetPath.c)
 *     NtGdiGetDeviceWidth @ 0x1C02A7920 (NtGdiGetDeviceWidth.c)
 *     NtGdiMirrorWindowOrg @ 0x1C02A8690 (NtGdiMirrorWindowOrg.c)
 *     NtGdiColorCorrectPalette @ 0x1C02AEC80 (NtGdiColorCorrectPalette.c)
 *     NtGdiConvertMetafileRect @ 0x1C02AF7C0 (NtGdiConvertMetafileRect.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02AF990 (NtGdiScaleViewportExtEx.c)
 *     GreCreateHalftonePalette @ 0x1C02AFD6C (GreCreateHalftonePalette.c)
 *     NtGdiEnumObjects @ 0x1C02B10B0 (NtGdiEnumObjects.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
