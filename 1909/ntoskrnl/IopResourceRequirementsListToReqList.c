/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x140753710
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1401899A8 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140723C70 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140752E50 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x140875D60 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x14087D198 (IopQueryConflictListInternal.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     IopFreeReqList @ 0x140752F80 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x140752FD8 (IopFreeReqAlternative.c)
 *     IopSetupArbiterAndTranslators @ 0x140753CD0 (IopSetupArbiterAndTranslators.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r15
  unsigned int v3; // edi
  unsigned __int64 v4; // rsi
  unsigned int *v5; // r14
  int v6; // r11d
  unsigned int *v7; // r9
  int v8; // edx
  int v9; // ebp
  unsigned __int64 v10; // r8
  __int64 v11; // r10
  char v12; // bl
  unsigned int *v13; // r10
  unsigned int *v14; // rcx
  char v15; // r9
  int v16; // edi
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // r15d
  unsigned __int64 v20; // r13
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  signed int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int v27; // edx
  signed int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // ecx
  unsigned int v31; // r12d
  _QWORD *PoolWithTag; // rax
  _QWORD *v33; // rsi
  unsigned int *v34; // r12
  __int64 *v35; // rbx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // ebp
  int *v39; // rdx
  __int64 v40; // r13
  unsigned int *v41; // rbx
  __int64 v42; // r14
  _QWORD *v43; // r10
  int *v44; // rax
  int v45; // ecx
  _QWORD *v46; // rax
  int i; // edx
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // al
  bool v52; // zf
  char v53; // al
  unsigned int v54; // eax
  __int64 v55; // r8
  int v56; // edi
  bool v57; // zf
  unsigned __int64 v59; // rcx
  int v60; // r9d
  unsigned int v61; // [rsp+20h] [rbp-88h]
  int v62; // [rsp+24h] [rbp-84h]
  int v63; // [rsp+28h] [rbp-80h]
  __int64 *v64; // [rsp+30h] [rbp-78h]
  __int64 v65; // [rsp+38h] [rbp-70h]
  int v66; // [rsp+40h] [rbp-68h]
  __int64 v67; // [rsp+48h] [rbp-60h]
  _QWORD *v68; // [rsp+50h] [rbp-58h]
  __int64 *v69; // [rsp+58h] [rbp-50h]
  int v72; // [rsp+C0h] [rbp+18h]
  unsigned int *v73; // [rsp+C8h] [rbp+20h]
  int v74; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v72 = 0;
  v73 = v2;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = (unsigned __int64)v2 + *v2;
  v5 = v2 + 8;
  v6 = v3 - 1;
  v7 = v2 + 8;
  v8 = 0;
  v9 = 0;
  if ( (int)(v3 - 1) >= 0 )
  {
    while ( 1 )
    {
      v10 = (unsigned __int64)&v7[8 * v7[1] + 2];
      if ( v7 + 2 == (unsigned int *)v10 )
        return 0LL;
      if ( (unsigned __int64)(v7 + 2) > v10 || (unsigned __int64)(v7 + 2) > v4 || v10 > v4 )
        return 3221225485LL;
      v11 = 10LL;
      if ( *((_BYTE *)v7 + 9) != 0x80 )
        v11 = 2LL;
      v12 = 1;
      v13 = &v7[v11];
      if ( (unsigned __int64)v13 < v10 )
        break;
LABEL_18:
      --v6;
      v7 = (unsigned int *)v10;
      if ( v6 < 0 )
      {
        v3 = v2[7];
        goto LABEL_20;
      }
    }
    v14 = v13;
    while ( 1 )
    {
      v15 = *((_BYTE *)v14 + 1);
      v16 = v8;
      if ( (unsigned __int8)v15 == 128 )
        return 3221225485LL;
      if ( *((unsigned __int8 *)v14 + 1) == 129 )
        break;
      v17 = ++v8;
      if ( v15 <= 0 )
      {
        *(_BYTE *)v14 = 1;
        v8 = v16;
        v14 += 8;
        if ( v15 != -16 )
          v8 = v17;
LABEL_47:
        v12 = 1;
        goto LABEL_17;
      }
      if ( (*(_BYTE *)v14 & 8) != 0 )
      {
        if ( v12 )
          return 3221225485LL;
        ++v9;
      }
      else
      {
        v12 = 0;
      }
      v14 += 8;
LABEL_17:
      if ( (unsigned __int64)v14 >= v10 )
        goto LABEL_18;
    }
    while ( (unsigned __int64)v14 < v10 && *((_BYTE *)v14 + 1) == 0x81 )
    {
      if ( v14 == v13 )
        return 3221225485LL;
      ++v8;
      v14 += 8;
    }
    goto LABEL_47;
  }
LABEL_20:
  v18 = v8 - v9;
  v19 = -1073741823;
  v20 = 296LL * v18;
  if ( v20 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( v18 <= 1 )
  {
    v22 = 0;
    v24 = 0;
  }
  else
  {
    v21 = v18 - 1;
    v22 = -1;
    v23 = 8 * v21;
    if ( v23 <= 0xFFFFFFFF )
      v22 = v23;
    v24 = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  if ( v24 < 0 )
    return 2147483653LL;
  if ( v22 + 32 < v22 )
    return 2147483653LL;
  v25 = v3 * (unsigned __int64)(v22 + 32);
  if ( v25 > 0xFFFFFFFF )
    return 2147483653LL;
  v26 = (unsigned int)v25;
  if ( v3 > 1 )
  {
    v27 = -1;
    v59 = 8LL * (v3 - 1);
    if ( v59 <= 0xFFFFFFFF )
      v27 = 8 * (v3 - 1);
    v28 = v59 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  else
  {
    v27 = 0;
    v28 = 0;
  }
  if ( v28 < 0 )
    return 2147483653LL;
  if ( v27 + 48 < v27 )
    return 2147483653LL;
  v29 = v27 + 48;
  v30 = v27 + 48 + v26;
  if ( v29 + (unsigned int)v26 < v29 || v30 + (unsigned int)v20 < v30 )
    return 2147483653LL;
  v31 = v30 + v20;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30 + (unsigned int)v20, 0x20207050u);
  v33 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v31);
  v65 = (__int64)v33 + v29;
  memset((void *)v65, 0, (unsigned int)v26);
  v67 = v65 + v26;
  memset((void *)(v65 + v26), 0, (unsigned int)v20);
  v34 = v73;
  v35 = v33 + 5;
  v64 = v33 + 5;
  v36 = v73[1];
  if ( v36 == -1 )
    v36 = 1;
  v37 = v73[2];
  v33[2] = 0LL;
  v61 = v37;
  v33[1] = a1;
  *((_DWORD *)v33 + 1) = v37;
  v74 = v36;
  *((_DWORD *)v33 + 8) = v3;
  *(_DWORD *)v33 = v36;
  memset(v33 + 5, 0, 8LL * v3);
  v38 = 0;
  v63 = v3 - 1;
  if ( (int)(v3 - 1) < 0 )
    goto LABEL_69;
  do
  {
    v39 = (int *)v65;
    v69 = v35;
    v40 = v65;
    v41 = v5 + 2;
    v66 = v38;
    v42 = v5[1];
    v43 = (_QWORD *)(v65 + 24);
    *v64 = v65;
    *(_DWORD *)(v65 + 16) = v38;
    v5 = &v41[8 * v42];
    ++v38;
    *(_QWORD *)(v65 + 8) = v33;
    *(_DWORD *)(v65 + 20) = 0;
    v65 += 24LL;
    ++v64;
    if ( *((_BYTE *)v41 + 1) == 0x80 )
    {
      v44 = (int *)(v41 + 2);
      v41 += 8;
      v45 = *v44;
    }
    else
    {
      v45 = 12288;
    }
    *v39 = v45;
    v46 = v43;
    for ( i = 0; ; i = v62 )
    {
      while ( 1 )
      {
        if ( v41 >= v5 )
        {
          v35 = v64;
          goto LABEL_68;
        }
        if ( *((_BYTE *)v41 + 1) != 0xF0 )
          break;
        v60 = v41[2];
        if ( v60 == -1 )
          v60 = 1;
        v61 = v41[3];
        v74 = v60;
LABEL_51:
        v41 += 8;
      }
      ++*(_DWORD *)(v40 + 20);
      v49 = v67;
      v50 = v67;
      *v46 = v67;
      v67 += 296LL;
      v68 = v46 + 1;
      *(_DWORD *)(v50 + 24) = i;
      *(_DWORD *)(v50 + 4) = v61;
      *(_QWORD *)(v50 + 16) = v40;
      *(_QWORD *)(v50 + 32) = v50;
      *(_DWORD *)(v50 + 276) = 0;
      *(_QWORD *)(v50 + 280) = 0LL;
      *(_DWORD *)v50 = v74;
      v51 = *((_BYTE *)v41 + 1);
      v62 = i + 1;
      v52 = v51 == 0;
      if ( v51 < 0 || (v53 = 1, v52) )
        v53 = 0;
      *(_BYTE *)(v49 + 8) = v53;
      ++v43;
      *(_QWORD *)(v49 + 48) = v49 + 40;
      *(_QWORD *)(v49 + 40) = v49 + 40;
      *(_DWORD *)(v49 + 56) = 0;
      *(_QWORD *)(v49 + 64) = v41;
      *(_QWORD *)(v49 + 72) = *(_QWORD *)a1;
      *(_DWORD *)(v49 + 80) = *(_DWORD *)(a1 + 12);
      *(_QWORD *)(v49 + 88) = 0LL;
      *(_DWORD *)(v49 + 96) = v74;
      *(_DWORD *)(v49 + 100) = v34[3];
      v54 = v34[2];
      *(_DWORD *)(v49 + 128) = -1;
      *(_DWORD *)(v49 + 104) = v54;
      *(_QWORD *)(v49 + 112) = v49 + 136;
      *(_DWORD *)(v49 + 84) = 0;
      v65 = (__int64)v43;
      if ( !*(_BYTE *)(v49 + 8) )
      {
        ++i;
        *(_BYTE *)(v50 + 136) = *((_BYTE *)v41 + 1);
        *(_BYTE *)(v49 + 137) = *((_BYTE *)v41 + 2);
        *(_WORD *)(v49 + 138) = *((_WORD *)v41 + 2);
        *(_DWORD *)(v49 + 140) = v41[2];
        *(_DWORD *)(v49 + 144) = v41[3];
        *(_DWORD *)(v49 + 148) = v41[4];
        v48 = v72;
        if ( *((_BYTE *)v41 + 1) == 0x84 )
          v48 = 1;
        v72 = v48;
        v46 = v68;
        goto LABEL_51;
      }
      *(_BYTE *)(v50 + 136) = 8;
      v55 = (unsigned int)++*(_DWORD *)(v49 + 56);
      v72 = 1;
      while ( 1 )
      {
        v41 += 8;
        if ( v41 >= v5 )
          break;
        if ( *((_BYTE *)v41 + 1) == 0x81 )
        {
          *(_QWORD *)(v49 + 280) = v41;
          while ( v41 < v5 && *((_BYTE *)v41 + 1) == 0x81 )
          {
            ++*(_DWORD *)(v49 + 276);
            v41 += 8;
          }
          break;
        }
        if ( (*(_BYTE *)v41 & 8) == 0 )
          break;
        v55 = (unsigned int)(v55 + 1);
        *(_DWORD *)(v49 + 56) = v55;
      }
      v56 = IopSetupArbiterAndTranslators(v49, v49 + 40, v55);
      if ( v56 < 0 )
        break;
      v43 = (_QWORD *)v65;
      v46 = v68;
    }
    v35 = v69;
    --*((_DWORD *)v33 + 8);
    v38 = v66;
    v64 = v69;
    IopFreeReqAlternative(v40);
    v19 = v56;
LABEL_68:
    --v63;
  }
  while ( v63 >= 0 );
LABEL_69:
  v57 = v38 == 0;
  if ( !v38 )
  {
    IopFreeReqList(v33);
    v57 = 1;
  }
  if ( !v57 )
    v19 = 0;
  if ( !v19 )
  {
    if ( v72 )
      *a2 = v33;
    else
      IopFreeReqList(v33);
  }
  return v19;
}
