/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x140730064
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140180BB8 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14072F7B0 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x14083C784 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408432B4 (IopQueryConflictListInternal.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     IopFreeReqList @ 0x14072F8E0 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14072F938 (IopFreeReqAlternative.c)
 *     IopSetupArbiterAndTranslators @ 0x140730648 (IopSetupArbiterAndTranslators.c)
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
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  signed int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int v27; // edx
  signed int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // eax
  unsigned int v31; // r8d
  signed int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // edx
  int v35; // eax
  unsigned int v36; // r12d
  _QWORD *PoolWithTag; // rax
  _QWORD *v38; // rsi
  unsigned int *v39; // r12
  __int64 *v40; // rbx
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // ebp
  int *v44; // rdx
  __int64 v45; // r15
  unsigned int *v46; // rbx
  __int64 v47; // r14
  _QWORD *v48; // r10
  int *v49; // rax
  int v50; // ecx
  _QWORD *v51; // rax
  int i; // edx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  char v56; // al
  bool v57; // zf
  char v58; // al
  unsigned int v59; // eax
  __int64 v60; // r8
  int v61; // edi
  bool v62; // zf
  unsigned __int64 v64; // rcx
  int v65; // r9d
  unsigned int v66; // [rsp+20h] [rbp-88h]
  int v67; // [rsp+24h] [rbp-84h]
  int v68; // [rsp+28h] [rbp-80h]
  __int64 *v69; // [rsp+30h] [rbp-78h]
  __int64 v70; // [rsp+38h] [rbp-70h]
  int v71; // [rsp+40h] [rbp-68h]
  __int64 v72; // [rsp+48h] [rbp-60h]
  _QWORD *v73; // [rsp+50h] [rbp-58h]
  __int64 *v74; // [rsp+58h] [rbp-50h]
  int v77; // [rsp+C0h] [rbp+18h]
  unsigned int *v78; // [rsp+C8h] [rbp+20h]
  int v79; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v77 = 0;
  v78 = v2;
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
LABEL_52:
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
    goto LABEL_52;
  }
