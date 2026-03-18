/*
 * XREFs of ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A88D0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00B2A20 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02A8FEC (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02A921C (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
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
  unsigned __int8 *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r15
  int v14; // ecx
  unsigned __int8 *v15; // r14
  int v16; // r9d
  __int64 v17; // r12
  __int64 v18; // r8
  __int64 v19; // r13
  int v20; // eax
  unsigned __int8 *v21; // rax
  ULONG v22; // eax
  ULONG iColor; // [rsp+70h] [rbp+50h]
  int v25; // [rsp+78h] [rbp+58h]
  int v26; // [rsp+88h] [rbp+68h]

  HIBYTE(iColor) = 0;
  v11 = &a3[2 * a6 + a6];
  if ( a4 )
  {
    v14 = a8 & 0x1F;
    v15 = &a4[4 * ((__int64)a8 >> 5)];
    v16 = *(_DWORD *)v15;
    v26 = *(_DWORD *)v15;
    if ( a6 != a7 )
    {
      v17 = (unsigned int)(a7 - a6);
      v18 = a8 & 0x1F;
      do
      {
        if ( v18 >= 32 )
        {
          v16 = *((_DWORD *)v15 + 1);
          v26 = v16;
        }
        v19 = 0LL;
        if ( v18 < 32 )
          v19 = v18;
        v20 = 0;
        if ( v18 < 32 )
          v20 = v14;
        v25 = v20;
        v21 = v15 + 4;
        if ( v18 < 32 )
          v21 = v15;
        v15 = v21;
        if ( (dword_1C02EC6B0[v19] & v16) != 0 )
        {
          LOWORD(iColor) = *(_WORD *)v11;
          BYTE2(iColor) = v11[2];
          if ( pxlo )
            v22 = XLATEOBJ_iXlate(pxlo, iColor);
          else
            v22 = iColor;
          *(_DWORD *)a2 = v22;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v18 = v19 + 1;
        v16 = v26;
        v11 += 3;
        v14 = v25 + 1;
        --v17;
      }
      while ( v17 );
    }
  }
  else if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v13 = (unsigned int)(a7 - a6);
      do
      {
        LOWORD(iColor) = *(_WORD *)v11;
        BYTE2(iColor) = v11[2];
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, iColor);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v11 += 3;
        --v13;
      }
      while ( v13 );
    }
  }
  else if ( a6 != a7 )
  {
    v12 = (unsigned int)(a7 - a6);
    do
    {
      LOWORD(iColor) = *(_WORD *)v11;
      BYTE2(iColor) = v11[2];
      *(_DWORD *)a2 = iColor;
      a2 = prunPumpDDA(a1, a2);
      vAdvXDDA(a1);
      v11 += 3;
      --v12;
    }
    while ( v12 );
  }
  return a2;
}
