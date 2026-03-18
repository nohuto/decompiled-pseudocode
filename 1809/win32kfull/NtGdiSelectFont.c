/*
 * XREFs of NtGdiSelectFont @ 0x1C011CD70
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C0161484 (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