LABEL_20:
  v18 = v8 - v9;
  v19 = -1073741823;
  if ( 296 * (unsigned __int64)v18 > 0xFFFFFFFF )
    return 2147483653LL;
  v20 = 296 * v18;
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
    v64 = 8LL * (v3 - 1);
    if ( v64 <= 0xFFFFFFFF )
      v27 = 8 * (v3 - 1);
    v28 = v64 > 0xFFFFFFFF ? 0xC0000095 : 0;
  }
  else
  {
    v27 = 0;
    v28 = 0;
  }
  if ( v28 < 0 || v27 + 48 < v27 )
    return 2147483653LL;
  v29 = v27 + 48;
  v30 = v27 + 48 + v26;
  v31 = -1;
  if ( v29 + (unsigned int)v26 >= v29 )
    v31 = v27 + 48 + v26;
  v32 = v30 < v29 ? 0xC0000095 : 0;
  if ( v30 >= v29 )
  {
    v33 = v31 + v20;
    v34 = v31;
    v35 = -1;
    if ( v31 + v20 >= v31 )
      v35 = v31 + v20;
    v31 = v35;
    v32 = v33 < v34 ? 0xC0000095 : 0;
  }
  if ( v32 < 0 )
    return 2147483653LL;
  v36 = v31;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v31, 0x20207050u);
  v38 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v36);
  v70 = (__int64)v38 + v29;
  memset((void *)v70, 0, (unsigned int)v26);
  v72 = v70 + v26;
  memset((void *)(v70 + v26), 0, v20);
  v39 = v78;
  v40 = v38 + 5;
  v69 = v38 + 5;
  v41 = v78[1];
  if ( v41 == -1 )
    v41 = 1;
  v42 = v78[2];
  v38[2] = 0LL;
  v66 = v42;
  v38[1] = a1;
  *((_DWORD *)v38 + 1) = v42;
  v79 = v41;
  *((_DWORD *)v38 + 8) = v3;
  *(_DWORD *)v38 = v41;
  memset(v38 + 5, 0, 8LL * v3);
  v43 = 0;
  v68 = v3 - 1;
  if ( (int)(v3 - 1) < 0 )
    goto LABEL_74;
  do
  {
    v44 = (int *)v70;
    v74 = v40;
    v45 = v70;
    v46 = v5 + 2;
    v71 = v43;
    v47 = v5[1];
    v48 = (_QWORD *)(v70 + 24);
    *v69 = v70;
    *(_DWORD *)(v70 + 16) = v43;
    v5 = &v46[8 * v47];
    ++v43;
    *(_QWORD *)(v70 + 8) = v38;
    *(_DWORD *)(v70 + 20) = 0;
    v70 += 24LL;
    ++v69;
    if ( *((_BYTE *)v46 + 1) == 0x80 )
    {
      v49 = (int *)(v46 + 2);
      v46 += 8;
      v50 = *v49;
    }
    else
    {
      v50 = 12288;
    }
    *v44 = v50;
    v51 = v48;
    for ( i = 0; ; i = v67 )
    {
      while ( 1 )
      {
        if ( v46 >= v5 )
        {
          v40 = v69;
          goto LABEL_73;
        }
        if ( *((_BYTE *)v46 + 1) != 0xF0 )
          break;
        v65 = v46[2];
        if ( v65 == -1 )
          v65 = 1;
        v66 = v46[3];
        v79 = v65;
LABEL_56:
        v46 += 8;
      }
      ++*(_DWORD *)(v45 + 20);
      v54 = v72;
      v55 = v72;
      *v51 = v72;
      v72 += 296LL;
      v73 = v51 + 1;
      *(_DWORD *)(v55 + 24) = i;
      *(_DWORD *)(v55 + 4) = v66;
      *(_QWORD *)(v55 + 16) = v45;
      *(_QWORD *)(v55 + 32) = v55;
      *(_DWORD *)(v55 + 276) = 0;
      *(_QWORD *)(v55 + 280) = 0LL;
      *(_DWORD *)v55 = v79;
      v56 = *((_BYTE *)v46 + 1);
      v67 = i + 1;
      v57 = v56 == 0;
      if ( v56 < 0 || (v58 = 1, v57) )
        v58 = 0;
      *(_BYTE *)(v54 + 8) = v58;
      ++v48;
      *(_QWORD *)(v54 + 48) = v54 + 40;
      *(_QWORD *)(v54 + 40) = v54 + 40;
      *(_DWORD *)(v54 + 56) = 0;
      *(_QWORD *)(v54 + 64) = v46;
      *(_QWORD *)(v54 + 72) = *(_QWORD *)a1;
      *(_DWORD *)(v54 + 80) = *(_DWORD *)(a1 + 12);
      *(_QWORD *)(v54 + 88) = 0LL;
      *(_DWORD *)(v54 + 96) = v79;
      *(_DWORD *)(v54 + 100) = v39[3];
      v59 = v39[2];
      *(_DWORD *)(v54 + 128) = -1;
      *(_DWORD *)(v54 + 104) = v59;
      *(_QWORD *)(v54 + 112) = v54 + 136;
      *(_DWORD *)(v54 + 84) = 0;
      v70 = (__int64)v48;
      if ( !*(_BYTE *)(v54 + 8) )
      {
        ++i;
        *(_BYTE *)(v55 + 136) = *((_BYTE *)v46 + 1);
        *(_BYTE *)(v54 + 137) = *((_BYTE *)v46 + 2);
        *(_WORD *)(v54 + 138) = *((_WORD *)v46 + 2);
        *(_DWORD *)(v54 + 140) = v46[2];
        *(_DWORD *)(v54 + 144) = v46[3];
        *(_DWORD *)(v54 + 148) = v46[4];
        v53 = v77;
        if ( *((_BYTE *)v46 + 1) == 0x84 )
          v53 = 1;
        v77 = v53;
        v51 = v73;
        goto LABEL_56;
      }
      *(_BYTE *)(v55 + 136) = 8;
      v60 = (unsigned int)++*(_DWORD *)(v54 + 56);
      v77 = 1;
      while ( 1 )
      {
        v46 += 8;
        if ( v46 >= v5 )
          break;
        if ( *((_BYTE *)v46 + 1) == 0x81 )
        {
          *(_QWORD *)(v54 + 280) = v46;
          while ( v46 < v5 && *((_BYTE *)v46 + 1) == 0x81 )
          {
            ++*(_DWORD *)(v54 + 276);
            v46 += 8;
          }
          break;
        }
        if ( (*(_BYTE *)v46 & 8) == 0 )
          break;
        v60 = (unsigned int)(v60 + 1);
        *(_DWORD *)(v54 + 56) = v60;
      }
      v61 = IopSetupArbiterAndTranslators(v54, v54 + 40, v60);
      if ( v61 < 0 )
        break;
      v48 = (_QWORD *)v70;
      v51 = v73;
    }
    v40 = v74;
    --*((_DWORD *)v38 + 8);
    v43 = v71;
    v69 = v74;
    IopFreeReqAlternative(v45);
    v19 = v61;
LABEL_73:
    --v68;
  }
  while ( v68 >= 0 );
LABEL_74:
  v62 = v43 == 0;
  if ( !v43 )
  {
    IopFreeReqList(v38);
    v62 = 1;
  }
  if ( !v62 )
    v19 = 0;
  if ( !v19 )
  {
    if ( v77 )
      *a2 = v38;
    else
      IopFreeReqList(v38);
  }
  return v19;
}
