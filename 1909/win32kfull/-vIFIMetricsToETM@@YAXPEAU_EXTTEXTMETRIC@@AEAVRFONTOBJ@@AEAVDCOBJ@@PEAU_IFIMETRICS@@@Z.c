/*
 * XREFs of ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0159074
 * Callers:
 *     NtGdiGetETM @ 0x1C0158E00 (NtGdiGetETM.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0098194 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C009DF28 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009E040 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C00F2DD0 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall vIFIMetricsToETM(
        struct _EXTTEXTMETRIC *a1,
        struct RFONTOBJ *a2,
        struct DCOBJ *a3,
        struct _IFIMETRICS *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int16 v19; // ax
  int v20; // [rsp+20h] [rbp-69h] BYREF
  __int64 v21; // [rsp+28h] [rbp-61h] BYREF
  float v22; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v24[5]; // [rsp+50h] [rbp-39h] BYREF
  int v25; // [rsp+7Ch] [rbp-Dh]

  IFIOBJR::IFIOBJR((IFIOBJR *)v24, a4, a2, a3);
  v10 = v24[0];
  *(_WORD *)a1 = 52;
  v11 = (*(_DWORD *)(*(_QWORD *)a2 + 324LL) + 8) >> 4;
  if ( (*(_DWORD *)(v10 + 48) & 0x3000010) != 0 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a2 + 380LL);
    if ( v12 == 0x80000000 )
    {
      memset(v24, 0, 0x24uLL);
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v23, (struct MATRIX *)v24, 8);
      RFONTOBJ::vSetNotionalToDevice(a2, (struct EXFORMOBJ *)v23);
      v13 = *(__int16 *)(v10 + 56);
      LODWORD(v21) = 0;
      *((float *)&v21 + 1) = (float)v13;
      if ( (*(_DWORD *)(v23[0] + 32LL) & 2) == 0 )
        EXFORMOBJ::bXform((EXFORMOBJ *)v23, (struct VECTORFL *)&v21, (struct VECTORFL *)&v21, 1uLL);
      v22 = 0.0;
      EFLOAT::eqLength(&v22, &v20, &v21);
      v20 = 0;
      bFToL(v22, &v20, 0);
      v14 = v20;
    }
    else
    {
      v14 = v11 - v12;
    }
  }
  else
  {
    v14 = v11 - v25;
  }
  v21 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  v15 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v21, v8, v9);
  v16 = v15;
  v17 = v15 / 2 + 72LL * v14;
  if ( v17 > 0x7FFFFFFF )
    v18 = v17 / v16;
  else
    LODWORD(v18) = (int)v17 / (int)v16;
  *((_WORD *)a1 + 2) = 0;
  *((_WORD *)a1 + 1) = 20 * v18;
  *((_WORD *)a1 + 3) = *(_WORD *)(v10 + 56);
  *((_WORD *)a1 + 4) = *(_WORD *)(v10 + 58);
  *((_WORD *)a1 + 5) = 0x4000;
  *((_WORD *)a1 + 6) = *(_WORD *)(v10 + 56);
  *((_WORD *)a1 + 7) = *(_WORD *)(v10 + 70);
  *((_WORD *)a1 + 8) = *(_WORD *)(v10 + 82);
  *((_WORD *)a1 + 9) = *(_WORD *)(v10 + 70);
  *((_WORD *)a1 + 10) = -*(_WORD *)(v10 + 72);
  *((_WORD *)a1 + 11) = -*(_WORD *)(v10 + 32);
  *((_WORD *)a1 + 12) = *(_WORD *)(v10 + 98);
  *((_WORD *)a1 + 13) = *(_WORD *)(v10 + 90);
  *((_WORD *)a1 + 14) = *(_WORD *)(v10 + 94);
  *((_WORD *)a1 + 15) = *(_WORD *)(v10 + 86);
  *((_WORD *)a1 + 16) = *(_WORD *)(v10 + 102);
  *((_WORD *)a1 + 17) = *(_WORD *)(v10 + 100);
  *((_WORD *)a1 + 18) = *(__int16 *)(v10 + 102) >> 1;
  *((_WORD *)a1 + 19) = *(_WORD *)(v10 + 102);
  v19 = *(__int16 *)(v10 + 100) >> 1;
  *((_WORD *)a1 + 21) = v19;
  *((_WORD *)a1 + 20) = v19;
  *((_WORD *)a1 + 22) = *(_WORD *)(v10 + 106);
  *((_WORD *)a1 + 23) = *(_WORD *)(v10 + 104);
  *((_DWORD *)a1 + 12) = LOWORD(a4->cKerningPairs);
}
