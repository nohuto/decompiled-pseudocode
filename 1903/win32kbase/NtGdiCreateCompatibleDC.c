/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C0017D60
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C0018460 (GreCreateCompatibleDC.c)
 */

__int64 __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
