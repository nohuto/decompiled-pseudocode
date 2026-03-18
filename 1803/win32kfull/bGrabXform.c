/*
 * XREFs of bGrabXform @ 0x1C02226AC
 * Callers:
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C021DF80 (ttfdQueryQuadTrueTypeOutline.c)
 *     ttfdQueryFontData @ 0x1C02205F4 (ttfdQueryFontData.c)
 * Callees:
 *     bSetXform @ 0x1C0222A4C (bSetXform.c)
 */

__int64 __fastcall bGrabXform(__int64 a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rcx
  unsigned int v8; // r14d
  int v9; // esi
  int v10; // ebp
  int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx

  v7 = *(_QWORD *)(a1 + 176);
  v8 = 1;
  if ( (*(_WORD *)(v7 + 152) & 3) == 1 )
    v9 = -1;
  else
    v9 = (*(_WORD *)(v7 + 152) & 3) == 3;
  v10 = *(_DWORD *)(v7 + 164);
  v11 = (*(unsigned __int16 *)(v7 + 152) >> 4) & 1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) != a1
    || *(_WORD *)(a1 + 402) != a2
    || v9 != a4
    || v11 != a5
    || a3 != ((*(_DWORD *)(a1 + 116) >> 7) & 1)
    || v10 != a6 )
  {
    *(_WORD *)(a1 + 402) = a2;
    v12 = bSetXform(a1, a3, a4, a5, a6);
    v13 = *(_QWORD *)(a1 + 8);
    v8 = v12;
    v14 = *(_QWORD *)(v13 + 32);
    if ( v12 )
    {
      if ( v14 != a1 && (*(_DWORD *)(v13 + 400) & 0x10000000) != 0 )
      {
        v15 = *(_DWORD *)(a1 + 80);
        v16 = v15 * *(__int16 *)(v13 + 428);
        if ( v15 <= 0 )
          v17 = -(((-v16 >> 15) + 1) >> 1);
        else
          v17 = ((v16 >> 15) + 1) >> 1;
        *(_DWORD *)(a1 + 404) = v17;
      }
      *(_QWORD *)(v13 + 32) = a1;
    }
    else if ( v14 )
    {
      bSetXform(v14, (*(_DWORD *)(v14 + 116) >> 7) & 1, v9, v11, v10);
    }
  }
  return v8;
}
