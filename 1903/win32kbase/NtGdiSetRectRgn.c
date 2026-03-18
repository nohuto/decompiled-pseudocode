/*
 * XREFs of NtGdiSetRectRgn @ 0x1C01255C0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C0053B00 (GreSetRectRgn.c)
 */

__int64 __fastcall NtGdiSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  return GreSetRectRgn(a1, a2, a3, a4, a5);
}
