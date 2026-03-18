/*
 * XREFs of NtGdiSaveDC @ 0x1C0078AA0
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C013BC08 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
