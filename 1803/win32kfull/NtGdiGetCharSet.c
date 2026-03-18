/*
 * XREFs of NtGdiGetCharSet @ 0x1C00811D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C008138C (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
