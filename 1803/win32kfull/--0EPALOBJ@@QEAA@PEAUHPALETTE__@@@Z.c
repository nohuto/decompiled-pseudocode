/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00092F8
 * Callers:
 *     GreGetPaletteEntries @ 0x1C0008880 (GreGetPaletteEntries.c)
 *     DxEngSelectPaletteToSurface @ 0x1C0008DF0 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C0008E70 (DxEngSetPaletteState.c)
 *     hsurfCreateCompatibleSurface @ 0x1C0008EB4 (hsurfCreateCompatibleSurface.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00B16A4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C0132300 (NtGdiGetNearestPaletteIndex.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C023FF9C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C02427B0 (DxEngSyncPaletteTableWithDevice.c)
 *     EngQueryPalette @ 0x1C025EC60 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0276D3C (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x1C0280520 (NtGdiUnrealizeObject.c)
 *     NtGdiColorCorrectPalette @ 0x1C0286800 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C0287680 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C0287704 (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C0287A50 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C0287F00 (NtGdiResizePalette.c)
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
