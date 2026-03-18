/*
 * XREFs of ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02B7120
 * Callers:
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02B6788 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02B6CA4 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C004B1FC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C01021F0 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 */

void __fastcall vGenWidths(int *a1, int *a2, struct EFLOAT *a3, struct EFLOAT *a4, int a5, int a6, int a7, int a8)
{
  int v12; // r10d
  int v13; // ecx
  int v14; // eax
  int v15; // ebp
  int v16; // r8d
  int v17; // ebp
  int v18; // ebp
  int v19; // r9d
  int v20; // r10d
  float v21; // xmm4_4

  if ( *(float *)&a5 == 0.0 )
  {
    *a2 = 0;
    *a1 = 0;
  }
  else if ( EFLOAT::bIsZero(a3) )
  {
    *a1 = v12 / 2;
    *a2 = v12 - v12 / 2;
  }
  else
  {
    v13 = a7;
    v14 = a6;
    if ( a7 == a6 )
    {
      v13 = a8 / -4;
      v14 = a8 / -4 + a8 / 2;
    }
    v15 = 0;
    if ( v13 < 0 )
      v15 = v13;
    v16 = 0;
    if ( v14 > 0 )
      v16 = v14;
    v17 = -v15;
    if ( *(float *)a3 >= 0.0 )
      v17 = v16;
    v18 = a8 / 16 + v17;
    if ( !v18 )
      v18 = 1;
    if ( EFLOAT::bIsZero(a4) )
    {
      *a2 = v18;
      *a1 = -v19;
    }
    else
    {
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v19) * (float)(*(float *)a3 / (float)v19))
                    + (float)((float)(*(float *)a4 / (float)((float)v20 * 0.5))
                            * (float)(*(float *)a4 / (float)((float)v20 * 0.5)));
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(1.0 / *(float *)&a5, a1, 6u);
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v18) * (float)(*(float *)a3 / (float)v18)) + v21;
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(1.0 / *(float *)&a5, a2, 6u);
    }
  }
}
