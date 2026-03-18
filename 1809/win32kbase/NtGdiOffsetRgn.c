/*
 * XREFs of NtGdiOffsetRgn @ 0x1C008B400
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C001CB60 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  return GreOffsetRgn(a1, a2, a3);
}
