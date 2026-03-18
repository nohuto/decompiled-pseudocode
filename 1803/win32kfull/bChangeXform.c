/*
 * XREFs of bChangeXform @ 0x1C0223C20
 * Callers:
 *     lQueryTrueTypeOutlineVertical @ 0x1C021DD38 (lQueryTrueTypeOutlineVertical.c)
 *     lGetGlyphBitmapVertical @ 0x1C021F880 (lGetGlyphBitmapVertical.c)
 *     ttfdGlyphBitmap @ 0x1C0220498 (ttfdGlyphBitmap.c)
 * Callees:
 *     fs__NewTransformation @ 0x1C02B27B0 (fs__NewTransformation.c)
 */

_BOOL8 __fastcall bChangeXform(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  v3 = *(_QWORD *)(a1 + 176);
  if ( a2 )
    v4 = a1 + 320;
  else
    v4 = a1 + 356;
  *(_QWORD *)(v3 + 120) = v4;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_DWORD *)(a1 + 316);
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 108LL) = *(_WORD *)(a1 + 44);
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 110LL) = *(_WORD *)(a1 + 48);
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 92682;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 136LL) = *(_WORD *)(a1 + 402);
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 128LL) = 0LL;
  v5 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
  {
    *(_WORD *)(v5 + 138) = 20;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 20;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = (*(_DWORD *)(a1 + 116) >> 7) & 1;
  }
  else
  {
    *(_WORD *)(v5 + 138) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 156LL) = 0;
  return !(unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184), 1LL)
      || !(unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184), 0LL);
}
