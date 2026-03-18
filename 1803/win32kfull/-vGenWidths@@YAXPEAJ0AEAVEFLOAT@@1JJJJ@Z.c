/*
 * XREFs of ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C028D348
 * Callers:
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C028C730 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C028CC4C (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 * Callees:
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0002FD0 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

void __fastcall vGenWidths(int *a1, int *a2, struct EFLOAT *a3, struct EFLOAT *a4, int a5, int a6, int a7, int a8)
{
  int v11; // r10d
  EFLOAT *v12; // r11
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // ebx
  int v18; // ebx
  int v19; // r8d
  int v20; // r10d
  float *v21; // r11
  float v22; // xmm4_4

  if ( *(float *)&a5 == 0.0 )
  {
    *a2 = 0;
    *a1 = 0;
  }
  else if ( EFLOAT::bIsZero(a3) )
  {
    *a1 = v11 / 2;
    *a2 = v11 - v11 / 2;
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
    if ( *(float *)a3 >= 0.0 )
      v17 = v16;
    else
      v17 = -v15;
    v18 = a8 / 16 + v17;
    if ( !v18 )
      v18 = 1;
    if ( EFLOAT::bIsZero(v12) )
    {
      *a2 = v18;
      *a1 = -v19;
    }
    else
    {
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v19) * (float)(*(float *)a3 / (float)v19))
                    + (float)((float)(*v21 / (float)((float)v20 * 0.5)) * (float)(*v21 / (float)((float)v20 * 0.5)));
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(1.0 / *(float *)&a5, a1, 6);
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v18) * (float)(*(float *)a3 / (float)v18)) + v22;
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(1.0 / *(float *)&a5, a2, 6);
    }
  }
}
