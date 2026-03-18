/*
 * XREFs of NtGdiOffsetRgn @ 0x1C00A0C30
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C0015600 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  return GreOffsetRgn(a1, a2, a3);
}
