/*
 * XREFs of NtGdiSaveDC @ 0x1C00AAFF0
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C0166D00 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
