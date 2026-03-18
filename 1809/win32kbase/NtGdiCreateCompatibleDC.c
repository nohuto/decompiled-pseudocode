/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C001D930
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C001DD10 (GreCreateCompatibleDC.c)
 */

__int64 __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
