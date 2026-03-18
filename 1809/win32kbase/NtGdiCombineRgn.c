/*
 * XREFs of NtGdiCombineRgn @ 0x1C003A890
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 */

__int64 __fastcall NtGdiCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  return GreCombineRgn(a1, a2, a3, a4);
}
