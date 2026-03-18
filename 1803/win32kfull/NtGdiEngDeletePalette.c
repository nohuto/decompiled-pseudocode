/*
 * XREFs of NtGdiEngDeletePalette @ 0x1C01134C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall NtGdiEngDeletePalette(HPALETTE a1)
{
  return EngDeletePaletteInternal(a1, 0x8000u);
}
