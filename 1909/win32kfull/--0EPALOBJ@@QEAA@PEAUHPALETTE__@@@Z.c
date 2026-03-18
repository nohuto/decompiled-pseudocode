/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00CD28C
 * Callers:
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00BE910 (hsurfCreateCompatibleSurface.c)
 *     GreGetPaletteEntries @ 0x1C00CCB10 (GreGetPaletteEntries.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00CD1B4 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C00CD244 (DxEngSetPaletteState.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00D51B4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C01599C0 (NtGdiGetNearestPaletteIndex.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02708AC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C027368C (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C0288250 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C029FE5C (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiColorCorrectPalette @ 0x1C02AEC80 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C02AFCE0 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02AFD6C (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C02B0110 (GreSetPaletteEntries.c)
 *     GreUnrealizeObject @ 0x1C02B0564 (GreUnrealizeObject.c)
 *     NtGdiResizePalette @ 0x1C02B06A0 (NtGdiResizePalette.c)
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
