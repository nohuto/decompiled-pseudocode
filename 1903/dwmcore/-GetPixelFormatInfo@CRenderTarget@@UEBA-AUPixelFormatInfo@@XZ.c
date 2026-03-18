/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800DA6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 40);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
