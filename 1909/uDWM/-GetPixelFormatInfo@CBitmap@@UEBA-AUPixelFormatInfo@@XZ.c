/*
 * XREFs of ?GetPixelFormatInfo@CBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18003E990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 192);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
