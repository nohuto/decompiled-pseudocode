/*
 * XREFs of sub_14091CCE4 @ 0x14091CCE4
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091CCE4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // r11
  unsigned int *v6; // r8
  int v8; // ebp
  signed int v9; // ebx
  unsigned int *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // r10
  unsigned int *v13; // rdx
  unsigned int v14; // edx
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // rax
  unsigned int j; // ecx
  __int64 v19; // r10
  unsigned int *v20; // rdx
  unsigned int v21; // edx
  unsigned int *v22; // rcx
  unsigned int *v23; // rax
  unsigned int v24; // r10d
  unsigned int *v25; // rax
  unsigned int k; // ecx
  __int64 v27; // r9
  unsigned int *v28; // rdx
  unsigned int v29; // r13d
  unsigned int *v30; // r12
  unsigned int *v31; // rax
  unsigned int m; // ecx
  __int64 v33; // r9
  unsigned int *v34; // rdx
  unsigned int v35; // r15d
  unsigned int *v36; // r14
  unsigned int n; // ecx
  __int64 v38; // rax
  unsigned int *v39; // rdx
  unsigned int v40; // edx
  unsigned int *v41; // rax
  unsigned int v42; // esi
  PVOID PoolWithTag; // rax
  void *v44; // r10
  int v45; // r14d
  unsigned int v46; // r15d
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // edx
  unsigned int v50; // edx
  unsigned int v51; // r8d
  unsigned int v52; // eax
  PVOID v53; // rax
  __int64 v54; // r8
  int v55; // r14d
  int v56; // ebp
  unsigned int v57; // edx
  int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  _DWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // r8
  unsigned int v64; // edx
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned __int64 v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // xmm0_8
  void *v71; // r11
  __int64 v72; // r8
  int v73; // r11d
  unsigned int v74; // ecx
  unsigned int v75; // eax
  __int64 v76; // r8
  unsigned int v77; // edx
  int v78; // eax
  unsigned int v79; // ecx
  unsigned int v80; // ecx
  unsigned int *v81; // rdx
  unsigned int v82; // eax
  unsigned int v83; // ecx
  _DWORD *ii; // rdx
  unsigned int v85; // eax
  int v87; // [rsp+50h] [rbp-58h] BYREF
  void *Src; // [rsp+58h] [rbp-50h]
  __int64 v89; // [rsp+60h] [rbp-48h]
  unsigned int v91; // [rsp+C0h] [rbp+18h]

  v91 = 0;
  v4 = 0LL;
  v87 = 0;
  v6 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  v8 = 1;
  if ( v6 && *(_DWORD *)a1 > 3u )
  {
    v10 = v6;
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
      v89 = *(_QWORD *)v16;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( v6 && *(_DWORD *)a1 > 4u )
  {
    v17 = v6;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *v17;
      v20 = v17 + 1;
      if ( v17 + 1 < v17 )
        goto LABEL_28;
      v17 = (unsigned int *)((char *)v20 + v19);
      if ( (unsigned int *)((char *)v20 + v19) < v20 )
        goto LABEL_28;
    }
    v21 = *v17;
    v22 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
LABEL_28:
      v9 = -1073741675;
    }
    else
    {
      v23 = 0LL;
      if ( v21 )
        v23 = v22;
      v9 = 0;
      if ( v21 != 4 )
        return (unsigned int)-1073741789;
      v91 = *v23;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !v6 )
    return (unsigned int)-1073741811;
  v24 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v25 = v6;
  for ( k = 0; k < 5; ++k )
  {
    v27 = *v25;
    v28 = v25 + 1;
    if ( v25 + 1 < v25 )
      return (unsigned int)-1073741675;
    v25 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  v29 = *v25;
  if ( v25 + 1 < v25 )
    return (unsigned int)-1073741675;
  v30 = 0LL;
  if ( v29 )
    v30 = v25 + 1;
  if ( v24 <= 6 )
    return (unsigned int)-1073741811;
  v31 = v6;
  for ( m = 0; m < 6; ++m )
  {
    v33 = *v31;
    v34 = v31 + 1;
    if ( v31 + 1 < v31 )
      return (unsigned int)-1073741675;
    v31 = (unsigned int *)((char *)v34 + v33);
    if ( (unsigned int *)((char *)v34 + v33) < v34 )
      return (unsigned int)-1073741675;
  }
  v35 = *v31;
  if ( v31 + 1 < v31 )
    return (unsigned int)-1073741675;
  v36 = 0LL;
  if ( v35 )
    v36 = v31 + 1;
  if ( v24 > 7 )
  {
    for ( n = 0; n < 7; ++n )
    {
      v38 = *v6;
      v39 = v6 + 1;
      if ( v6 + 1 < v6 )
        goto LABEL_59;
      v6 = (unsigned int *)((char *)v39 + v38);
      if ( (unsigned int *)((char *)v39 + v38) < v39 )
        goto LABEL_59;
    }
    v40 = *v6;
    if ( v6 + 1 < v6 )
    {
LABEL_59:
      v9 = -1073741675;
      goto LABEL_60;
    }
    v41 = 0LL;
    if ( v40 )
      v41 = v6 + 1;
    v9 = 0;
    if ( v40 == 4 )
    {
      v42 = *v41;
      goto LABEL_61;
    }
    return (unsigned int)-1073741789;
  }
  v9 = -1073741811;
LABEL_60:
  v42 = v91;
LABEL_61:
  if ( v9 >= 0 )
  {
    if ( v42 )
    {
      v8 = 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v42, 0x20534C53u);
      Src = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, v42);
      v4 = Src;
    }
    if ( qword_1409AD470 )
    {
      v44 = 0LL;
      if ( !v8 )
        v44 = v4;
      v45 = qword_1409AD470(v91, v30, v29, v36, v35, v44, v42, &v87);
    }
    else
    {
      v45 = -1073741637;
    }
    v46 = v42 + 4;
    if ( v42 >= 0xFFFFFFFC )
    {
      v47 = v91;
      v9 = -1073741675;
    }
    else
    {
      if ( v46 >= 0xFFFFFFEC || (v47 = v42 + 32, v42 + 32 < v42 + 24) )
      {
        v9 = -1073741675;
        goto LABEL_162;
      }
      v9 = 0;
    }
    if ( v9 < 0 )
    {
LABEL_162:
      if ( Src )
        ExFreePoolWithTag(Src, 0x20534C53u);
      return (unsigned int)v9;
    }
    if ( v47 >= 0xFFFFFFF8 )
      goto LABEL_161;
    v48 = (v47 + 15) & 0xFFFFFFF8;
    if ( v48 >= v47 + 8 )
    {
      v49 = v48 + 8;
      if ( v48 + 8 < v48 )
        goto LABEL_89;
      v9 = 0;
    }
    else
    {
      v49 = v91;
      v9 = -1073741675;
    }
    if ( v9 < 0 )
      goto LABEL_162;
    v50 = v49 + 4;
    if ( v50 >= 4 )
    {
      v51 = v50 + 4;
      if ( v50 + 4 >= v50 )
      {
        v52 = v51 + *(_DWORD *)(a2 + 16);
        if ( v52 >= v51 && v52 + 4 >= v52 )
        {
          v9 = v52 + 4 + *(_DWORD *)(a2 + 32) < v52 + 4 ? 0xC0000095 : 0;
          goto LABEL_90;
        }
      }
    }
LABEL_89:
    v9 = -1073741675;
LABEL_90:
    if ( v9 < 0 )
      goto LABEL_162;
    if ( !a4 )
    {
      v9 = -1073741811;
      goto LABEL_162;
    }
    v9 = 0;
    *(_DWORD *)(a4 + 4) = v47;
    if ( v47 )
    {
      v53 = ExAllocatePoolWithTag(PagedPool, v47, 0x20534C53u);
      if ( v53 )
      {
        *(_QWORD *)(a4 + 8) = v53;
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
      goto LABEL_162;
    v54 = *(_QWORD *)(a4 + 8);
    v55 = v45 | 0x10000000;
    v56 = -1;
    if ( v54 )
    {
      v60 = 0;
      v61 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v62 = *v61 + 4;
          if ( *v61 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v61 + v62) < v61 )
            goto LABEL_161;
          ++v60;
          v61 = (_DWORD *)((char *)v61 + v62);
          if ( v60 >= *(_DWORD *)a4 )
            goto LABEL_108;
        }
        v9 = -1073741675;
      }
      else
      {
LABEL_108:
        if ( v61 + 1 < v61 )
          goto LABEL_161;
        v9 = 0;
        if ( (unsigned __int64)(v61 + 2) > v54 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_110;
        *v61 = 4;
        v61[1] = v55;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v57 = *(_DWORD *)(a4 + 4);
      v58 = -1;
      v59 = v57 + 8;
      if ( v57 + 8 >= v57 )
        v58 = v57 + 8;
      v9 = v59 < v57 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v58;
      if ( v59 >= v57 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_114;
      }
    }
    if ( v9 < 0 )
      goto LABEL_162;
LABEL_114:
    v63 = *(_QWORD *)(a4 + 8);
    if ( v63 )
    {
      v67 = 0;
      v68 = *(_QWORD *)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v69 = *(_DWORD *)v68 + 4;
          if ( *(_DWORD *)v68 >= 0xFFFFFFFC )
            break;
          if ( v68 + v69 < v68 )
            goto LABEL_161;
          ++v67;
          v68 += v69;
          if ( v67 >= *(_DWORD *)a4 )
            goto LABEL_123;
        }
        v9 = -1073741675;
      }
      else
      {
LABEL_123:
        if ( v68 + 4 < v68 )
          goto LABEL_161;
        v9 = 0;
        if ( v68 + 12 > v63 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_110;
        v70 = v89;
        *(_DWORD *)v68 = 8;
        *(_QWORD *)(v68 + 4) = v70;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v64 = *(_DWORD *)(a4 + 4);
      v65 = -1;
      v66 = v64 + 12;
      if ( v64 + 12 >= v64 )
        v65 = v64 + 12;
      v9 = v66 < v64 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v65;
      if ( v66 >= v64 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_127;
      }
    }
    if ( v9 < 0 )
      goto LABEL_162;
LABEL_127:
    v71 = Src;
    if ( Src )
    {
      if ( !v42 )
        goto LABEL_129;
    }
    else if ( v42 )
    {
LABEL_129:
      v9 = -1073741811;
      goto LABEL_130;
    }
    v76 = *(_QWORD *)(a4 + 8);
    if ( v76 )
    {
      v80 = 0;
      v81 = *(unsigned int **)(a4 + 8);
      if ( !*(_DWORD *)a4 )
      {
LABEL_149:
        if ( v81 + 1 < v81 )
          goto LABEL_161;
        v9 = 0;
        if ( (unsigned __int64)v81 + v42 + 4 > v76 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_110;
        *v81 = v42;
        if ( v71 )
          memmove(v81 + 1, v71, v42);
        ++*(_DWORD *)a4;
        goto LABEL_130;
      }
      while ( 1 )
      {
        v82 = *v81 + 4;
        if ( *v81 >= 0xFFFFFFFC )
          break;
        if ( (unsigned int *)((char *)v81 + v82) < v81 )
          goto LABEL_161;
        ++v80;
        v81 = (unsigned int *)((char *)v81 + v82);
        if ( v80 >= *(_DWORD *)a4 )
          goto LABEL_149;
      }
    }
    else if ( v46 >= 4 )
    {
      v77 = *(_DWORD *)(a4 + 4);
      v78 = -1;
      v79 = v77 + v46;
      if ( v77 + v46 >= v77 )
        v78 = v77 + v46;
      v9 = v79 < v77 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v78;
      if ( v79 >= v77 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_131;
      }
LABEL_130:
      if ( v9 < 0 )
        goto LABEL_162;
LABEL_131:
      v72 = *(_QWORD *)(a4 + 8);
      v73 = v87;
      if ( !v72 )
      {
        v74 = *(_DWORD *)(a4 + 4);
        v75 = v74 + 8;
        if ( v74 + 8 >= v74 )
          v56 = v74 + 8;
        v9 = v75 < v74 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v56;
        if ( v75 >= v74 )
        {
          ++*(_DWORD *)a4;
          v9 = 0;
        }
        goto LABEL_162;
      }
      v83 = 0;
      for ( ii = *(_DWORD **)(a4 + 8); v83 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v85) )
      {
        v85 = *ii + 4;
        if ( *ii >= 0xFFFFFFFC || (_DWORD *)((char *)ii + v85) < ii )
          goto LABEL_161;
        ++v83;
      }
      if ( ii + 1 >= ii )
      {
        v9 = 0;
        if ( (unsigned __int64)(ii + 2) <= v72 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *ii = 4;
          ii[1] = v73;
          ++*(_DWORD *)a4;
          goto LABEL_162;
        }
LABEL_110:
        v9 = -1073741789;
        goto LABEL_162;
      }
LABEL_161:
      v9 = -1073741675;
      goto LABEL_162;
    }
    v9 = -1073741675;
    goto LABEL_130;
  }
  return (unsigned int)v9;
}
