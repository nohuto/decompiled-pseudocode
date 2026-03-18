/*
 * XREFs of lGetSingularGlyphBitmap @ 0x1C021F940
 * Callers:
 *     ttfdQueryFontData @ 0x1C02205F4 (ttfdQueryFontData.c)
 * Callees:
 *     CJGD @ 0x1C021E2F0 (CJGD.c)
 *     vFillSingularGLYPHDATA @ 0x1C0221A20 (vFillSingularGLYPHDATA.c)
 *     fs_NewGlyph @ 0x1C02B1C74 (fs_NewGlyph.c)
 */

__int64 __fastcall lGetSingularGlyphBitmap(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  int v11; // esi
  __int64 v12; // r8
  int v13; // eax

  v5 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(v5 + 108) = 0;
  *(_DWORD *)(v5 + 112) = 0;
  *(_WORD *)(v5 + 104) = -1;
  *(_WORD *)(v5 + 106) = a2;
  if ( (unsigned int)fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184)) )
    return 0xFFFFFFFFLL;
  v11 = CJGD(1u, 1, a1);
  if ( a3 )
    vFillSingularGLYPHDATA(a2, *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL), v12, a3);
  if ( a4 )
  {
    if ( v11 < 0 || a5 < v11 )
      return 0xFFFFFFFFLL;
    *a4 = *(_DWORD *)(a1 + 200);
    v13 = *(_DWORD *)(a1 + 204);
    a4[4] = 0;
    a4[1] = v13;
    a4[2] = 1;
    a4[3] = 1;
  }
  if ( a3 )
    *a3 = a4;
  return (unsigned int)v11;
}
