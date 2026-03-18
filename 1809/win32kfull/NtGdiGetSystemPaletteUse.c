/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x1C012D750
 * Callers:
 *     <none>
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1C012D764 (GreGetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}
