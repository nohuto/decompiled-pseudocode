/*
 * XREFs of EngNineGrid @ 0x1C00E9F30
 * Callers:
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027B1E4 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 *     ?BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C0294200 (-BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C0296B70 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 * Callees:
 *     xxEngNineGrid @ 0x1C00E9FEC (xxEngNineGrid.c)
 */

__int64 __fastcall EngNineGrid(int a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  _DWORD v9[4]; // [rsp+40h] [rbp-21h] BYREF
  __int64 v10; // [rsp+50h] [rbp-11h]
  POINTL *v11; // [rsp+58h] [rbp-9h]
  __int64 v12; // [rsp+60h] [rbp-1h]
  __int64 v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  int v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+7Ch] [rbp+1Bh]
  __int64 v17; // [rsp+80h] [rbp+1Fh]

  v9[0] = 0;
  v16 = 0;
  if ( *(_WORD *)(a2 + 76) || *(_DWORD *)(a2 + 72) != 6 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v10 = 0LL;
    v9[3] = 0;
    v9[2] = *(_DWORD *)a8;
    v9[1] = *(_DWORD *)(a7 + 20);
    v11 = &gptlZero;
    v14 = *(_QWORD *)(a8 + 24);
    v13 = *(_QWORD *)(a8 + 16);
    v12 = *(_QWORD *)(a8 + 8);
    v17 = 0LL;
    v15 = 0;
    return xxEngNineGrid(a1, a2, a3, a4, a5, a6, a7, (__int64)v9);
  }
}
