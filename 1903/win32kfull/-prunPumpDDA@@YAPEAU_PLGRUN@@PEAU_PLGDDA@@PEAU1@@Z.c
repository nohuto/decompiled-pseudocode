/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0001E8C
 * Callers:
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0001B30 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CE040 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CE1C0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CE3F0 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CE5B0 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CE7F0 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  int v2; // r10d
  _DWORD *v3; // r8
  unsigned int v6; // r11d
  __int64 v7; // rax
  bool v8; // cc
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // r10d
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v18; // edx
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // esi
  int v23; // r11d
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  __int64 v28; // [rsp+28h] [rbp+28h]
  __int64 v29; // [rsp+30h] [rbp+30h]
  __int64 v30; // [rsp+38h] [rbp+38h]
  __int64 v31; // [rsp+40h] [rbp+40h]

  v2 = *((_DWORD *)a1 + 17);
  v3 = (_DWORD *)((char *)a2 + 12);
  v30 = *(_QWORD *)((char *)a1 + 100);
  v28 = *(_QWORD *)((char *)a1 + 108);
  v6 = HIDWORD(v28);
  v29 = *(_QWORD *)((char *)a1 + 116);
  v7 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v2;
  v8 = v2 < *((_DWORD *)a1 + 19);
  v9 = v28;
  v31 = v7;
  if ( v8 )
  {
    v17 = HIDWORD(v30);
    v18 = v30;
    do
    {
      if ( v18 < v9 )
      {
        *v3 = v18;
        v19 = v9 - v18;
      }
      else
      {
        *v3 = v9;
        v19 = v18 - v9;
      }
      v3[1] = v19;
      ++*((_DWORD *)a2 + 2);
      v18 += *((_DWORD *)a1 + 81);
      v17 += *((_DWORD *)a1 + 82);
      v20 = *((_DWORD *)a1 + 83);
      if ( v17 >= v20 )
      {
        ++v18;
        v17 -= v20;
      }
      v9 += *((_DWORD *)a1 + 84);
      v6 += *((_DWORD *)a1 + 85);
      v21 = *((_DWORD *)a1 + 86);
      if ( v6 >= v21 )
      {
        ++v9;
        v6 -= v21;
      }
      v3 += 2;
      ++v2;
    }
    while ( v2 < *((_DWORD *)a1 + 19) );
  }
  v10 = HIDWORD(v29);
  v11 = v29;
  while ( v2 < *((_DWORD *)a1 + 21) )
  {
    if ( v11 < v9 )
    {
      *v3 = v11;
      v14 = v9 - v11;
    }
    else
    {
      *v3 = v9;
      v14 = v11 - v9;
    }
    v3[1] = v14;
    ++*((_DWORD *)a2 + 2);
    v11 += *((_DWORD *)a1 + 87);
    v10 += *((_DWORD *)a1 + 88);
    v15 = *((_DWORD *)a1 + 89);
    if ( v10 >= v15 )
    {
      ++v11;
      v10 -= v15;
    }
    v9 += *((_DWORD *)a1 + 84);
    v6 += *((_DWORD *)a1 + 85);
    v16 = *((_DWORD *)a1 + 86);
    if ( v6 >= v16 )
    {
      ++v9;
      v6 -= v16;
    }
    v3 += 2;
    ++v2;
  }
  if ( v2 < *((_DWORD *)a1 + 23) )
  {
    v22 = HIDWORD(v31);
    v23 = v31;
    do
    {
      if ( v11 < v23 )
      {
        *v3 = v11;
        v24 = v23 - v11;
      }
      else
      {
        *v3 = v23;
        v24 = v11 - v23;
      }
      v3[1] = v24;
      ++*((_DWORD *)a2 + 2);
      v11 += *((_DWORD *)a1 + 87);
      v10 += *((_DWORD *)a1 + 88);
      v25 = *((_DWORD *)a1 + 89);
      if ( v10 >= v25 )
      {
        ++v11;
        v10 -= v25;
      }
      v23 += *((_DWORD *)a1 + 90);
      v22 += *((_DWORD *)a1 + 91);
      v26 = *((_DWORD *)a1 + 92);
      if ( v22 >= v26 )
      {
        ++v23;
        v22 -= v26;
      }
      v3 += 2;
      ++v2;
    }
    while ( v2 < *((_DWORD *)a1 + 23) );
  }
  v12 = v2 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v12;
  if ( *(_DWORD *)a1 && !v12 )
  {
    if ( v11 >= v9 )
    {
      *v3 = v9;
      v27 = v11 - v9;
    }
    else
    {
      *v3 = v11;
      v27 = v9 - v11;
    }
    v3[1] = v27;
    v3 += 2;
    *((_DWORD *)a2 + 2) = 1;
  }
  return (struct _PLGRUN *)v3;
}
