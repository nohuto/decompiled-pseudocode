/*
 * XREFs of NtGdiFontIsLinked @ 0x1C00F9610
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C00F9624 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
