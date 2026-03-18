/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C00313D0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 */

HDC __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
