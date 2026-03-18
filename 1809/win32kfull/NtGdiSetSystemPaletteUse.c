/*
 * XREFs of NtGdiSetSystemPaletteUse @ 0x1C0293950
 * Callers:
 *     <none>
 * Callees:
 *     GreSetSystemPaletteUse @ 0x1C029B814 (GreSetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiSetSystemPaletteUse(HDC a1)
{
  return GreSetSystemPaletteUse(a1);
}
