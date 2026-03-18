/*
 * XREFs of NtGdiCreateHalftonePalette @ 0x1C0135590
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleHalftonePalette @ 0x1C01355A8 (GreCreateCompatibleHalftonePalette.c)
 */

__int64 __fastcall NtGdiCreateHalftonePalette(__int64 a1)
{
  return GreCreateCompatibleHalftonePalette(a1, 0LL);
}
