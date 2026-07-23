/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x1406CF024
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleUpdatePolicies(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v7; // r12d
  int v8; // ecx
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // r10
  unsigned int i; // r11d
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // r11
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  int v32; // r15d
  unsigned int v33; // ecx
  unsigned int v34; // eax
  SIZE_T v35; // rax
  char *v36; // rax
  char *v37; // rdx
  char *v38; // rax
  __int64 v40; // r10
  __int64 v41; // rsi
  unsigned int v42; // ecx
  unsigned int v43; // eax
  int v44; // r11d
  char *v45; // r9
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // r13d
  char *v49; // rcx
  char *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  char *PoolWithTag; // rax
  char *v54; // rdx
  char *v55; // rax
  __int64 v56; // r10
  int v57; // r11d
  char *v58; // r9
  __int64 v59; // rdx
  unsigned int v60; // eax
  unsigned int v61; // ecx
  char *v62; // rdx
  char *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // r11d
  __int64 v67; // rdx
  unsigned int v68; // eax
  unsigned int v69; // ecx
  char *v70; // rdx
  char *v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // ecx
  unsigned int v74; // eax
  __int64 v75; // [rsp+20h] [rbp-10h]
  unsigned int v76; // [rsp+20h] [rbp-10h]
  unsigned int v77; // [rsp+20h] [rbp-10h]
  __int64 *v78; // [rsp+28h] [rbp-8h]

  v7 = -1;
  v8 = *(_DWORD *)(a2 + 32);
  v9 = -1;
  if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFE0 )
    v9 = *(_DWORD *)(a2 + 16) + 32;
  LODWORD(v10) = *(_DWORD *)(a2 + 16) >= 0xFFFFFFE0 ? 0xC0000095 : 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 32) < 0x20 )
    goto LABEL_72;
  v11 = v9 + 4;
  v12 = -1;
  if ( v9 + 4 >= v9 )
    v12 = v9 + 4;
  LODWORD(v10) = v11 < v9 ? 0xC0000095 : 0;
  if ( v11 < v9 )
  {
LABEL_72:
    v13 = v75;
  }
  else
  {
    v13 = v75;
    v14 = v12 + v8;
    v15 = -1;
    if ( v14 >= v12 )
      v15 = v14;
    LODWORD(v10) = v14 < v12 ? 0xC0000095 : 0;
    if ( v14 >= v12 )
      v13 = v15;
  }
  if ( (int)v10 < 0 )
    return (unsigned int)v10;
  if ( a3 < v13 )
  {
    if ( !a4 )
    {
      LODWORD(v10) = -1073741811;
      goto LABEL_104;
    }
    v40 = *(_QWORD *)(a4 + 8);
    v41 = -1LL;
    if ( v40 )
    {
      v44 = 0;
      v45 = *(char **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v46 = -1;
          v47 = *(_DWORD *)v45 + 4;
          if ( v47 >= 4 )
            v46 = *(_DWORD *)v45 + 4;
          LODWORD(v10) = *(_DWORD *)v45 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v47 < 4 )
            break;
          v48 = v46;
          v49 = v45;
          v50 = &v45[v46];
          v51 = -1LL;
          if ( v50 >= v45 )
            v51 = (__int64)&v45[v48];
          v45 = (char *)v51;
          LODWORD(v10) = v50 < v49 ? 0xC0000095 : 0;
          if ( v50 < v49 )
            break;
          if ( (unsigned int)++v44 >= *(_DWORD *)a4 )
            goto LABEL_88;
        }
      }
      else
      {
LABEL_88:
        v52 = -1LL;
        if ( v45 + 4 >= v45 )
          v52 = (__int64)(v45 + 4);
        LODWORD(v10) = v45 + 4 < v45 ? 0xC0000095 : 0;
        if ( v45 + 4 >= v45 )
        {
          if ( (unsigned __int64)(v45 + 8) > v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_103;
          *(_DWORD *)v45 = 4;
          *(_DWORD *)v52 = 0;
          ++*(_DWORD *)a4;
        }
      }
    }
    else
    {
      v42 = *(_DWORD *)(a4 + 4);
      v43 = v42 + 8;
      if ( v42 + 8 >= v42 )
        v7 = v42 + 8;
      LODWORD(v10) = v43 < v42 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v7;
      if ( v43 >= v42 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_94;
      }
    }
    if ( (int)v10 < 0 )
      return (unsigned int)v10;
