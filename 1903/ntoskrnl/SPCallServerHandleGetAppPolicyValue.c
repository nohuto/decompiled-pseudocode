/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x1406E51A8
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1401078A0 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetAppPolicyValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  PVOID v7; // r15
  unsigned int *v8; // rax
  unsigned int i; // ecx
  __int64 v10; // r9
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  signed int v15; // ebx
  unsigned int v16; // r8d
  unsigned int *v17; // rdx
  unsigned int *v18; // rax
  unsigned int *v19; // rax
  unsigned int n; // edx
  __int64 v21; // r9
  unsigned int *v22; // r8
  unsigned int v23; // r12d
  unsigned int ii; // r8d
  __int64 v25; // rax
  unsigned int *v26; // rdx
  unsigned int *v27; // rcx
  unsigned int v28; // r8d
  unsigned int *v29; // rax
  unsigned int v30; // esi
  int v31; // r14d
  PVOID v32; // rax
  unsigned int v33; // r11d
  PVOID v34; // rcx
  void *v35; // r12
  int v36; // r15d
  unsigned int v37; // r13d
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // r8d
  unsigned int v43; // eax
  PVOID v44; // rax
  __int64 v45; // r8
  int v46; // r15d
  int v47; // r14d
  const wchar_t *v48; // r11
  __int64 v49; // rsi
  void *v50; // r11
  PVOID PoolWithTag; // rax
  unsigned int v52; // r10d
  unsigned int *v53; // rax
  unsigned int k; // edx
  __int64 v55; // r9
  unsigned int *v56; // r8
  unsigned int *v57; // r13
  unsigned int *v58; // rax
  unsigned int m; // edx
  __int64 v60; // r9
  unsigned int *v61; // r8
  PVOID v62; // r11
  __int64 v63; // r8
  unsigned int v64; // ecx
  unsigned int *v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // r8
  int v68; // r11d
  __int64 v70; // r8
  __int64 v71; // r8
  int v72; // r11d
  __int64 v73; // r8
  int v74; // r11d
  unsigned int v75; // ecx
  _DWORD *v76; // rdx
  unsigned int v77; // eax
  unsigned int v78; // ecx
  unsigned __int64 v79; // rdx
  unsigned int v80; // eax
  unsigned int v81; // ecx
  _DWORD *v82; // rdx
  unsigned int v83; // eax
  unsigned int v84; // ecx
  _DWORD *v85; // rdx
  unsigned int v86; // eax
  unsigned int v87; // ecx
  _DWORD *v88; // rdx
  unsigned int v89; // eax
  __int64 v90; // rax
  unsigned int *v91; // rdx
  unsigned int j; // ecx
  unsigned __int64 v93; // rcx
  unsigned int v94; // edx
  int v95; // eax
  unsigned int v96; // ecx
  unsigned int v97; // edx
  int v98; // eax
  unsigned int v99; // ecx
  __int64 v100; // xmm0_8
  unsigned int v101; // edx
  int v102; // eax
  unsigned int v103; // ecx
  unsigned int v104; // edx
  int v105; // eax
  unsigned int v106; // ecx
  unsigned int v107; // edx
  int v108; // eax
  unsigned int v109; // ecx
  unsigned int v110; // ecx
  unsigned int v111; // eax
  unsigned int v112; // [rsp+30h] [rbp-41h]
  int v113; // [rsp+68h] [rbp-9h] BYREF
  int v114; // [rsp+6Ch] [rbp-5h] BYREF
  int v115; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v116; // [rsp+74h] [rbp+3h]
  PVOID P; // [rsp+78h] [rbp+7h]
  size_t pcbLength; // [rsp+80h] [rbp+Fh] BYREF
  void *Src; // [rsp+88h] [rbp+17h]
  __int64 v120; // [rsp+90h] [rbp+1Fh]
  unsigned int v122; // [rsp+E8h] [rbp+77h]

  v4 = *(unsigned int **)(a1 + 8);
  v122 = 0;
  P = 0LL;
  v113 = 0;
  v7 = 0LL;
  v114 = 0;
  v115 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v8 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_164;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_164;
    }
    v12 = *v8;
    v13 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_164:
      v15 = -1073741675;
    }
    else
    {
      v14 = 0LL;
      if ( v12 )
        v14 = v13;
      v15 = 0;
      if ( v12 != 8 )
        goto LABEL_161;
      v120 = *(_QWORD *)v14;
    }
  }
  else
  {
    v15 = -1073741811;
  }
  if ( v15 < 0 )
  {
LABEL_163:
    v35 = (void *)pcbLength;
    goto LABEL_118;
  }
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v90 = *v4;
      v91 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_157;
      v4 = (unsigned int *)((char *)v91 + v90);
      if ( (unsigned int *)((char *)v91 + v90) < v91 )
        goto LABEL_157;
    }
    v93 = *v4;
    if ( v4 + 1 < v4 )
    {
LABEL_157:
      v15 = -1073741675;
    }
    else
    {
      v48 = 0LL;
      if ( (_DWORD)v93 )
        v48 = (const wchar_t *)(v4 + 1);
      v15 = 0;
      if ( !(_DWORD)v93 )
        goto LABEL_170;
      if ( (v93 & 1) != 0 )
        goto LABEL_170;
      v49 = *v4;
      if ( v48[(v93 >> 1) - 1] )
        goto LABEL_170;
      if ( StringCbLengthW(v48, *v4, &pcbLength) < 0 || pcbLength + 2 != v49 )
      {
        v15 = -1073741762;
        goto LABEL_163;
      }
      v116 = pcbLength >> 1;
      Src = v50;
    }
  }
  else
  {
    v15 = -1073741811;
  }
  if ( v15 < 0 )
    goto LABEL_163;
  if ( 2 * v116 == -2 )
  {
LABEL_170:
    v15 = -1073741762;
    goto LABEL_163;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v116 + 2, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741801;
    goto LABEL_163;
  }
  memmove(PoolWithTag, Src, 2 * v116 + 2);
  v27 = *(unsigned int **)(a1 + 8);
  if ( !v27 || (v52 = *(_DWORD *)a1, *(_DWORD *)a1 <= 5u) )
  {
LABEL_173:
    v15 = -1073741811;
    goto LABEL_163;
  }
  v53 = *(unsigned int **)(a1 + 8);
  for ( k = 0; k < 5; ++k )
  {
    v55 = *v53;
    v56 = v53 + 1;
    if ( v53 + 1 < v53 )
      goto LABEL_242;
    v53 = (unsigned int *)((char *)v56 + v55);
    if ( (unsigned int *)((char *)v56 + v55) < v56 )
      goto LABEL_242;
  }
  v33 = *v53;
  v116 = *v53;
  if ( v53 + 1 < v53 )
  {
LABEL_242:
    v15 = -1073741675;
    goto LABEL_163;
  }
  v57 = 0LL;
  if ( v33 )
    v57 = v53 + 1;
  if ( v52 <= 6 )
  {
    v15 = -1073741811;
  }
  else
  {
    v58 = v27;
    for ( m = 0; m < 6; ++m )
    {
      v60 = *v58;
      v61 = v58 + 1;
      if ( v58 + 1 < v58 )
        goto LABEL_175;
      v58 = (unsigned int *)((char *)v61 + v60);
      if ( (unsigned int *)((char *)v61 + v60) < v61 )
        goto LABEL_175;
    }
    v16 = *v58;
    v17 = v58 + 1;
    if ( v58 + 1 >= v58 )
    {
      v18 = 0LL;
      if ( v16 )
        v18 = v17;
      v15 = 0;
      if ( v16 == 4 )
      {
        v122 = *v18;
        goto LABEL_20;
      }
LABEL_161:
      v15 = -1073741789;
      goto LABEL_163;
    }
LABEL_175:
    v15 = -1073741675;
  }
