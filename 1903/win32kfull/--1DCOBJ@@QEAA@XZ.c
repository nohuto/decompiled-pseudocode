/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C0079AE0
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0030AC0 (GreCreateDIBitmapReal.c)
 *     NtGdiGetWidthTable @ 0x1C00523D0 (NtGdiGetWidthTable.c)
 *     NtGdiGetRandomRgn @ 0x1C00620D0 (NtGdiGetRandomRgn.c)
 *     GreGradientFill @ 0x1C0079484 (GreGradientFill.c)
 *     NtGdiSetMetaRgn @ 0x1C0107600 (NtGdiSetMetaRgn.c)
 *     GreGetKerningPairs @ 0x1C0144134 (GreGetKerningPairs.c)
 *     ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C0152110 (-NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z.c)
 *     NtGdiGetETM @ 0x1C0158040 (NtGdiGetETM.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0164C44 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GrePolyDraw @ 0x1C026A524 (GrePolyDraw.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027A000 (NtGdiAddEmbFontToDC.c)
 *     NtGdiGetPath @ 0x1C02A6930 (NtGdiGetPath.c)
 *     NtGdiGetDeviceWidth @ 0x1C02A7DD0 (NtGdiGetDeviceWidth.c)
 *     NtGdiMirrorWindowOrg @ 0x1C02A8B40 (NtGdiMirrorWindowOrg.c)
 *     NtGdiColorCorrectPalette @ 0x1C02AF130 (NtGdiColorCorrectPalette.c)
 *     NtGdiConvertMetafileRect @ 0x1C02AFC70 (NtGdiConvertMetafileRect.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02AFE40 (NtGdiScaleViewportExtEx.c)
 *     GreCreateHalftonePalette @ 0x1C02B021C (GreCreateHalftonePalette.c)
 *     NtGdiEnumObjects @ 0x1C02B1560 (NtGdiEnumObjects.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
