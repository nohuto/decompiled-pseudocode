/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02BB20C
 * Callers:
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BA740 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BA8D0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BAB00 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BACB0 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BAE40 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BB080 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  __int64 v3; // rcx
  __int64 v5; // r11
  int v6; // r10d
  int v7; // r8d
  __int64 v8; // rax
  _DWORD *v9; // rdx
  unsigned int v10; // edi
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
  int v23; // eax
  unsigned int v24; // r11d
  unsigned int v25; // edi
  int v26; // r11d
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // r10d
  int v31; // r8d
  __int64 v33; // [rsp+50h] [rbp+50h]
  __int64 v34; // [rsp+60h] [rbp+60h]

  v3 = *(_QWORD *)((char *)a1 + 100);
  v5 = *(_QWORD *)((char *)a1 + 108);
  v6 = *((_DWORD *)a1 + 17);
  v7 = v5;
  v33 = *(_QWORD *)((char *)a1 + 116);
  v8 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v6;
  v9 = (_DWORD *)((char *)a2 + 12);
  v10 = HIDWORD(v5);
  v34 = v8;
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
  v19 = HIDWORD(v33);
  v20 = v33;
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
    if ( v10 >= v24 )
    {
      ++v7;
      v10 -= v24;
      v23 = v7;
    }
    v9 += 2;
    LODWORD(v5) = v23;
    ++v6;
  }
  if ( v6 < *((_DWORD *)a1 + 23) )
  {
    v25 = HIDWORD(v34);
    v26 = v34;
    do
    {
      if ( v20 >= v26 )
      {
        *v9 = v26;
        v27 = v20 - v26;
      }
      else
      {
        *v9 = v20;
        v27 = v26 - v20;
      }
      v9[1] = v27;
      ++*((_DWORD *)a2 + 2);
      v20 += *((_DWORD *)a1 + 87);
      v19 += *((_DWORD *)a1 + 88);
      v28 = *((_DWORD *)a1 + 89);
      if ( v19 >= v28 )
      {
        ++v20;
        v19 -= v28;
      }
      v26 += *((_DWORD *)a1 + 90);
      v25 += *((_DWORD *)a1 + 91);
      v29 = *((_DWORD *)a1 + 92);
      if ( v25 >= v29 )
      {
        ++v26;
        v25 -= v29;
      }
      v9 += 2;
      ++v6;
    }
    while ( v6 < *((_DWORD *)a1 + 23) );
  }
  v30 = v6 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v30;
  if ( *(_DWORD *)a1 && !v30 )
  {
    if ( v20 >= v7 )
    {
      *v9 = v7;
      v31 = v20 - v7;
    }
    else
    {
      *v9 = v20;
      v31 = v7 - v20;
    }
    v9[1] = v31;
    v9 += 2;
    *((_DWORD *)a2 + 2) = 1;
  }
  return (struct _PLGRUN *)v9;
}