LABEL_20:
  if ( v15 < 0 )
    goto LABEL_163;
  if ( v52 <= 7 )
    goto LABEL_173;
  v19 = v27;
  for ( n = 0; n < 7; ++n )
  {
    v21 = *v19;
    v22 = v19 + 1;
    if ( v19 + 1 < v19 )
      goto LABEL_162;
    v19 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      goto LABEL_162;
  }
  v23 = *v19;
  if ( v19 + 1 < v19 )
  {
LABEL_162:
    v15 = -1073741675;
    goto LABEL_163;
  }
  if ( v23 )
    v7 = v19 + 1;
  if ( v52 > 8 )
  {
    for ( ii = 0; ii < 8; ++ii )
    {
      v25 = *v27;
      v26 = v27 + 1;
      if ( v27 + 1 < v27 )
        goto LABEL_179;
      v27 = (unsigned int *)((char *)v26 + v25);
      if ( (unsigned int *)((char *)v26 + v25) < v26 )
        goto LABEL_179;
    }
    v28 = *v27;
    if ( v27 + 1 < v27 )
    {
LABEL_179:
      v15 = -1073741675;
      goto LABEL_180;
    }
    v29 = 0LL;
    if ( v28 )
      v29 = v27 + 1;
    v15 = 0;
    if ( v28 == 4 )
    {
      v30 = *v29;
      goto LABEL_39;
    }
    v15 = -1073741789;
    goto LABEL_178;
  }
  v15 = -1073741811;
