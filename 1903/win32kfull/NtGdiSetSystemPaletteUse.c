/*
 * XREFs of NtGdiSetSystemPaletteUse @ 0x1C02A9240
 * Callers:
 *     <none>
 * Callees:
 *     GreSetSystemPaletteUse @ 0x1C02B06BC (GreSetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiSetSystemPaletteUse(HDC a1)
{
  return GreSetSystemPaletteUse(a1);
}
