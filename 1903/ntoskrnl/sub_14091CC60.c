/*
 * XREFs of sub_14091CC60 @ 0x14091CC60
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091CC60(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r11
  int v8; // ebp
  signed int v9; // ebx
  unsigned int *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // r10
  unsigned int *v13; // rdx
  unsigned int v14; // edx
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int v17; // r10d
  unsigned int *v18; // rax
  unsigned int j; // ecx
  __int64 v20; // r9
  unsigned int *v21; // rdx
  unsigned int v22; // r13d
  unsigned int *v23; // r12
  unsigned int *v24; // rax
  unsigned int k; // ecx
  __int64 v26; // r9
  unsigned int *v27; // rdx
  unsigned int v28; // r15d
  unsigned int *v29; // r14
  unsigned int m; // ecx
  __int64 v31; // rax
  unsigned int *v32; // rdx
  unsigned int v33; // edx
  unsigned int *v34; // rax
  unsigned int v35; // esi
  PVOID PoolWithTag; // rax
  void *v37; // r10
  int v38; // r14d
  unsigned int v39; // r15d
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // r8d
  unsigned int v45; // eax
  PVOID v46; // rax
  __int64 v47; // r9
  int v48; // r14d
  int v49; // ebp
  unsigned int v50; // edx
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  _DWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // r8
  unsigned int v57; // edx
  int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // r8
  unsigned int v64; // r11d
  unsigned int v65; // ecx
  unsigned int v66; // eax
  __int64 v67; // r8
  unsigned int v68; // edx
  int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  unsigned int *v72; // rdx
  unsigned int v73; // eax
  unsigned int v74; // ecx
  _DWORD *n; // rdx
  unsigned int v76; // eax
  void *Src; // [rsp+40h] [rbp-48h]
  __int64 v79; // [rsp+48h] [rbp-40h]
  unsigned int v81; // [rsp+A0h] [rbp+18h] BYREF

  v81 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v81 = 0;
  Src = 0LL;
  v8 = 1;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v10 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_14;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_14;
    }
    v14 = *v10;
    v15 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
LABEL_14:
      v9 = -1073741675;
    }
    else
    {
      v16 = 0LL;
      if ( v14 )
        v16 = v15;
      v9 = 0;
      if ( v14 != 8 )
        return (unsigned int)-1073741789;
      v79 = *(_QWORD *)v16;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !v4 )
    return (unsigned int)-1073741811;
  v17 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v18 = v4;
  for ( j = 0; j < 4; ++j )
  {
    v20 = *v18;
    v21 = v18 + 1;
    if ( v18 + 1 < v18 )
      return (unsigned int)-1073741675;
    v18 = (unsigned int *)((char *)v21 + v20);
    if ( (unsigned int *)((char *)v21 + v20) < v21 )
      return (unsigned int)-1073741675;
  }
  v22 = *v18;
  if ( v18 + 1 < v18 )
    return (unsigned int)-1073741675;
  v23 = 0LL;
  if ( v22 )
    v23 = v18 + 1;
  if ( v17 <= 5 )
    return (unsigned int)-1073741811;
  v24 = v4;
  for ( k = 0; k < 5; ++k )
  {
    v26 = *v24;
    v27 = v24 + 1;
    if ( v24 + 1 < v24 )
      return (unsigned int)-1073741675;
    v24 = (unsigned int *)((char *)v27 + v26);
    if ( (unsigned int *)((char *)v27 + v26) < v27 )
      return (unsigned int)-1073741675;
  }
  v28 = *v24;
  if ( v24 + 1 < v24 )
    return (unsigned int)-1073741675;
  v29 = 0LL;
  if ( v28 )
    v29 = v24 + 1;
  if ( v17 > 6 )
  {
    for ( m = 0; m < 6; ++m )
    {
      v31 = *v4;
      v32 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_45;
      v4 = (unsigned int *)((char *)v32 + v31);
      if ( (unsigned int *)((char *)v32 + v31) < v32 )
        goto LABEL_45;
    }
    v33 = *v4;
    if ( v4 + 1 < v4 )
    {
LABEL_45:
      v9 = -1073741675;
      goto LABEL_46;
    }
    v34 = 0LL;
    if ( v33 )
      v34 = v4 + 1;
    v9 = 0;
    if ( v33 == 4 )
    {
      v35 = *v34;
      goto LABEL_47;
    }
    return (unsigned int)-1073741789;
  }
  v9 = -1073741811;
LABEL_46:
  v35 = v81;
LABEL_47:
  if ( v9 >= 0 )
  {
    if ( v35 )
    {
      v8 = 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v35, 0x20534C53u);
      Src = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, v35);
      v5 = Src;
    }
    if ( qword_1409AD468 )
    {
      v37 = 0LL;
      if ( !v8 )
        v37 = v5;
      v38 = qword_1409AD468(v23, v22, v29, v28, v37, v35, &v81);
    }
    else
    {
      v38 = -1073741637;
    }
    v39 = v35 + 4;
    if ( v35 >= 0xFFFFFFFC )
    {
      v40 = v81;
      v9 = -1073741675;
    }
    else
    {
      if ( v39 >= 0xFFFFFFEC || (v40 = v35 + 32, v35 + 32 < v35 + 24) )
      {
        v9 = -1073741675;
        goto LABEL_148;
      }
      v9 = 0;
    }
    if ( v9 < 0 )
    {
LABEL_148:
      if ( Src )
        ExFreePoolWithTag(Src, 0x20534C53u);
      return (unsigned int)v9;
    }
    if ( v40 >= 0xFFFFFFF8 )
      goto LABEL_147;
    v41 = (v40 + 15) & 0xFFFFFFF8;
    if ( v41 >= v40 + 8 )
    {
      v42 = v41 + 8;
      if ( v41 + 8 < v41 )
        goto LABEL_75;
      v9 = 0;
    }
    else
    {
      v42 = v81;
      v9 = -1073741675;
    }
    if ( v9 < 0 )
      goto LABEL_148;
    v43 = v42 + 4;
    if ( v43 >= 4 )
    {
      v44 = v43 + 4;
      if ( v43 + 4 >= v43 )
      {
        v45 = v44 + *(_DWORD *)(a2 + 16);
        if ( v45 >= v44 && v45 + 4 >= v45 )
        {
          v9 = v45 + 4 + *(_DWORD *)(a2 + 32) < v45 + 4 ? 0xC0000095 : 0;
          goto LABEL_76;
        }
      }
    }
LABEL_75:
    v9 = -1073741675;
LABEL_76:
    if ( v9 < 0 )
      goto LABEL_148;
    if ( !a4 )
    {
      v9 = -1073741811;
      goto LABEL_148;
    }
    v9 = 0;
    *(_DWORD *)(a4 + 4) = v40;
    if ( v40 )
    {
      v46 = ExAllocatePoolWithTag(PagedPool, v40, 0x20534C53u);
      if ( v46 )
      {
        *(_QWORD *)(a4 + 8) = v46;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v9 = -1073741801;
      }
    }
    else
    {
      v9 = -1073741762;
    }
    if ( v9 < 0 )
      goto LABEL_148;
    v47 = *(_QWORD *)(a4 + 8);
    v48 = v38 | 0x10000000;
    v49 = -1;
    if ( v47 )
    {
      v53 = 0;
      v54 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v55 = *v54 + 4;
          if ( *v54 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v54 + v55) < v54 )
            goto LABEL_147;
          ++v53;
          v54 = (_DWORD *)((char *)v54 + v55);
          if ( v53 >= *(_DWORD *)a4 )
            goto LABEL_94;
        }
        v9 = -1073741675;
      }
      else
      {
LABEL_94:
        if ( v54 + 1 < v54 )
          goto LABEL_147;
        v9 = 0;
        if ( (unsigned __int64)(v54 + 2) > v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_96;
        *v54 = 4;
        v54[1] = v48;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v50 = *(_DWORD *)(a4 + 4);
      v51 = -1;
      v52 = v50 + 8;
      if ( v50 + 8 >= v50 )
        v51 = v50 + 8;
      v9 = v52 < v50 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v51;
      if ( v52 >= v50 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_100;
      }
    }
    if ( v9 < 0 )
      goto LABEL_148;
LABEL_100:
    v56 = *(_QWORD *)(a4 + 8);
    if ( v56 )
    {
      v60 = 0;
      v61 = *(_QWORD *)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v62 = *(_DWORD *)v61 + 4;
          if ( *(_DWORD *)v61 >= 0xFFFFFFFC )
            break;
          if ( v61 + v62 < v61 )
            goto LABEL_147;
          ++v60;
          v61 += v62;
          if ( v60 >= *(_DWORD *)a4 )
            goto LABEL_109;
        }
        v9 = -1073741675;
      }
      else
      {
LABEL_109:
        if ( v61 + 4 < v61 )
          goto LABEL_147;
        v9 = 0;
        if ( v61 + 12 > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_96;
        *(_DWORD *)v61 = 8;
        *(_QWORD *)(v61 + 4) = v79;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v57 = *(_DWORD *)(a4 + 4);
      v58 = -1;
      v59 = v57 + 12;
      if ( v57 + 12 >= v57 )
        v58 = v57 + 12;
      v9 = v59 < v57 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v58;
      if ( v59 >= v57 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_113;
      }
    }
    if ( v9 < 0 )
      goto LABEL_148;
LABEL_113:
    if ( Src )
    {
      if ( !v35 )
        goto LABEL_115;
    }
    else if ( v35 )
    {
LABEL_115:
      v9 = -1073741811;
      goto LABEL_116;
    }
    v67 = *(_QWORD *)(a4 + 8);
    if ( v67 )
    {
      v71 = 0;
      v72 = *(unsigned int **)(a4 + 8);
      if ( !*(_DWORD *)a4 )
      {
LABEL_135:
        if ( v72 + 1 < v72 )
          goto LABEL_147;
        v9 = 0;
        if ( (unsigned __int64)v72 + v35 + 4 > v67 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_96;
        *v72 = v35;
        if ( Src )
          memmove(v72 + 1, Src, v35);
        ++*(_DWORD *)a4;
        goto LABEL_116;
      }
      while ( 1 )
      {
        v73 = *v72 + 4;
        if ( *v72 >= 0xFFFFFFFC )
          break;
        if ( (unsigned int *)((char *)v72 + v73) < v72 )
          goto LABEL_147;
        ++v71;
        v72 = (unsigned int *)((char *)v72 + v73);
        if ( v71 >= *(_DWORD *)a4 )
          goto LABEL_135;
      }
    }
    else if ( v39 >= 4 )
    {
      v68 = *(_DWORD *)(a4 + 4);
      v69 = -1;
      v70 = v68 + v39;
      if ( v68 + v39 >= v68 )
        v69 = v68 + v39;
      v9 = v70 < v68 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v69;
      if ( v70 >= v68 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_117;
      }
LABEL_116:
      if ( v9 < 0 )
        goto LABEL_148;
LABEL_117:
      v63 = *(_QWORD *)(a4 + 8);
      v64 = v81;
      if ( !v63 )
      {
        v65 = *(_DWORD *)(a4 + 4);
        v66 = v65 + 8;
        if ( v65 + 8 >= v65 )
          v49 = v65 + 8;
        v9 = v66 < v65 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v49;
        if ( v66 >= v65 )
        {
          ++*(_DWORD *)a4;
          v9 = 0;
        }
        goto LABEL_148;
      }
      v74 = 0;
      for ( n = *(_DWORD **)(a4 + 8); v74 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v76) )
      {
        v76 = *n + 4;
        if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v76) < n )
          goto LABEL_147;
        ++v74;
      }
      if ( n + 1 >= n )
      {
        v9 = 0;
        if ( (unsigned __int64)(n + 2) <= v63 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *n = 4;
          n[1] = v64;
          ++*(_DWORD *)a4;
          goto LABEL_148;
        }
LABEL_96:
        v9 = -1073741789;
        goto LABEL_148;
      }
LABEL_147:
      v9 = -1073741675;
      goto LABEL_148;
    }
    v9 = -1073741675;
    goto LABEL_116;
  }
  return (unsigned int)v9;
}
