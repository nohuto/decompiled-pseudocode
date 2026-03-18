/*
 * XREFs of NtGdiFontIsLinked @ 0x1C011E120
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C011E134 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
