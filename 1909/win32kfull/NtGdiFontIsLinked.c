/*
 * XREFs of NtGdiFontIsLinked @ 0x1C00F86E0
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C00F86F4 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
