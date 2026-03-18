/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x1C0138630
 * Callers:
 *     <none>
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1C0138644 (GreGetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}
