/*
 * XREFs of NtGdiSaveDC @ 0x1C008DEF0
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDC @ 0x1C008DF10 (GreSaveDC.c)
 */

__int64 __fastcall NtGdiSaveDC(__int64 a1)
{
  return GreSaveDC(a1);
}
