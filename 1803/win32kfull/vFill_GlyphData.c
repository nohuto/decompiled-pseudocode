/*
 * XREFs of vFill_GlyphData @ 0x1C022A0C0
 * Callers:
 *     vtfdQueryFontData @ 0x1C022A290 (vtfdQueryFontData.c)
 * Callees:
 *     vLTimesVtfl @ 0x1C022AD5C (vLTimesVtfl.c)
 */

__int64 __fastcall vFill_GlyphData(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  __int64 result; // rax

  v3 = a2;
  v5 = **(_QWORD **)(a1 + 112);
  *(_QWORD *)v3 = 0LL;
  *(_DWORD *)(v3 + 8) = a3;
  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v6 + 48) & 0x1000) != 0 )
    v7 = *(__int16 *)(v6 + 78);
  else
    v7 = *(unsigned __int16 *)((unsigned int)(4 * a3) + v5 + 119);
  *(_DWORD *)(v3 + 24) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v3 + 28) = *(_DWORD *)(a1 + 36);
  v8 = (int)(float)((float)v7 * *(float *)(a1 + 40));
  if ( (*(_DWORD *)(a1 + 120) & 4) != 0 )
  {
    v9 = (v8 + 8) & 0xFFFFFFF0;
    *(_DWORD *)(v3 + 12) = v9;
    v10 = -v9;
    if ( (*(_DWORD *)(a1 + 120) & 8) == 0 )
      v10 = v9;
    *(_DWORD *)(v3 + 52) = v10;
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 60) = 0;
    *(_DWORD *)(v3 + 56) = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 12) = v8;
    vLTimesVtfl((unsigned int)v7, a1 + 52, v3 + 48);
  }
  *(_DWORD *)(v3 + 16) = 0;
  v11 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v3 + 20) = v11;
  result = *(unsigned int *)(a1 + 120);
  if ( (result & 1) != 0 )
  {
    v11 += *(_DWORD *)(a1 + 88);
    *(_DWORD *)(v3 + 20) = v11;
    result = *(unsigned int *)(a1 + 120);
  }
  if ( (result & 2) != 0 )
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(a1 + 92) + v11;
  return result;
}
