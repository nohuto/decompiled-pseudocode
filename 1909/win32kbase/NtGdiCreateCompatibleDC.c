/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C001A110
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C001AC50 (GreCreateCompatibleDC.c)
 */

__int64 __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
