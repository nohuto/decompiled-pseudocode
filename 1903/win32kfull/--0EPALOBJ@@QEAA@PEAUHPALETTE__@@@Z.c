/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EE508
 * Callers:
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     hsurfCreateCompatibleSurface @ 0x1C0034F34 (hsurfCreateCompatibleSurface.c)
 *     GreGetPaletteEntries @ 0x1C00EDF20 (GreGetPaletteEntries.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00EE430 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C00EE4C0 (DxEngSetPaletteState.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F50C4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C0158A10 (NtGdiGetNearestPaletteIndex.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0270FBC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0273D70 (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C02888E0 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02A040C (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiColorCorrectPalette @ 0x1C02AF130 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C02B0190 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02B021C (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C02B05C0 (GreSetPaletteEntries.c)
 *     GreUnrealizeObject @ 0x1C02B0A14 (GreUnrealizeObject.c)
 *     NtGdiResizePalette @ 0x1C02B0B50 (NtGdiResizePalette.c)
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
