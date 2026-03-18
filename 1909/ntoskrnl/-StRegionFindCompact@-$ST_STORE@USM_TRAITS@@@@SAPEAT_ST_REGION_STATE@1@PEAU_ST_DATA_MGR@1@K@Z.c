/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140152A4C
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140151E20 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14015AB48 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

unsigned __int16 *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  int v2; // ebp
  unsigned int v3; // edx
  __int64 v4; // r9
  unsigned int v5; // r15d
  __int64 v6; // r8
  __int64 v7; // r13
  unsigned __int16 *v8; // rsi
  unsigned __int16 *v9; // r12
  unsigned __int16 *v10; // rbp
  unsigned int v11; // ebx
  unsigned __int16 *v12; // rcx
  int v13; // edi
  unsigned __int16 *v14; // r10
  unsigned int v15; // r11d
  int v16; // eax
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // cx
  unsigned __int16 *result; // rax
  int v20; // edx
  unsigned int v21; // ebx
  const signed __int32 *v22; // r14
  unsigned int v23; // r11d
  const signed __int32 *v24; // rdi
  const signed __int32 *v25; // r10
  __int64 v26; // rbp
  __int64 v27; // rbx
  const signed __int32 *v28; // r10
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // edi
  unsigned __int16 *v32; // r10
  int v33; // r11d
  int IsRegionBusy; // eax
  int v35; // eax
  _WORD v36[36]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6552LL) )
  {
    v6 = 0LL;
    v5 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 1092);
    v6 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  }
  v7 = *(unsigned int *)(a1 + 856);
  v8 = v36;
  v9 = *(unsigned __int16 **)(a1 + 1032);
  v36[0] = (*(_WORD *)(a1 + 816) - *(_WORD *)(a1 + 820) + 1) & 0x1FFF;
  if ( *(_DWORD *)(a1 + 1088) && (_DWORD)v6 )
  {
    v21 = 0;
    while ( 1 )
    {
LABEL_29:
      v6 = *(unsigned int *)(v4 + 1072);
      if ( (unsigned int)v6 <= v21 )
        break;
      v22 = *(const signed __int32 **)(v4 + 1080);
      v23 = v21;
      v24 = &v22[(unsigned __int64)(unsigned int)(v6 - 1) >> 5];
      v25 = &v22[(unsigned __int64)v21 >> 5];
      if ( v25 != v24 )
      {
        v26 = v21 & 0x1F;
        if ( (*v25 | dword_14037C900[v26]) == -1 )
        {
          v23 = v21 - v26 + 32;
          for ( ++v25; v25 < v24 && *v25 == -1; ++v25 )
            v23 += 32;
        }
        v2 = a2;
        v3 = 0;
      }
      while ( v23 < (unsigned int)v6 && _bittest(v22, v23) )
        ++v23;
      v6 = 0LL;
      if ( v25 != v24 )
      {
        v27 = v23 & 0x1F;
        if ( (*v25 & ~dword_14037C900[v27]) != 0 )
        {
          v3 = 0;
        }
        else
        {
          v6 = (unsigned int)(32 - v27);
          v3 = 0;
          if ( (_DWORD)v6 == -1 )
            goto LABEL_54;
          v28 = v25 + 1;
          while ( v28 < v24 && !*v28 )
          {
            ++v28;
            v6 = (unsigned int)(v6 + 32);
            if ( (_DWORD)v6 == -1 )
              goto LABEL_54;
          }
        }
      }
      v29 = *(_DWORD *)(v4 + 1072);
      v30 = v6 + v23;
      if ( (unsigned int)v6 + v23 < v29 )
      {
        do
        {
          if ( _bittest(*(const signed __int32 **)(v4 + 1080), v30) )
            break;
          if ( (_DWORD)v6 == -1 )
            break;
          ++v30;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( v30 < v29 );
        v3 = 0;
      }
LABEL_54:
      v21 = v23;
      if ( !(_DWORD)v6 )
        break;
      v31 = v6 + v23;
      v32 = &v9[v23];
      if ( v23 < (unsigned int)v6 + v23 )
      {
        v33 = *(_DWORD *)(v4 + 776);
        while ( 1 )
        {
          if ( (v33 & 0x40000) == 0
            || (IsRegionBusy = SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(v4 + 800), v21, v6, v4),
                v3 = 0,
                !IsRegionBusy) )
          {
            v35 = (_BYTE)v33 ? 0 : *v32 >> 13;
            if ( v35 == v2 )
              break;
          }
          ++v21;
          ++v32;
          if ( v21 >= v31 )
            goto LABEL_29;
        }
        v8 = v32;
LABEL_20:
        result = v8;
        v20 = v8 - v9 + 1;
        if ( v20 == *(_DWORD *)(v4 + 856) )
          v20 = 0;
        *(_DWORD *)(v4 + 1092) = v20;
        return result;
      }
    }
  }
  v10 = &v9[v7];
  v11 = 0;
  v12 = &v9[v5];
  if ( !(_DWORD)v7 )
    return 0LL;
  v13 = *(_DWORD *)(v4 + 776);
  do
  {
    v14 = v9;
    if ( v12 < v10 )
      v14 = v12;
    v15 = v12 < v10 ? v5 : 0;
    if ( (v13 & 0x40000) == 0
      || (v16 = SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(v4 + 800), v15, v6, v4), v3 = 0, !v16) )
    {
      v17 = *v14;
      if ( !(_BYTE)v13 )
        v3 = v17 >> 13;
      v6 = 0x1FFFLL;
      v18 = v17 & 0x1FFF;
      if ( v18 >= (unsigned __int16)(*v8 & 0x1FFF) )
        goto LABEL_13;
      if ( v3 != a2 )
      {
        v6 = 0LL;
        if ( !v18 && v14 != &v9[*(unsigned int *)(v4 + 16 * (v3 + 78LL))] )
        {
          v8 = v14;
          goto LABEL_20;
        }
LABEL_13:
        v3 = 0;
        goto LABEL_14;
      }
      v3 = 0;
      v8 = v14;
      if ( !v18 )
        goto LABEL_20;
    }
LABEL_14:
    ++v11;
    v12 = v14 + 1;
    v5 = v15 + 1;
  }
  while ( v11 < (unsigned int)v7 );
  if ( v8 != v36 )
    goto LABEL_20;
  return 0LL;
}
