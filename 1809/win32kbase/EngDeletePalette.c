/*
 * XREFs of EngDeletePalette @ 0x1C0060E90
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0060C50 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00AAD70 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  return EngDeletePaletteInternal(hpal, 0);
}