LABEL_94:
    if ( !*(_DWORD *)(a4 + 4) )
    {
      LODWORD(v10) = -1073741762;
      goto LABEL_104;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
    v54 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v10) = -1073741801;
      goto LABEL_104;
    }
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    v55 = PoolWithTag + 4;
    if ( v55 >= v54 )
      v41 = (__int64)v55;
    LODWORD(v10) = v55 < v54 ? 0xC0000095 : 0;
    if ( v55 < v54 )
      goto LABEL_104;
    if ( v54 + 8 <= &v54[*(unsigned int *)(a4 + 4)] )
    {
      *(_DWORD *)v54 = 4;
      *(_DWORD *)v41 = 0;
      ++*(_DWORD *)a4;
      goto LABEL_104;
    }
LABEL_103:
    LODWORD(v10) = -1073741789;
LABEL_104:
    if ( (int)v10 >= 0 )
      LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = -1LL;
  if ( !v16 || *(_DWORD *)a1 <= 3u )
  {
    LODWORD(v10) = -1073741811;
LABEL_107:
    v25 = v75;
    goto LABEL_31;
  }
  v18 = *(_QWORD *)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v20 = -1LL;
    if ( v18 + 4 >= v18 )
      v20 = v18 + 4;
    LODWORD(v10) = v18 + 4 < v18 ? 0xC0000095 : 0;
    if ( v18 + 4 < v18 )
      goto LABEL_108;
    v21 = v20 + *(unsigned int *)v18;
    v18 = -1LL;
    if ( v21 >= v20 )
      v18 = v21;
    LODWORD(v10) = v21 < v20 ? 0xC0000095 : 0;
    if ( v21 < v20 )
      goto LABEL_108;
  }
  v22 = *(_DWORD *)v18;
  v23 = -1LL;
  if ( v18 + 4 >= v18 )
    v23 = v18 + 4;
  LODWORD(v10) = v18 + 4 < v18 ? 0xC0000095 : 0;
  if ( v18 + 4 < v18 )
  {
LABEL_108:
    v22 = v75;
    v24 = v78;
    goto LABEL_28;
  }
  v24 = 0LL;
  if ( v22 )
    v24 = (__int64 *)v23;
LABEL_28:
  if ( (int)v10 < 0 )
    goto LABEL_107;
  if ( v22 != 8 )
    goto LABEL_71;
  v25 = *v24;
LABEL_31:
  if ( (int)v10 < 0 )
    return (unsigned int)v10;
  if ( !v25 || !qword_14096E220 )
  {
    v32 = -1073425151;
    if ( a4 )
    {
      v56 = *(_QWORD *)(a4 + 8);
      if ( v56 )
      {
        v66 = 0;
        v58 = *(char **)(a4 + 8);
        if ( !*(_DWORD *)a4 )
          goto LABEL_122;
        v67 = (unsigned int)v75;
        while ( 1 )
        {
          v68 = -1;
          v69 = *(_DWORD *)v58 + 4;
          if ( v69 >= 4 )
            v68 = *(_DWORD *)v58 + 4;
          LODWORD(v10) = *(_DWORD *)v58 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v69 >= 4 )
            v67 = v68;
          v77 = v67;
          if ( v69 < 4 )
            break;
          v70 = &v58[v67];
          v71 = v58;
          v72 = -1LL;
          if ( v70 >= v58 )
            v72 = (__int64)v70;
          v58 = (char *)v72;
          LODWORD(v10) = v70 < v71 ? 0xC0000095 : 0;
          if ( v70 < v71 )
            break;
          v67 = v77;
          if ( (unsigned int)++v66 >= *(_DWORD *)a4 )
            goto LABEL_122;
        }
LABEL_150:
        if ( (int)v10 < 0 )
          return (unsigned int)v10;
LABEL_151:
        v35 = *(unsigned int *)(a4 + 4);
        if ( (_DWORD)v35 )
          goto LABEL_61;
LABEL_69:
        LODWORD(v10) = -1073741762;
        return (unsigned int)v10;
      }
LABEL_146:
      v73 = *(_DWORD *)(a4 + 4);
      v74 = v73 + 8;
      if ( v73 + 8 >= v73 )
        v7 = v73 + 8;
      LODWORD(v10) = v74 < v73 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v7;
      if ( v74 >= v73 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_151;
      }
      goto LABEL_150;
    }