LABEL_180:
  v30 = v122;
LABEL_39:
  if ( v15 < 0 )
  {
LABEL_178:
    v35 = (void *)pcbLength;
    goto LABEL_117;
  }
  if ( v30 )
  {
    v31 = 0;
    v32 = ExAllocatePoolWithTag(PagedPool, v30, 0x20534C53u);
    P = v32;
    if ( !v32 )
    {
      v35 = (void *)pcbLength;
      v15 = -1073741801;
      v7 = 0LL;
      goto LABEL_118;
    }
    memset(v32, 0, v30);
    v33 = v116;
  }
  else
  {
    v31 = 1;
  }
  if ( qword_1409AD428 )
  {
    v34 = 0LL;
    if ( !v31 )
      v34 = P;
    v112 = v23;
    v35 = (void *)pcbLength;
    v36 = qword_1409AD428(pcbLength, v57, v33, v122, v7, v112, v34, v30, &v113, &v114, &v115);
  }
  else
  {
    v35 = (void *)pcbLength;
    v36 = -1073741637;
  }
  v37 = v30 + 4;
  if ( v30 >= 0xFFFFFFFC )
  {
    v38 = v122;
    v15 = -1073741675;
  }
  else
  {
    if ( v37 >= 0xFFFFFFEC )
      goto LABEL_138;
    if ( v30 + 32 < v30 + 24 )
      goto LABEL_138;
    if ( v30 + 40 < v30 + 32 )
      goto LABEL_138;
    v38 = v30 + 48;
    if ( v30 + 48 < v30 + 40 )
      goto LABEL_138;
    v15 = 0;
  }
  if ( v15 < 0 )
    goto LABEL_117;
  if ( v38 >= 0xFFFFFFF8 )
  {
    v15 = -1073741675;
    goto LABEL_117;
  }
  v39 = (v38 + 15) & 0xFFFFFFF8;
  if ( v39 < v38 + 8 )
  {
    v40 = v122;
    v15 = -1073741675;
  }
  else
  {
    v40 = v39 + 8;
    if ( v39 + 8 < v39 )
      goto LABEL_186;
    v15 = 0;
  }
  if ( v15 < 0 )
    goto LABEL_117;
  v41 = v40 + 4;
  if ( v41 >= 4 )
  {
    v42 = v41 + 4;
    if ( v41 + 4 >= v41 )
    {
      v43 = v42 + *(_DWORD *)(a2 + 16);
      if ( v43 >= v42 && v43 + 4 >= v43 )
      {
        v15 = v43 + 4 + *(_DWORD *)(a2 + 32) < v43 + 4 ? 0xC0000095 : 0;
        goto LABEL_64;
      }
    }
  }
LABEL_186:
  v15 = -1073741675;
