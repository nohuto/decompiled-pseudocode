/*
 * XREFs of NtGdiGetCharSet @ 0x1C00F96E0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C00A8858 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
