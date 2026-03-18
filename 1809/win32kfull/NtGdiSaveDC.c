/*
 * XREFs of NtGdiSaveDC @ 0x1C0056C30
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C0161094 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