LABEL_68:
    LODWORD(v10) = -1073741811;
    return (unsigned int)v10;
  }
  if ( v25 != qword_14096E220 )
  {
    v32 = -1073425151;
    if ( a4 )
    {
      v56 = *(_QWORD *)(a4 + 8);
      if ( v56 )
      {
        v57 = 0;
        v58 = *(char **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          v59 = (unsigned int)v75;
          do
          {
            v60 = -1;
            v61 = *(_DWORD *)v58 + 4;
            if ( v61 >= 4 )
              v60 = *(_DWORD *)v58 + 4;
            LODWORD(v10) = *(_DWORD *)v58 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( v61 >= 4 )
              v59 = v60;
            v76 = v59;
            if ( v61 < 4 )
              goto LABEL_150;
            v62 = &v58[v59];
            v63 = v58;
            v64 = -1LL;
            if ( v62 >= v58 )
              v64 = (__int64)v62;
            v58 = (char *)v64;
            LODWORD(v10) = v62 < v63 ? 0xC0000095 : 0;
            if ( v62 < v63 )
              goto LABEL_150;
            v59 = v76;
          }
          while ( (unsigned int)++v57 < *(_DWORD *)a4 );
        }
LABEL_122:
        v65 = -1LL;
        if ( v58 + 4 >= v58 )
          v65 = (__int64)(v58 + 4);
        LODWORD(v10) = v58 + 4 < v58 ? 0xC0000095 : 0;
        if ( v58 + 4 >= v58 )
        {
          if ( (unsigned __int64)(v58 + 8) > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_71;
          *(_DWORD *)v58 = 4;
          *(_DWORD *)v65 = -1073425151;
          ++*(_DWORD *)a4;
        }
        goto LABEL_150;
      }
      goto LABEL_146;
    }
    goto LABEL_68;
  }
  if ( !v16 || *(_DWORD *)a1 <= 4u )
    goto LABEL_68;
  v26 = 0LL;
  do
  {
    v27 = -1LL;
    if ( v16 + 4 >= v16 )
      v27 = v16 + 4;
    v10 = v16 + 4 < v16 ? 0xC0000095 : 0;
    if ( v16 + 4 < v16 )
      goto LABEL_127;
    v28 = v27 + *(unsigned int *)v16;
    v16 = -1LL;
    if ( v28 >= v27 )
      v16 = v28;
    v10 = v28 < v27 ? 0xC0000095 : 0;
    if ( v28 < v27 )
      goto LABEL_127;
    v26 = (unsigned int)(v26 + 1);
  }
  while ( (unsigned int)v26 < 4 );
  v29 = *(unsigned int *)v16;
  v26 = -1LL;
  if ( v16 + 4 >= v16 )
    v26 = v16 + 4;
  v10 = v16 + 4 < v16 ? 0xC0000095 : 0;
  if ( v16 + 4 < v16 )
  {
LABEL_127:
    v29 = (unsigned int)v75;
    v30 = (__int64)v78;
    goto LABEL_50;
  }
  v30 = 0LL;
  if ( (_DWORD)v29 )
    v30 = v26;
LABEL_50:
  if ( (int)v10 < 0 )
    return (unsigned int)v10;
  v31 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_14096E438)(v29, v30, v10, v26);
  if ( v31 == 263 )
  {
    v32 = 1074058754;
  }
  else if ( v31 == 0x40000000 )
  {
    v32 = 1074058753;
  }
  else if ( v31 < 0 )
  {
    v32 = v31 | 0x10000000;
  }
  else
  {
    v32 = 0;
  }
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)a4 = 0;
  if ( *(_QWORD *)(a4 + 8) )
  {
    ExFreePoolWithTag(*(PVOID *)(a4 + 8), 0x20534C53u);
    *(_QWORD *)(a4 + 8) = 0LL;
  }
  v33 = *(_DWORD *)(a4 + 4);
  v34 = v33 + 8;
  if ( v33 + 8 >= v33 )
    v7 = v33 + 8;
  LODWORD(v10) = v34 < v33 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v7;
  if ( v34 < v33 )
    return (unsigned int)v10;
  ++*(_DWORD *)a4;
  v35 = *(unsigned int *)(a4 + 4);
  if ( !(_DWORD)v35 )
    goto LABEL_69;
LABEL_61:
  v36 = (char *)ExAllocatePoolWithTag(PagedPool, v35, 0x20534C53u);
  v37 = v36;
  if ( !v36 )
  {
    LODWORD(v10) = -1073741801;
    return (unsigned int)v10;
  }
  *(_DWORD *)a4 = 0;
  v38 = v36 + 4;
  *(_QWORD *)(a4 + 8) = v37;
  if ( v38 >= v37 )
    v17 = (__int64)v38;
  LODWORD(v10) = v38 < v37 ? 0xC0000095 : 0;
  if ( v38 >= v37 )
  {
    if ( v37 + 8 <= &v37[*(unsigned int *)(a4 + 4)] )
    {
      *(_DWORD *)v37 = 4;
      *(_DWORD *)v17 = v32;
      ++*(_DWORD *)a4;
      return (unsigned int)v10;
    }
LABEL_71:
    LODWORD(v10) = -1073741789;
  }
  return (unsigned int)v10;
}
