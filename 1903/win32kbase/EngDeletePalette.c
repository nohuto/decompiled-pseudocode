/*
 * XREFs of EngDeletePalette @ 0x1C00ADC70
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00BABB0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00BE400 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  return EngDeletePaletteInternal(hpal, 0);
}
