/*
 * XREFs of NtGdiGetCharSet @ 0x1C0023EF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C00241A4 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