LABEL_64:
  if ( v15 < 0 )
    goto LABEL_117;
  if ( !a4 )
  {
    v15 = -1073741811;
    goto LABEL_117;
  }
  v15 = 0;
  *(_DWORD *)(a4 + 4) = v38;
  if ( v38 )
  {
    v44 = ExAllocatePoolWithTag(PagedPool, v38, 0x20534C53u);
    if ( v44 )
    {
      *(_QWORD *)(a4 + 8) = v44;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v15 = -1073741801;
    }
  }
  else
  {
    v15 = -1073741762;
  }
  if ( v15 < 0 )
    goto LABEL_117;
  v45 = *(_QWORD *)(a4 + 8);
  v46 = v36 | 0x10000000;
  v47 = -1;
  if ( v45 )
  {
    v75 = 0;
    v76 = *(_DWORD **)(a4 + 8);
    if ( !*(_DWORD *)a4 )
    {
LABEL_195:
      if ( v76 + 1 >= v76 )
      {
        v15 = 0;
        if ( (unsigned __int64)(v76 + 2) > v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_198;
        *v76 = 4;
        v76[1] = v46;
        ++*(_DWORD *)a4;
        goto LABEL_124;
      }
LABEL_138:
      v15 = -1073741675;
      goto LABEL_117;
    }
    while ( 1 )
    {
      v77 = *v76 + 4;
      if ( *v76 >= 0xFFFFFFFC )
        break;
      if ( (_DWORD *)((char *)v76 + v77) < v76 )
        goto LABEL_138;
      ++v75;
      v76 = (_DWORD *)((char *)v76 + v77);
      if ( v75 >= *(_DWORD *)a4 )
        goto LABEL_195;
    }
    v15 = -1073741675;
  }
  else
  {
    v94 = *(_DWORD *)(a4 + 4);
    v95 = -1;
    v96 = v94 + 8;
    if ( v94 + 8 >= v94 )
      v95 = v94 + 8;
    v15 = v96 < v94 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v95;
    if ( v96 >= v94 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_125;
    }
  }
LABEL_124:
  if ( v15 < 0 )
    goto LABEL_117;
LABEL_125:
  v70 = *(_QWORD *)(a4 + 8);
  if ( v70 )
  {
    v78 = 0;
    v79 = *(_QWORD *)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v80 = *(_DWORD *)v79 + 4;
        if ( *(_DWORD *)v79 >= 0xFFFFFFFC )
          break;
        if ( v79 + v80 < v79 )
          goto LABEL_116;
        ++v78;
        v79 += v80;
        if ( v78 >= *(_DWORD *)a4 )
          goto LABEL_204;
      }
      v15 = -1073741675;
    }
    else
    {
LABEL_204:
      if ( v79 + 4 < v79 )
        goto LABEL_116;
      v15 = 0;
      if ( v79 + 12 > v70 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_198;
      v100 = v120;
      *(_DWORD *)v79 = 8;
      *(_QWORD *)(v79 + 4) = v100;
      ++*(_DWORD *)a4;
    }
  }
  else
  {
    v97 = *(_DWORD *)(a4 + 4);
    v98 = -1;
    v99 = v97 + 12;
    if ( v97 + 12 >= v97 )
      v98 = v97 + 12;
    v15 = v99 < v97 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v98;
    if ( v99 >= v97 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_101;
    }
  }
  if ( v15 < 0 )
    goto LABEL_117;
LABEL_101:
  v62 = P;
  if ( !P )
  {
    if ( !v30 )
      goto LABEL_103;
LABEL_208:
    v15 = -1073741811;
    goto LABEL_113;
  }
  if ( !v30 )
    goto LABEL_208;
