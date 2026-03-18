/*
 * XREFs of NtGdiGetCharSet @ 0x1C011EB00
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C005EB60 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
