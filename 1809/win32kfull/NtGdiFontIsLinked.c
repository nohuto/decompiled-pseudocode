/*
 * XREFs of NtGdiFontIsLinked @ 0x1C01103B0
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C01103C4 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
