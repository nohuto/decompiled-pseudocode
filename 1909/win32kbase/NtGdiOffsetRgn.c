/*
 * XREFs of NtGdiOffsetRgn @ 0x1C0049CD0
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C0049CF0 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1)
{
  return GreOffsetRgn(a1);
}
