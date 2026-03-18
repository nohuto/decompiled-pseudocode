/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00127A8
 * Callers:
 *     GreGetPaletteEntries @ 0x1C0011000 (GreGetPaletteEntries.c)
 *     DxEngSelectPaletteToSurface @ 0x1C0011F50 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C0011FE0 (DxEngSetPaletteState.c)
 *     EngHTBlt @ 0x1C0012AA4 (EngHTBlt.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009A870 (hsurfCreateCompatibleSurface.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C011440C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C0150E10 (NtGdiGetNearestPaletteIndex.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025768C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C025A4C8 (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C0272780 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C028A164 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiColorCorrectPalette @ 0x1C029A320 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C029B2F0 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C029B37C (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C029B6F0 (GreSetPaletteEntries.c)
 *     GreUnrealizeObject @ 0x1C029BB14 (GreUnrealizeObject.c)
 *     NtGdiResizePalette @ 0x1C029BC50 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  HPALETTE v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = a2;
  LOBYTE(a2) = 8;
  *(_QWORD *)this = HmgShareLockCheck(v2, a2);
  return this;
}
