/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02A8FEC
 * Callers:
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A8510 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A86A0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A88D0 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A8A90 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A8C20 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A8E60 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  __int64 v3; // rcx
  __int64 v5; // r11
  int v6; // r10d
  int v7; // r9d
  __int64 v8; // rax
  _DWORD *v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // ebx
  int v13; // r11d
  unsigned int v14; // eax
  int v15; // r15d
  unsigned int v16; // r12d
  unsigned int v17; // r13d
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // ecx
  int v21; // r11d
  unsigned int v22; // eax
  int v23; // r12d
  unsigned int v24; // r11d
  int v25; // r15d
  unsigned int v26; // r14d
  int v27; // eax
  unsigned int v28; // esi
  int v29; // r11d
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // r10d
  int v34; // r9d
  __int64 v36; // [rsp+50h] [rbp+50h]
  __int64 v37; // [rsp+60h] [rbp+60h]

  v3 = *(_QWORD *)((char *)a1 + 100);
  v5 = *(_QWORD *)((char *)a1 + 108);
  v6 = *((_DWORD *)a1 + 17);
  v7 = v5;
  v36 = *(_QWORD *)((char *)a1 + 116);
  v8 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v6;
  v9 = (_DWORD *)((char *)a2 + 12);
  v10 = HIDWORD(v5);
  v37 = v8;
  if ( v6 < *((_DWORD *)a1 + 19) )
  {
    v11 = HIDWORD(v3);
    v12 = v3;
    do
    {
      if ( v12 >= v7 )
      {
        *v9 = v7;
        v13 = v3 - v5;
      }
      else
      {
        *v9 = v12;
        v13 = v5 - v3;
      }
      v9[1] = v13;
      ++*((_DWORD *)a2 + 2);
      v12 += *((_DWORD *)a1 + 81);
      v11 += *((_DWORD *)a1 + 82);
      LODWORD(v3) = v12;
      v14 = *((_DWORD *)a1 + 83);
      if ( v11 >= v14 )
      {
        ++v12;
        v11 -= v14;
        LODWORD(v3) = v12;
      }
      v7 += *((_DWORD *)a1 + 84);
      v10 += *((_DWORD *)a1 + 85);
      v15 = v7;
      v16 = *((_DWORD *)a1 + 86);
      v17 = v10;
      if ( v10 >= v16 )
      {
        ++v7;
        v10 -= v16;
      }
      LODWORD(v5) = v7;
      v18 = v15 + 1;
      if ( v17 < v16 )
        v18 = v15;
      v9 += 2;
      ++v6;
    }
    while ( v6 < *((_DWORD *)a1 + 19) );
    LODWORD(v5) = v18;
  }
  v19 = HIDWORD(v36);
  v20 = v36;
  while ( v6 < *((_DWORD *)a1 + 21) )
  {
    if ( v20 >= v7 )
    {
      *v9 = v7;
      v21 = v20 - v5;
    }
    else
    {
      *v9 = v20;
      v21 = v5 - v20;
    }
    v9[1] = v21;
    ++*((_DWORD *)a2 + 2);
    v20 += *((_DWORD *)a1 + 87);
    v19 += *((_DWORD *)a1 + 88);
    v22 = *((_DWORD *)a1 + 89);
    if ( v19 >= v22 )
    {
      ++v20;
      v19 -= v22;
    }
    v7 += *((_DWORD *)a1 + 84);
    v10 += *((_DWORD *)a1 + 85);
    v23 = v7;
    v24 = *((_DWORD *)a1 + 86);
    v25 = v7;
    v26 = v10;
    if ( v10 >= v24 )
    {
      ++v7;
      v10 -= v24;
    }
    v9 += 2;
    v27 = v25 + 1;
    ++v6;
    if ( v26 < v24 )
      v27 = v23;
    LODWORD(v5) = v27;
  }
  if ( v6 < *((_DWORD *)a1 + 23) )
  {
    v28 = HIDWORD(v37);
    v29 = v37;
    do
    {
      if ( v20 >= v29 )
      {
        *v9 = v29;
        v30 = v20 - v29;
      }
      else
      {
        *v9 = v20;
        v30 = v29 - v20;
      }
      v9[1] = v30;
      ++*((_DWORD *)a2 + 2);
      v20 += *((_DWORD *)a1 + 87);
      v19 += *((_DWORD *)a1 + 88);
      v31 = *((_DWORD *)a1 + 89);
      if ( v19 >= v31 )
      {
        ++v20;
        v19 -= v31;
      }
      v29 += *((_DWORD *)a1 + 90);
      v28 += *((_DWORD *)a1 + 91);
      v32 = *((_DWORD *)a1 + 92);
      if ( v28 >= v32 )
      {
        ++v29;
        v28 -= v32;
      }
      v9 += 2;
      ++v6;
    }
    while ( v6 < *((_DWORD *)a1 + 23) );
  }
  v33 = v6 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v33;
  if ( *(_DWORD *)a1 && !v33 )
  {
    if ( v20 >= v7 )
    {
      *v9 = v7;
      v34 = v20 - v7;
    }
    else
    {
      *v9 = v20;
      v34 = v7 - v20;
    }
    v9[1] = v34;
    v9 += 2;
    *((_DWORD *)a2 + 2) = 1;
  }
  return (struct _PLGRUN *)v9;
}
