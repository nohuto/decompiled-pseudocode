/*
 * XREFs of ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0001BD4
 * Callers:
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0001B30 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CDB90 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CDD10 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CDF40 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CE100 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CE340 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdvXDDA(struct _PLGDDA *a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // r9d
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // r9d
  unsigned int v34; // r9d
  int v35; // eax
  int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // r9d
  int v39; // eax
  int v40; // edx
  unsigned int v41; // ecx

  v2 = *((_DWORD *)a1 + 33);
  *((_DWORD *)a1 + 18) += *((_DWORD *)a1 + 34);
  v3 = *((_DWORD *)a1 + 17) + v2;
  v4 = *((_DWORD *)a1 + 18);
  v5 = *((_DWORD *)a1 + 35);
  *((_DWORD *)a1 + 17) = v3;
  if ( v4 >= v5 )
  {
    v27 = *((_DWORD *)a1 + 95);
    v28 = v4 - v5;
    v29 = *((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 18) = v28;
    *((_DWORD *)a1 + 17) = v3 + 1;
    *((_DWORD *)a1 + 26) += *((_DWORD *)a1 + 94);
    v30 = *((_DWORD *)a1 + 26);
    *((_DWORD *)a1 + 25) = v29;
    if ( v30 >= v27 )
    {
      *((_DWORD *)a1 + 25) = v29 + 1;
      *((_DWORD *)a1 + 26) = v30 - v27;
    }
    v31 = *((_DWORD *)a1 + 27) + *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 28) += *((_DWORD *)a1 + 97);
    v32 = *((_DWORD *)a1 + 28);
    v33 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 27) = v31;
    if ( v32 >= v33 )
    {
      *((_DWORD *)a1 + 27) = v31 + 1;
      *((_DWORD *)a1 + 28) = v32 - v33;
    }
  }
  *((_DWORD *)a1 + 20) += *((_DWORD *)a1 + 37);
  v6 = *((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 36);
  v7 = *((_DWORD *)a1 + 20);
  v8 = *((_DWORD *)a1 + 38);
  *((_DWORD *)a1 + 19) = v6;
  if ( v7 >= v8 )
  {
    v34 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 20) = v7 - v8;
    v35 = v6 + 1;
    v36 = *((_DWORD *)a1 + 29) + *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 19) = v35;
    *((_DWORD *)a1 + 30) += *((_DWORD *)a1 + 97);
    v37 = *((_DWORD *)a1 + 30);
    *((_DWORD *)a1 + 29) = v36;
    if ( v37 >= v34 )
    {
      *((_DWORD *)a1 + 29) = v36 + 1;
      *((_DWORD *)a1 + 30) = v37 - v34;
    }
  }
  *((_DWORD *)a1 + 22) += *((_DWORD *)a1 + 40);
  v9 = *((_DWORD *)a1 + 21) + *((_DWORD *)a1 + 39);
  v10 = *((_DWORD *)a1 + 22);
  v11 = *((_DWORD *)a1 + 41);
  *((_DWORD *)a1 + 21) = v9;
  if ( v10 >= v11 )
  {
    v38 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 22) = v10 - v11;
    v39 = v9 + 1;
    v40 = *((_DWORD *)a1 + 31) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 21) = v39;
    *((_DWORD *)a1 + 32) += *((_DWORD *)a1 + 94);
    v41 = *((_DWORD *)a1 + 32);
    *((_DWORD *)a1 + 31) = v40;
    if ( v41 >= v38 )
    {
      *((_DWORD *)a1 + 31) = v40 + 1;
      *((_DWORD *)a1 + 32) = v41 - v38;
    }
  }
  v12 = *((_DWORD *)a1 + 23) + *((_DWORD *)a1 + 42);
  *((_DWORD *)a1 + 24) += *((_DWORD *)a1 + 43);
  v13 = *((_DWORD *)a1 + 24);
  v14 = *((_DWORD *)a1 + 44);
  *((_DWORD *)a1 + 23) = v12;
  if ( v13 >= v14 )
  {
    *((_DWORD *)a1 + 23) = v12 + 1;
    *((_DWORD *)a1 + 24) = v13 - v14;
  }
  v15 = *((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 57);
  *((_DWORD *)a1 + 26) += *((_DWORD *)a1 + 58);
  v16 = *((_DWORD *)a1 + 26);
  v17 = *((_DWORD *)a1 + 59);
  *((_DWORD *)a1 + 25) = v15;
  if ( v16 >= v17 )
  {
    *((_DWORD *)a1 + 25) = v15 + 1;
    *((_DWORD *)a1 + 26) = v16 - v17;
  }
  v18 = *((_DWORD *)a1 + 27) + *((_DWORD *)a1 + 60);
  *((_DWORD *)a1 + 28) += *((_DWORD *)a1 + 61);
  v19 = *((_DWORD *)a1 + 28);
  v20 = *((_DWORD *)a1 + 62);
  *((_DWORD *)a1 + 27) = v18;
  if ( v19 >= v20 )
  {
    *((_DWORD *)a1 + 27) = v18 + 1;
    *((_DWORD *)a1 + 28) = v19 - v20;
  }
  v21 = *((_DWORD *)a1 + 29) + *((_DWORD *)a1 + 63);
  *((_DWORD *)a1 + 30) += *((_DWORD *)a1 + 64);
  v22 = *((_DWORD *)a1 + 30);
  v23 = *((_DWORD *)a1 + 65);
  *((_DWORD *)a1 + 29) = v21;
  if ( v22 >= v23 )
  {
    *((_DWORD *)a1 + 29) = v21 + 1;
    *((_DWORD *)a1 + 30) = v22 - v23;
  }
  v24 = *((_DWORD *)a1 + 31) + *((_DWORD *)a1 + 66);
  *((_DWORD *)a1 + 32) += *((_DWORD *)a1 + 67);
  v25 = *((_DWORD *)a1 + 32);
  v26 = *((_DWORD *)a1 + 68);
  *((_DWORD *)a1 + 31) = v24;
  if ( v25 >= v26 )
  {
    *((_DWORD *)a1 + 31) = v24 + 1;
    *((_DWORD *)a1 + 32) = v25 - v26;
  }
}