LABEL_103:
  v63 = *(_QWORD *)(a4 + 8);
  if ( !v63 )
  {
    if ( v37 >= 4 )
    {
      v101 = *(_DWORD *)(a4 + 4);
      v102 = -1;
      v103 = v101 + v37;
      if ( v101 + v37 >= v101 )
        v102 = v101 + v37;
      v15 = v103 < v101 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v102;
      if ( v103 >= v101 )
      {
        ++*(_DWORD *)a4;
LABEL_114:
        v67 = *(_QWORD *)(a4 + 8);
        v68 = v113;
        if ( v67 )
        {
          v81 = 0;
          v82 = *(_DWORD **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v83 = *v82 + 4;
              if ( *v82 >= 0xFFFFFFFC )
                break;
              if ( (_DWORD *)((char *)v82 + v83) < v82 )
                goto LABEL_116;
              ++v81;
              v82 = (_DWORD *)((char *)v82 + v83);
              if ( v81 >= *(_DWORD *)a4 )
                goto LABEL_223;
            }
            v15 = -1073741675;
          }
          else
          {
LABEL_223:
            if ( v82 + 1 < v82 )
              goto LABEL_116;
            v15 = 0;
            if ( (unsigned __int64)(v82 + 2) > v67 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_198;
            *v82 = 4;
            v82[1] = v68;
            ++*(_DWORD *)a4;
          }
        }
        else
        {
          v104 = *(_DWORD *)(a4 + 4);
          v105 = -1;
          v106 = v104 + 8;
          if ( v104 + 8 >= v104 )
            v105 = v104 + 8;
          v15 = v106 < v104 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v105;
          if ( v106 >= v104 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_129;
          }
        }
        if ( v15 < 0 )
          goto LABEL_117;
LABEL_129:
        v71 = *(_QWORD *)(a4 + 8);
        v72 = v114;
        if ( v71 )
        {
          v84 = 0;
          v85 = *(_DWORD **)(a4 + 8);
          if ( !*(_DWORD *)a4 )
          {
LABEL_231:
            if ( v85 + 1 >= v85 )
            {
              v15 = 0;
              if ( (unsigned __int64)(v85 + 2) <= v71 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v85 = 4;
                v85[1] = v72;
                ++*(_DWORD *)a4;
                goto LABEL_132;
              }
LABEL_198:
              v15 = -1073741789;
              goto LABEL_117;
            }
LABEL_116:
            v15 = -1073741675;
            goto LABEL_117;
          }
          while ( 1 )
          {
            v86 = *v85 + 4;
            if ( *v85 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v85 + v86) < v85 )
              goto LABEL_116;
            ++v84;
            v85 = (_DWORD *)((char *)v85 + v86);
            if ( v84 >= *(_DWORD *)a4 )
              goto LABEL_231;
          }
          v15 = -1073741675;
        }
        else
        {
          v107 = *(_DWORD *)(a4 + 4);
          v108 = -1;
          v109 = v107 + 8;
          if ( v107 + 8 >= v107 )
            v108 = v107 + 8;
          v15 = v109 < v107 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v108;
          if ( v109 >= v107 )
          {
            ++*(_DWORD *)a4;
LABEL_133:
            v73 = *(_QWORD *)(a4 + 8);
            v74 = v115;
            if ( !v73 )
            {
              v110 = *(_DWORD *)(a4 + 4);
              v111 = v110 + 8;
              if ( v110 + 8 >= v110 )
                v47 = v110 + 8;
              v15 = v111 < v110 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v47;
              if ( v111 >= v110 )
              {
                ++*(_DWORD *)a4;
                v15 = 0;
              }
              goto LABEL_117;
            }
            v87 = 0;
            v88 = *(_DWORD **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v89 = *v88 + 4;
                if ( *v88 >= 0xFFFFFFFC || (_DWORD *)((char *)v88 + v89) < v88 )
                  break;
                ++v87;
                v88 = (_DWORD *)((char *)v88 + v89);
                if ( v87 >= *(_DWORD *)a4 )
                  goto LABEL_239;
              }
            }
            else
            {
LABEL_239:
              if ( v88 + 1 >= v88 )
              {
                v15 = 0;
                if ( (unsigned __int64)(v88 + 2) <= v73 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v88 = 4;
                  v88[1] = v74;
                  ++*(_DWORD *)a4;
                  goto LABEL_117;
                }
                goto LABEL_198;
              }
            }
            goto LABEL_116;
          }
        }
LABEL_132:
        if ( v15 < 0 )
          goto LABEL_117;
        goto LABEL_133;
      }
      goto LABEL_113;
    }
    goto LABEL_214;
  }
  v64 = 0;
  v65 = *(unsigned int **)(a4 + 8);
  if ( *(_DWORD *)a4 )
  {
    while ( 1 )
    {
      v66 = *v65 + 4;
      if ( *v65 >= 0xFFFFFFFC )
        break;
      if ( (unsigned int *)((char *)v65 + v66) < v65 )
        goto LABEL_215;
      ++v64;
      v65 = (unsigned int *)((char *)v65 + v66);
      if ( v64 >= *(_DWORD *)a4 )
        goto LABEL_108;
    }
LABEL_214:
    v15 = -1073741675;
    goto LABEL_113;
  }
LABEL_108:
  if ( v65 + 1 < v65 )
  {
LABEL_215:
    v15 = -1073741675;
  }
  else
  {
    v15 = 0;
    if ( (unsigned __int64)v65 + v30 + 4 <= v63 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *v65 = v30;
      if ( v62 )
        memmove(v65 + 1, v62, v30);
      ++*(_DWORD *)a4;
LABEL_113:
      if ( v15 >= 0 )
        goto LABEL_114;
LABEL_117:
      v7 = P;
      goto LABEL_118;
    }
    v15 = -1073741789;
  }
  v7 = P;
LABEL_118:
  if ( v35 )
    ExFreePoolWithTag(v35, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v15;
}
