/*
 * XREFs of sub_140344570 @ 0x140344570
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140344570(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // r8
  const void *v5; // r12
  int v9; // ebp
  signed int v10; // ebx
  unsigned int *v11; // rax
  unsigned int i; // ecx
  __int64 v13; // r10
  unsigned int *v14; // rdx
  unsigned int v15; // edx
  unsigned int *v16; // rcx
  unsigned int *v17; // rax
  unsigned int v18; // r10d
  unsigned int *v19; // rax
  unsigned int j; // ecx
  __int64 v21; // r9
  unsigned int *v22; // rdx
  unsigned int v23; // r15d
  unsigned int *v24; // r14
  unsigned int k; // ecx
  __int64 v26; // rax
  unsigned int *v27; // rdx
  unsigned int v28; // edx
  unsigned int *v29; // rax
  unsigned int v30; // esi
  PVOID PoolWithTag; // rax
  const void *v32; // r8
  int v33; // r14d
  unsigned int v34; // r15d
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // r8d
  unsigned int v40; // eax
  PVOID v41; // rax
  __int64 v42; // r9
  int v43; // r14d
  int v44; // ebp
  unsigned int v45; // edx
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  _DWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // edx
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned __int64 v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // r8
  unsigned int v59; // r11d
  unsigned int v60; // ecx
  unsigned int v61; // eax
  __int64 v62; // r8
  unsigned int v63; // edx
  int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int *v67; // rdx
  unsigned int v68; // eax
  unsigned int v69; // ecx
  _DWORD *m; // rdx
  unsigned int v71; // eax
  __int64 v73; // [rsp+30h] [rbp-38h]
  unsigned int v74; // [rsp+80h] [rbp+18h] BYREF

  v74 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v74 = 0;
  v9 = 1;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v11 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v13 = *v11;
      v14 = v11 + 1;
      if ( v11 + 1 < v11 )
        goto LABEL_14;
      v11 = (unsigned int *)((char *)v14 + v13);
      if ( (unsigned int *)((char *)v14 + v13) < v14 )
        goto LABEL_14;
    }
    v15 = *v11;
    v16 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
LABEL_14:
      v10 = -1073741675;
      goto LABEL_15;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = v16;
    v10 = 0;
    if ( v15 == 8 )
    {
      v73 = *(_QWORD *)v17;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v10 = -1073741811;
LABEL_15:
  if ( v10 >= 0 )
  {
    if ( !v4 )
      return (unsigned int)-1073741811;
    v18 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v19 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v21 = *v19;
      v22 = v19 + 1;
      if ( v19 + 1 < v19 )
        return (unsigned int)-1073741675;
      v19 = (unsigned int *)((char *)v22 + v21);
      if ( (unsigned int *)((char *)v22 + v21) < v22 )
        return (unsigned int)-1073741675;
    }
    v23 = *v19;
    if ( v19 + 1 < v19 )
      return (unsigned int)-1073741675;
    v24 = 0LL;
    if ( v23 )
      v24 = v19 + 1;
    if ( v18 > 5 )
    {
      for ( k = 0; k < 5; ++k )
      {
        v26 = *v4;
        v27 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_37;
        v4 = (unsigned int *)((char *)v27 + v26);
        if ( (unsigned int *)((char *)v27 + v26) < v27 )
          goto LABEL_37;
      }
      v28 = *v4;
      if ( v4 + 1 < v4 )
      {
LABEL_37:
        v10 = -1073741675;
        goto LABEL_38;
      }
      v29 = 0LL;
      if ( v28 )
        v29 = v4 + 1;
      v10 = 0;
      if ( v28 == 4 )
      {
        v30 = *v29;
        goto LABEL_39;
      }
      return (unsigned int)-1073741789;
    }
    v10 = -1073741811;
LABEL_38:
    v30 = v74;
LABEL_39:
    if ( v10 >= 0 )
    {
      if ( v30 )
      {
        v9 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30, 0x20534C53u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        memset(PoolWithTag, 0, v30);
      }
      if ( qword_1409AD438 )
      {
        v32 = 0LL;
        if ( !v9 )
          v32 = v5;
        v33 = qword_1409AD438(v24, v23, v32, v30, &v74);
      }
      else
      {
        v33 = -1073741637;
      }
      v34 = v30 + 4;
      if ( v30 >= 0xFFFFFFFC )
      {
        v35 = v74;
        v10 = -1073741675;
      }
      else
      {
        if ( v34 >= 0xFFFFFFEC || (v35 = v30 + 32, v30 + 32 < v30 + 24) )
        {
          v10 = -1073741675;
          goto LABEL_142;
        }
        v10 = 0;
      }
      if ( v10 < 0 )
      {
LABEL_142:
        if ( v5 )
          ExFreeHeapPool((ULONG_PTR)v5);
        return (unsigned int)v10;
      }
      if ( v35 >= 0xFFFFFFF8 )
      {
        v10 = -1073741675;
        goto LABEL_142;
      }
      v36 = (v35 + 15) & 0xFFFFFFF8;
      if ( v36 >= v35 + 8 )
      {
        v37 = v36 + 8;
        if ( v36 + 8 < v36 )
        {
          v10 = -1073741675;
          goto LABEL_68;
        }
        v10 = 0;
      }
      else
      {
        v37 = v74;
        v10 = -1073741675;
      }
      if ( v10 >= 0 )
      {
        v38 = v37 + 4;
        if ( v38 < 4 || (v39 = v38 + 4, v38 + 4 < v38) || (v40 = v39 + *(_DWORD *)(a2 + 16), v40 < v39) || v40 + 4 < v40 )
          v10 = -1073741675;
        else
          v10 = v40 + 4 + *(_DWORD *)(a2 + 32) < v40 + 4 ? 0xC0000095 : 0;
      }
LABEL_68:
      if ( v10 < 0 )
        goto LABEL_142;
      if ( !a4 )
      {
        v10 = -1073741811;
        goto LABEL_142;
      }
      v10 = 0;
      *(_DWORD *)(a4 + 4) = v35;
      if ( v35 )
      {
        v41 = ExAllocatePoolWithTag(PagedPool, v35, 0x20534C53u);
        if ( v41 )
        {
          *(_QWORD *)(a4 + 8) = v41;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v10 = -1073741801;
        }
      }
      else
      {
        v10 = -1073741762;
      }
      if ( v10 < 0 )
        goto LABEL_142;
      v42 = *(_QWORD *)(a4 + 8);
      v43 = v33 | 0x10000000;
      v44 = -1;
      if ( v42 )
      {
        v48 = 0;
        v49 = *(_DWORD **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v50 = *v49 + 4;
            if ( *v49 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v49 + v50) < v49 )
              goto LABEL_141;
            ++v48;
            v49 = (_DWORD *)((char *)v49 + v50);
            if ( v48 >= *(_DWORD *)a4 )
              goto LABEL_88;
          }
          v10 = -1073741675;
        }
        else
        {
LABEL_88:
          if ( v49 + 1 < v49 )
            goto LABEL_141;
          v10 = 0;
          if ( (unsigned __int64)(v49 + 2) > v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_90;
          *v49 = 4;
          v49[1] = v43;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v45 = *(_DWORD *)(a4 + 4);
        v46 = -1;
        v47 = v45 + 8;
        if ( v45 + 8 >= v45 )
          v46 = v45 + 8;
        v10 = v47 < v45 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v46;
        if ( v47 >= v45 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_94;
        }
      }
      if ( v10 < 0 )
        goto LABEL_142;
LABEL_94:
      v51 = *(_QWORD *)(a4 + 8);
      if ( v51 )
      {
        v55 = 0;
        v56 = *(_QWORD *)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v57 = *(_DWORD *)v56 + 4;
            if ( *(_DWORD *)v56 >= 0xFFFFFFFC )
              break;
            if ( v56 + v57 < v56 )
              goto LABEL_141;
            ++v55;
            v56 += v57;
            if ( v55 >= *(_DWORD *)a4 )
              goto LABEL_103;
          }
          v10 = -1073741675;
        }
        else
        {
LABEL_103:
          if ( v56 + 4 < v56 )
            goto LABEL_141;
          v10 = 0;
          if ( v56 + 12 > v51 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_90;
          *(_DWORD *)v56 = 8;
          *(_QWORD *)(v56 + 4) = v73;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v52 = *(_DWORD *)(a4 + 4);
        v53 = -1;
        v54 = v52 + 12;
        if ( v52 + 12 >= v52 )
          v53 = v52 + 12;
        v10 = v54 < v52 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v53;
        if ( v54 >= v52 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_107;
        }
      }
      if ( v10 < 0 )
        goto LABEL_142;
LABEL_107:
      if ( v5 )
      {
        if ( !v30 )
          goto LABEL_109;
      }
      else if ( v30 )
      {
LABEL_109:
        v10 = -1073741811;
        goto LABEL_110;
      }
      v62 = *(_QWORD *)(a4 + 8);
      if ( v62 )
      {
        v66 = 0;
        v67 = *(unsigned int **)(a4 + 8);
        if ( !*(_DWORD *)a4 )
        {
LABEL_129:
          if ( v67 + 1 < v67 )
            goto LABEL_141;
          v10 = 0;
          if ( (unsigned __int64)v67 + v30 + 4 > v62 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_90;
          *v67 = v30;
          if ( v5 )
            memmove(v67 + 1, v5, v30);
          ++*(_DWORD *)a4;
          goto LABEL_110;
        }
        while ( 1 )
        {
          v68 = *v67 + 4;
          if ( *v67 >= 0xFFFFFFFC )
            break;
          if ( (unsigned int *)((char *)v67 + v68) < v67 )
            goto LABEL_141;
          ++v66;
          v67 = (unsigned int *)((char *)v67 + v68);
          if ( v66 >= *(_DWORD *)a4 )
            goto LABEL_129;
        }
      }
      else if ( v34 >= 4 )
      {
        v63 = *(_DWORD *)(a4 + 4);
        v64 = -1;
        v65 = v63 + v34;
        if ( v63 + v34 >= v63 )
          v64 = v63 + v34;
        v10 = v65 < v63 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v64;
        if ( v65 >= v63 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_111;
        }
LABEL_110:
        if ( v10 < 0 )
          goto LABEL_142;
LABEL_111:
        v58 = *(_QWORD *)(a4 + 8);
        v59 = v74;
        if ( !v58 )
        {
          v60 = *(_DWORD *)(a4 + 4);
          v61 = v60 + 8;
          if ( v60 + 8 >= v60 )
            v44 = v60 + 8;
          v10 = v61 < v60 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v44;
          if ( v61 >= v60 )
          {
            ++*(_DWORD *)a4;
            v10 = 0;
          }
          goto LABEL_142;
        }
        v69 = 0;
        for ( m = *(_DWORD **)(a4 + 8); v69 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v71) )
        {
          v71 = *m + 4;
          if ( *m >= 0xFFFFFFFC || (_DWORD *)((char *)m + v71) < m )
            goto LABEL_141;
          ++v69;
        }
        if ( m + 1 >= m )
        {
          v10 = 0;
          if ( (unsigned __int64)(m + 2) <= v58 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *m = 4;
            m[1] = v59;
            ++*(_DWORD *)a4;
            goto LABEL_142;
          }
LABEL_90:
          v10 = -1073741789;
          goto LABEL_142;
        }
LABEL_141:
        v10 = -1073741675;
        goto LABEL_142;
      }
      v10 = -1073741675;
      goto LABEL_110;
    }
  }
  return (unsigned int)v10;
}
