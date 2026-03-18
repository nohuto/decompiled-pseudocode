/*
 * XREFs of EngNineGrid @ 0x1C00A87E0
 * Callers:
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C02499C4 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 *     ?BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C0269F40 (-BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C026C6E0 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 * Callees:
 *     xxEngNineGrid @ 0x1C00A8890 (xxEngNineGrid.c)
 */

__int64 __fastcall EngNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int *a8)
{
  __int64 v9; // [rsp+40h] [rbp-21h] BYREF
  int v10; // [rsp+48h] [rbp-19h]
  int v11; // [rsp+4Ch] [rbp-15h]
  __int64 v12; // [rsp+50h] [rbp-11h]
  POINTL *v13; // [rsp+58h] [rbp-9h]
  __int64 v14; // [rsp+60h] [rbp-1h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]

  if ( *(_WORD *)(a2 + 76) || *(_DWORD *)(a2 + 72) != 6 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v12 = 0LL;
    v11 = 0;
    v10 = *a8;
    HIDWORD(v9) = *(_DWORD *)(a7 + 20);
    v13 = &gptlZero;
    v16 = *((_QWORD *)a8 + 3);
    v15 = *((_QWORD *)a8 + 2);
    v14 = *((_QWORD *)a8 + 1);
    v18 = 0LL;
    v17 = 0;
    return xxEngNineGrid(a1, a5, a6, a7, (__int64)&v9);
  }
}
