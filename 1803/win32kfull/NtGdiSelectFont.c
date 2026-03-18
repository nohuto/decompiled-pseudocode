/*
 * XREFs of NtGdiSelectFont @ 0x1C00115D0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C013BF24 (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
