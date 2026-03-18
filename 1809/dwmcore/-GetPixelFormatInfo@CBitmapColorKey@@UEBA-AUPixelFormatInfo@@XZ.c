/*
 * XREFs of ?GetPixelFormatInfo@CBitmapColorKey@@UEBA?AUPixelFormatInfo@@XZ @ 0x180233A50
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18009445C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  BOOL v4; // eax
  __int64 v5; // rdx
  int v6; // ecx
  bool v7; // zf
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)a2 = v3;
  *(_DWORD *)(a2 + 8) = v2;
  v4 = HasAlphaChannel(v3);
  v6 = *(_DWORD *)(v5 + 4);
  v7 = !v4;
  result = v5;
  if ( !v7 )
    v6 = 1;
  *(_DWORD *)(v5 + 4) = v6;
  return result;
}
