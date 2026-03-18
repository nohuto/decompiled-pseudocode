/*
 * XREFs of ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BAB00
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C0094450 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02BB20C (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02BB428 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead24(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r15
  int v13; // ecx
  unsigned __int8 *v14; // r14
  int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // r13
  int v18; // eax
  unsigned __int8 *v19; // rax
  ULONG v20; // eax
  ULONG iColor; // [rsp+70h] [rbp+50h]
  __int64 v23; // [rsp+78h] [rbp+58h]
  int v24; // [rsp+88h] [rbp+68h]

  HIBYTE(iColor) = 0;
  v10 = &a3[2 * a6 + a6];
  if ( a4 )
  {
    v13 = a8 & 0x1F;
    v14 = &a4[4 * ((__int64)a8 >> 5)];
    v15 = *(_DWORD *)v14;
    if ( a6 != a7 )
    {
      v23 = (unsigned int)(a7 - a6);
      v16 = a8 & 0x1F;
      do
      {
        if ( v16 >= 32 )
          v15 = *((_DWORD *)v14 + 1);
        v17 = 0LL;
        if ( v16 < 32 )
          v17 = v16;
        v18 = 0;
        if ( v16 < 32 )
          v18 = v13;
        v24 = v18;
        v19 = v14 + 4;
        if ( v16 < 32 )
          v19 = v14;
        v14 = v19;
        if ( (dword_1C02DEFF0[v17] & v15) != 0 )
        {
          LOWORD(iColor) = *(_WORD *)v10;
          BYTE2(iColor) = v10[2];
          if ( pxlo )
            v20 = XLATEOBJ_iXlate(pxlo, iColor);
          else
            v20 = iColor;
          *(_DWORD *)a2 = v20;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v16 = v17 + 1;
        v10 += 3;
        v13 = v24 + 1;
        --v23;
      }
      while ( v23 );
    }
  }
  else if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v12 = (unsigned int)(a7 - a6);
      do
      {
        LOWORD(iColor) = *(_WORD *)v10;
        BYTE2(iColor) = v10[2];
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, iColor);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v10 += 3;
        --v12;
      }
      while ( v12 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = (unsigned int)(a7 - a6);
    do
    {
      LOWORD(iColor) = *(_WORD *)v10;
      BYTE2(iColor) = v10[2];
      *(_DWORD *)a2 = iColor;
      a2 = prunPumpDDA(a1, a2);
      vAdvXDDA(a1);
      v10 += 3;
      --v11;
    }
    while ( v11 );
  }
  return a2;
}
