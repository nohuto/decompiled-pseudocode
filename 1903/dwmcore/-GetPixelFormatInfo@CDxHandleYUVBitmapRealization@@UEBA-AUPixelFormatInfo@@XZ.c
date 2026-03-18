/*
 * XREFs of ?GetPixelFormatInfo@CDxHandleYUVBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802641B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDxHandleYUVBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // r8d
  bool v4; // zf
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 280);
  v3 = 0;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 144);
  v4 = *(_DWORD *)(a1 + 8) == 0;
  v5 = 3;
  *a2 = v3;
  if ( !v4 )
    v5 = *(_DWORD *)(a1 + 8);
  a2[1] = v5;
  a2[2] = *(_DWORD *)(a1 + 52);
  return a2;
}
