/*
 * XREFs of NtGdiSelectFont @ 0x1C012B510
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C01670A4 (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
