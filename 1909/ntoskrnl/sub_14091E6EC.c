/*
 * XREFs of sub_14091E6EC @ 0x14091E6EC
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1400D5CD0 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091E6EC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v7; // r15
  signed int v8; // ebx
  unsigned int *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // r9
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  unsigned int *v14; // rcx
  unsigned int *v15; // rax
  void *v16; // r12
  unsigned int *v17; // rax
  unsigned int j; // ecx
  __int64 v19; // r9
  unsigned int *v20; // rdx
  unsigned int v21; // edx
  unsigned int *v22; // rcx
  unsigned int *v23; // rax
  unsigned int k; // ecx
  __int64 v25; // rax
  unsigned int *v26; // rdx
  unsigned __int64 v27; // rcx
  const wchar_t *v28; // r11
  unsigned int *v29; // rcx
  __int64 v30; // rsi
  void *v31; // r11
  unsigned int v32; // eax
  size_t v33; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v35; // r9d
  unsigned int *v36; // rax
  unsigned int m; // edx
  __int64 v38; // r10
  unsigned int *v39; // r8
  unsigned int v40; // r11d
  unsigned int *v41; // r13
  unsigned int *v42; // rax
  unsigned int n; // edx
  __int64 v44; // r10
  unsigned int *v45; // r8
  unsigned int v46; // r12d
  unsigned int ii; // r8d
  __int64 v48; // rax
  unsigned int *v49; // rdx
  unsigned int v50; // r8d
  unsigned int *v51; // rax
  unsigned int v53; // esi
  int v54; // r14d
  PVOID v55; // rax
  void *v56; // rdx
  int v57; // r15d
  unsigned int v58; // r13d
  unsigned int v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // edx
  unsigned int v62; // edx
  unsigned int v63; // r8d
  unsigned int v64; // eax
  PVOID v65; // rax
  __int64 v66; // r8
  int v67; // r15d
  int v68; // r14d
  unsigned int v69; // edx
  int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  _DWORD *v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // r8
  unsigned int v76; // edx
  int v77; // eax
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  unsigned __int64 v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // xmm0_8
  void *v83; // r11
  __int64 v84; // r8
  int v85; // r11d
  unsigned int v86; // ecx
  unsigned int v87; // eax
  __int64 v88; // r8
  unsigned int v89; // edx
  int v90; // eax
  unsigned int v91; // ecx
  unsigned int v92; // ecx
  unsigned int *kk; // rdx
  unsigned int v94; // eax
  unsigned int v95; // ecx
  _DWORD *jj; // rdx
  unsigned int v97; // eax
  unsigned int v98; // [rsp+28h] [rbp-58h]
  int v99; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v100; // [rsp+54h] [rbp-2Ch]
  void *v101; // [rsp+58h] [rbp-28h]
  size_t pcbLength; // [rsp+60h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp-18h]
  __int64 v104; // [rsp+70h] [rbp-10h]
  unsigned int v106; // [rsp+D0h] [rbp+50h]

  v4 = *(unsigned int **)(a1 + 8);
  v106 = 0;
  v101 = 0LL;
  v99 = 0;
  v7 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_15;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_15;
    }
    v13 = *v9;
    v14 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
LABEL_15:
      v8 = -1073741675;
    }
    else
    {
      v15 = 0LL;
      if ( v13 )
        v15 = v14;
      v8 = 0;
      if ( v13 != 8 )
        goto LABEL_12;
      v104 = *(_QWORD *)v15;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_13;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v17 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *v17;
      v20 = v17 + 1;
      if ( v17 + 1 < v17 )
        goto LABEL_29;
      v17 = (unsigned int *)((char *)v20 + v19);
      if ( (unsigned int *)((char *)v20 + v19) < v20 )
        goto LABEL_29;
    }
    v21 = *v17;
    v22 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
LABEL_29:
      v8 = -1073741675;
    }
    else
    {
      v23 = 0LL;
      if ( v21 )
        v23 = v22;
      v8 = 0;
      if ( v21 != 4 )
      {
LABEL_12:
        v8 = -1073741789;
LABEL_13:
        v16 = (void *)pcbLength;
        goto LABEL_87;
      }
      v106 = *v23;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_13;
  if ( v4 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v25 = *v4;
      v26 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_52;
      v4 = (unsigned int *)((char *)v26 + v25);
      if ( (unsigned int *)((char *)v26 + v25) < v26 )
        goto LABEL_52;
    }
    v27 = *v4;
    if ( v4 + 1 < v4 )
    {
LABEL_52:
      v8 = -1073741675;
    }
    else
    {
      v28 = 0LL;
      if ( (_DWORD)v27 )
        v28 = (const wchar_t *)(v4 + 1);
      v8 = 0;
      if ( !(_DWORD)v27 )
        goto LABEL_42;
      if ( (v27 & 1) != 0 )
        goto LABEL_42;
      v30 = *v4;
      if ( v28[(v27 >> 1) - 1] )
        goto LABEL_42;
      if ( StringCbLengthW(v28, *v4, &pcbLength) < 0 || pcbLength + 2 != v30 )
      {
        v8 = -1073741762;
        goto LABEL_13;
      }
      v100 = pcbLength >> 1;
      Src = v31;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_13;
  v32 = 2 * v100 + 2;
  if ( 2 * v100 == -2 )
  {
LABEL_42:
    v8 = -1073741762;
    goto LABEL_13;
  }
  v33 = v32;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    goto LABEL_13;
  }
  memmove(PoolWithTag, Src, v33);
  v29 = *(unsigned int **)(a1 + 8);
  if ( !v29 )
    goto LABEL_45;
  v35 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 6u )
    goto LABEL_45;
  v36 = *(unsigned int **)(a1 + 8);
  for ( m = 0; m < 6; ++m )
  {
    v38 = *v36;
    v39 = v36 + 1;
    if ( v36 + 1 < v36 )
      goto LABEL_202;
    v36 = (unsigned int *)((char *)v39 + v38);
    if ( (unsigned int *)((char *)v39 + v38) < v39 )
      goto LABEL_202;
  }
  v40 = *v36;
  v100 = *v36;
  if ( v36 + 1 < v36 )
  {
LABEL_202:
    v8 = -1073741675;
    goto LABEL_13;
  }
  v41 = 0LL;
  if ( v40 )
    v41 = v36 + 1;
  if ( v35 <= 7 )
  {
LABEL_45:
    v8 = -1073741811;
    goto LABEL_13;
  }
  v42 = v29;
  for ( n = 0; n < 7; ++n )
  {
    v44 = *v42;
    v45 = v42 + 1;
    if ( v42 + 1 < v42 )
      goto LABEL_201;
    v42 = (unsigned int *)((char *)v45 + v44);
    if ( (unsigned int *)((char *)v45 + v44) < v45 )
      goto LABEL_201;
  }
  v46 = *v42;
  if ( v42 + 1 < v42 )
  {
LABEL_201:
    v8 = -1073741675;
    goto LABEL_13;
  }
  if ( v46 )
    v7 = v42 + 1;
  if ( v35 > 8 )
  {
    for ( ii = 0; ii < 8; ++ii )
    {
      v48 = *v29;
      v49 = v29 + 1;
      if ( v29 + 1 < v29 )
        goto LABEL_93;
      v29 = (unsigned int *)((char *)v49 + v48);
      if ( (unsigned int *)((char *)v49 + v48) < v49 )
        goto LABEL_93;
    }
    v50 = *v29;
    if ( v29 + 1 < v29 )
    {
LABEL_93:
      v8 = -1073741675;
      goto LABEL_94;
    }
    v51 = 0LL;
    if ( v50 )
      v51 = v29 + 1;
    v8 = 0;
    if ( v50 != 4 )
    {
      v8 = -1073741789;
      goto LABEL_85;
    }
    v53 = *v51;
  }
  else
  {
    v8 = -1073741811;
LABEL_94:
    v53 = v106;
  }
  if ( v8 < 0 )
  {
LABEL_85:
    v16 = (void *)pcbLength;
LABEL_86:
    v7 = v101;
    goto LABEL_87;
  }
  if ( v53 )
  {
    v54 = 0;
    v55 = ExAllocatePoolWithTag(PagedPool, v53, 0x20534C53u);
    v101 = v55;
    if ( !v55 )
    {
      v16 = (void *)pcbLength;
      v8 = -1073741801;
      v7 = 0LL;
      goto LABEL_87;
    }
    memset(v55, 0, v53);
    v40 = v100;
  }
  else
  {
    v54 = 1;
  }
  if ( qword_1409AD420 )
  {
    v56 = 0LL;
    if ( !v54 )
      v56 = v101;
    v98 = v46;
    v16 = (void *)pcbLength;
    v57 = qword_1409AD420(v106, pcbLength, v41, v40, v7, v98, v56, v53, &v99);
  }
  else
  {
    v16 = (void *)pcbLength;
    v57 = -1073741637;
  }
  v58 = v53 + 4;
  if ( v53 >= 0xFFFFFFFC )
  {
    v59 = v106;
    v8 = -1073741675;
  }
  else
  {
    if ( v58 >= 0xFFFFFFEC || (v59 = v53 + 32, v53 + 32 < v53 + 24) )
    {
LABEL_110:
      v8 = -1073741675;
      goto LABEL_86;
    }
    v8 = 0;
  }
  if ( v8 < 0 )
    goto LABEL_86;
  if ( v59 >= 0xFFFFFFF8 )
  {
    v8 = -1073741675;
    goto LABEL_86;
  }
  v60 = (v59 + 15) & 0xFFFFFFF8;
  if ( v60 >= v59 + 8 )
  {
    v61 = v60 + 8;
    if ( v60 + 8 < v60 )
      goto LABEL_125;
    v8 = 0;
  }
  else
  {
    v61 = v106;
    v8 = -1073741675;
  }
  if ( v8 < 0 )
    goto LABEL_86;
  v62 = v61 + 4;
  if ( v62 >= 4 )
  {
    v63 = v62 + 4;
    if ( v62 + 4 >= v62 )
    {
      v64 = v63 + *(_DWORD *)(a2 + 16);
      if ( v64 >= v63 && v64 + 4 >= v64 )
      {
        v8 = v64 + 4 + *(_DWORD *)(a2 + 32) < v64 + 4 ? 0xC0000095 : 0;
        goto LABEL_126;
      }
    }
  }
LABEL_125:
  v8 = -1073741675;
LABEL_126:
  if ( v8 < 0 )
    goto LABEL_86;
  if ( !a4 )
  {
    v8 = -1073741811;
    goto LABEL_86;
  }
  v8 = 0;
  *(_DWORD *)(a4 + 4) = v59;
  if ( v59 )
  {
    v65 = ExAllocatePoolWithTag(PagedPool, v59, 0x20534C53u);
    if ( v65 )
    {
      *(_QWORD *)(a4 + 8) = v65;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = -1073741762;
  }
  if ( v8 < 0 )
    goto LABEL_86;
  v66 = *(_QWORD *)(a4 + 8);
  v67 = v57 | 0x10000000;
  v68 = -1;
  if ( v66 )
  {
    v72 = 0;
    v73 = *(_DWORD **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v74 = *v73 + 4;
        if ( *v73 >= 0xFFFFFFFC )
          break;
        if ( (_DWORD *)((char *)v73 + v74) < v73 )
          goto LABEL_110;
        ++v72;
        v73 = (_DWORD *)((char *)v73 + v74);
        if ( v72 >= *(_DWORD *)a4 )
          goto LABEL_144;
      }
      v8 = -1073741675;
      goto LABEL_149;
    }
LABEL_144:
    if ( v73 + 1 >= v73 )
    {
      v8 = 0;
      if ( (unsigned __int64)(v73 + 2) > v66 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_146;
      *v73 = 4;
      v73[1] = v67;
      ++*(_DWORD *)a4;
      goto LABEL_149;
    }
    goto LABEL_110;
  }
  v69 = *(_DWORD *)(a4 + 4);
  v70 = -1;
  v71 = v69 + 8;
  if ( v69 + 8 >= v69 )
    v70 = v69 + 8;
  v8 = v71 < v69 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v70;
  if ( v71 >= v69 )
  {
    ++*(_DWORD *)a4;
    goto LABEL_150;
  }
LABEL_149:
  if ( v8 < 0 )
    goto LABEL_86;
LABEL_150:
  v75 = *(_QWORD *)(a4 + 8);
  if ( v75 )
  {
    v79 = 0;
    v80 = *(_QWORD *)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v81 = *(_DWORD *)v80 + 4;
        if ( *(_DWORD *)v80 >= 0xFFFFFFFC )
          break;
        if ( v80 + v81 < v80 )
          goto LABEL_172;
        ++v79;
        v80 += v81;
        if ( v79 >= *(_DWORD *)a4 )
          goto LABEL_159;
      }
      v8 = -1073741675;
      goto LABEL_162;
    }
LABEL_159:
    if ( v80 + 4 < v80 )
      goto LABEL_172;
    v8 = 0;
    if ( v80 + 12 <= v75 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v82 = v104;
      *(_DWORD *)v80 = 8;
      *(_QWORD *)(v80 + 4) = v82;
      ++*(_DWORD *)a4;
      goto LABEL_162;
    }
LABEL_146:
    v8 = -1073741789;
    goto LABEL_86;
  }
  v76 = *(_DWORD *)(a4 + 4);
  v77 = -1;
  v78 = v76 + 12;
  if ( v76 + 12 >= v76 )
    v77 = v76 + 12;
  v8 = v78 < v76 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v77;
  if ( v78 >= v76 )
  {
    ++*(_DWORD *)a4;
    goto LABEL_163;
  }
LABEL_162:
  if ( v8 < 0 )
    goto LABEL_86;
LABEL_163:
  v83 = v101;
  if ( v101 )
  {
    if ( !v53 )
      goto LABEL_165;
  }
  else if ( v53 )
  {
LABEL_165:
    v8 = -1073741811;
    goto LABEL_166;
  }
  v88 = *(_QWORD *)(a4 + 8);
  if ( !v88 )
  {
    if ( v58 >= 4 )
    {
      v89 = *(_DWORD *)(a4 + 4);
      v90 = -1;
      v91 = v89 + v58;
      if ( v89 + v58 >= v89 )
        v90 = v89 + v58;
      v8 = v91 < v89 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v90;
      if ( v91 >= v89 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_167;
      }
LABEL_166:
      if ( v8 < 0 )
        goto LABEL_86;
LABEL_167:
      v84 = *(_QWORD *)(a4 + 8);
      v85 = v99;
      if ( !v84 )
      {
        v86 = *(_DWORD *)(a4 + 4);
        v87 = v86 + 8;
        if ( v86 + 8 >= v86 )
          v68 = v86 + 8;
        v8 = v87 < v86 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v68;
        if ( v87 >= v86 )
        {
          ++*(_DWORD *)a4;
          v8 = 0;
        }
        goto LABEL_86;
      }
      v95 = 0;
      for ( jj = *(_DWORD **)(a4 + 8); v95 < *(_DWORD *)a4; jj = (_DWORD *)((char *)jj + v97) )
      {
        v97 = *jj + 4;
        if ( *jj >= 0xFFFFFFFC || (_DWORD *)((char *)jj + v97) < jj )
          goto LABEL_172;
        ++v95;
      }
      if ( jj + 1 >= jj )
      {
        v8 = 0;
        if ( (unsigned __int64)(jj + 2) <= v84 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *jj = 4;
          jj[1] = v85;
          ++*(_DWORD *)a4;
          goto LABEL_86;
        }
        goto LABEL_146;
      }
LABEL_172:
      v8 = -1073741675;
      goto LABEL_86;
    }
LABEL_181:
    v8 = -1073741675;
    goto LABEL_166;
  }
  v92 = 0;
  for ( kk = *(unsigned int **)(a4 + 8); v92 < *(_DWORD *)a4; kk = (unsigned int *)((char *)kk + v94) )
  {
    v94 = *kk + 4;
    if ( *kk >= 0xFFFFFFFC )
      goto LABEL_181;
    if ( (unsigned int *)((char *)kk + v94) < kk )
      goto LABEL_189;
    ++v92;
  }
  if ( kk + 1 < kk )
  {
LABEL_189:
    v8 = -1073741675;
  }
  else
  {
    v8 = 0;
    if ( (unsigned __int64)kk + v53 + 4 <= v88 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *kk = v53;
      if ( v83 )
        memmove(kk + 1, v83, v53);
      ++*(_DWORD *)a4;
      goto LABEL_166;
    }
    v8 = -1073741789;
  }
  v7 = v101;
LABEL_87:
  if ( v16 )
    ExFreePoolWithTag(v16, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v8;
}
