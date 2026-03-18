/*
 * XREFs of EngDeletePalette @ 0x1C00C3550
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00DB8A0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C0076780 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  return EngDeletePaletteInternal(hpal, 0);
}
