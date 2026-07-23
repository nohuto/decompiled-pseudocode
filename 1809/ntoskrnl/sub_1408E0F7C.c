/*
 * XREFs of sub_1408E0F7C @ 0x1408E0F7C
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408E0F7C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r13
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // r14
  signed int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned int i; // r9d
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int j; // r9d
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // r9
  unsigned int *v25; // rax
  unsigned int v26; // r11d
  unsigned __int64 v27; // rdx
  int v28; // r9d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  int v33; // r9d
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // r15d
  int v38; // ebx
  void *v39; // rcx
  unsigned int k; // edx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rcx
  unsigned int v43; // ecx
  __int64 v44; // rdx
  unsigned int *v45; // rax
  void *v46; // r10
  int v47; // r14d
  int v48; // esi
  int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // r8d
  unsigned int v54; // ecx
  int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // r9d
  unsigned int v58; // edx
  unsigned int v59; // eax
  int v60; // ecx
  unsigned int v61; // ecx
  int v62; // r11d
  unsigned int v63; // eax
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // edx
  PVOID PoolWithTag; // rax
  __int64 v70; // r10
  int v71; // r14d
  unsigned int v72; // edx
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // r9d
  char *v76; // r8
  unsigned int v77; // eax
  unsigned int v78; // r14d
  char *v79; // rcx
  char *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r10
  unsigned int v84; // edx
  int v85; // eax
  unsigned int v86; // ecx
  int v87; // r9d
  char *v88; // r8
  unsigned int v89; // eax
  unsigned int v90; // r14d
  char *v91; // rcx
  char *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  _QWORD *v95; // xmm0_8
  void *v96; // r11
  __int64 v97; // r10
  int v98; // eax
  int v99; // ecx
  unsigned int v100; // edx
  int v101; // eax
  unsigned int v102; // ecx
  int v103; // r9d
  char *v104; // r8
  unsigned int v105; // eax
  unsigned int v106; // r11d
  char *v107; // rcx
  char *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // r9
  __int64 v111; // r9
  int v112; // r15d
  unsigned int v113; // ecx
  unsigned int v114; // eax
  int v115; // r10d
  char *v116; // r8
  unsigned int v117; // eax
  unsigned int v118; // r11d
  char *v119; // rcx
  char *v120; // rdx
  __int64 v121; // rax
  unsigned int v123; // [rsp+50h] [rbp-20h]
  unsigned int v124; // [rsp+50h] [rbp-20h]
  int v125; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v126; // [rsp+58h] [rbp-18h]
  void *Src; // [rsp+60h] [rbp-10h]
  _QWORD *v128; // [rsp+68h] [rbp-8h]
  unsigned int NumberOfBytes; // [rsp+C0h] [rbp+50h]
  int NumberOfBytesa; // [rsp+C0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  v123 = 0;
  NumberOfBytes = 0;
  Src = 0LL;
  v125 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v12 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v14 = -1LL;
      if ( v12 + 4 >= v12 )
        v14 = v12 + 4;
      v11 = v12 + 4 < v12 ? 0xC0000095 : 0;
      if ( v12 + 4 < v12 )
        goto LABEL_18;
      v15 = v14 + *(unsigned int *)v12;
      v12 = -1LL;
      if ( v15 >= v14 )
        v12 = v15;
      v11 = v15 < v14 ? 0xC0000095 : 0;
      if ( v15 < v14 )
        goto LABEL_18;
    }
    v16 = *(_DWORD *)v12;
    v17 = -1LL;
    if ( v12 + 4 >= v12 )
      v17 = v12 + 4;
    v11 = v12 + 4 < v12 ? 0xC0000095 : 0;
    if ( v12 + 4 < v12 )
    {
LABEL_18:
      v16 = 0;
      v18 = v128;
      goto LABEL_19;
    }
    v18 = 0LL;
    if ( v16 )
      v18 = (_QWORD *)v17;
LABEL_19:
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( v16 != 8 )
      return (unsigned int)-1073741789;
    v128 = (_QWORD *)*v18;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v19 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v21 = -1LL;
      if ( v19 + 4 >= v19 )
        v21 = v19 + 4;
      v11 = v19 + 4 < v19 ? 0xC0000095 : 0;
      if ( v19 + 4 < v19 )
        goto LABEL_41;
      v22 = v21 + *(unsigned int *)v19;
      v19 = -1LL;
      if ( v22 >= v21 )
        v19 = v22;
      v11 = v22 < v21 ? 0xC0000095 : 0;
      if ( v22 < v21 )
        goto LABEL_41;
    }
    v23 = *(_DWORD *)v19;
    v24 = -1LL;
    if ( v19 + 4 >= v19 )
      v24 = v19 + 4;
    v11 = v19 + 4 < v19 ? 0xC0000095 : 0;
    if ( v19 + 4 < v19 )
    {
LABEL_41:
      v23 = 0;
      v25 = (unsigned int *)v128;
      goto LABEL_42;
    }
    v25 = 0LL;
    if ( v23 )
      v25 = (unsigned int *)v24;
LABEL_42:
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( v23 != 4 )
      return (unsigned int)-1073741789;
    v8 = *v25;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( !v4 )
    return (unsigned int)-1073741811;
  v26 = *(_DWORD *)a1;
  if ( v26 <= 5 )
    return (unsigned int)-1073741811;
  v27 = v4;
  v28 = 0;
  while ( 1 )
  {
    v29 = -1LL;
    if ( v27 + 4 >= v27 )
      v29 = v27 + 4;
    v11 = v27 + 4 < v27 ? 0xC0000095 : 0;
    if ( v27 + 4 < v27 )
      break;
    v30 = v29 + *(unsigned int *)v27;
    v27 = -1LL;
    if ( v30 >= v29 )
      v27 = v30;
    v11 = v30 < v29 ? 0xC0000095 : 0;
    if ( v30 < v29 )
      break;
    if ( (unsigned int)++v28 >= 5 )
    {
      v31 = -1LL;
      if ( v27 + 4 >= v27 )
        v31 = v27 + 4;
      v11 = v27 + 4 < v27 ? 0xC0000095 : 0;
      if ( v27 + 4 >= v27 )
      {
        v123 = *(_DWORD *)v27;
        if ( *(_DWORD *)v27 )
          v9 = v31;
      }
      break;
    }
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v26 <= 6 )
    return (unsigned int)-1073741811;
  v32 = v4;
  v33 = 0;
  while ( 1 )
  {
    v34 = -1LL;
    if ( v32 + 4 >= v32 )
      v34 = v32 + 4;
    v11 = v32 + 4 < v32 ? 0xC0000095 : 0;
    if ( v32 + 4 < v32 )
      break;
    v35 = v34 + *(unsigned int *)v32;
    v32 = -1LL;
    if ( v35 >= v34 )
      v32 = v35;
    v11 = v35 < v34 ? 0xC0000095 : 0;
    if ( v35 < v34 )
      break;
    if ( (unsigned int)++v33 >= 6 )
    {
      v36 = -1LL;
      if ( v32 + 4 >= v32 )
        v36 = v32 + 4;
      v11 = v32 + 4 < v32 ? 0xC0000095 : 0;
      if ( v32 + 4 >= v32 )
      {
        NumberOfBytes = *(_DWORD *)v32;
        if ( *(_DWORD *)v32 )
          v10 = v36;
      }
      break;
    }
  }
  if ( v11 >= 0 )
  {
    if ( v26 > 7 )
    {
      for ( k = 0; k < 7; ++k )
      {
        v41 = -1LL;
        if ( v4 + 4 >= v4 )
          v41 = v4 + 4;
        v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
          goto LABEL_99;
        v42 = v41 + *(unsigned int *)v4;
        v4 = -1LL;
        if ( v42 >= v41 )
          v4 = v42;
        v11 = v42 < v41 ? 0xC0000095 : 0;
        if ( v42 < v41 )
          goto LABEL_99;
      }
      v43 = *(_DWORD *)v4;
      v44 = -1LL;
      if ( v4 + 4 >= v4 )
        v44 = v4 + 4;
      v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
      {
LABEL_99:
        v43 = NumberOfBytes;
        v45 = (unsigned int *)v128;
        goto LABEL_100;
      }
      v45 = 0LL;
      if ( v43 )
        v45 = (unsigned int *)v44;
LABEL_100:
      if ( v11 >= 0 )
      {
        if ( v43 != 4 )
          return (unsigned int)-1073741789;
        v37 = *v45;
LABEL_81:
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( v37 )
        {
          v38 = 0;
          Src = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
          v39 = Src;
          if ( !Src )
            return (unsigned int)-1073741801;
        }
        else
        {
          v39 = Src;
          v38 = 1;
        }
        if ( qword_14096E3E0 )
        {
          v46 = 0LL;
          if ( !v38 )
            v46 = v39;
          v47 = qword_14096E3E0(v8, v9, v123, v10, NumberOfBytes, v46, v37, &v125);
        }
        else
        {
          v47 = -1073741637;
        }
        v48 = -1;
        v124 = v37 + 4;
        v49 = -1;
        if ( v37 < 0xFFFFFFFC )
          v49 = v37 + 4;
        v126 = v37 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        v11 = v126;
        if ( v37 + 4 < 4 )
          goto LABEL_120;
        v50 = v49;
        v51 = v49 + 20;
        v52 = -1;
        if ( v50 < 0xFFFFFFEC )
          v52 = v51;
        v11 = v50 >= 0xFFFFFFEC ? 0xC0000095 : 0;
        if ( v51 < 0x14 )
        {
LABEL_120:
          v53 = NumberOfBytes;
        }
        else
        {
          v53 = NumberOfBytes;
          v54 = v52 + 8;
          v55 = -1;
          if ( v52 + 8 >= v52 )
            v55 = v52 + 8;
          v11 = v54 < v52 ? 0xC0000095 : 0;
          if ( v54 >= v52 )
            v53 = v55;
        }
        if ( v11 < 0 )
          goto LABEL_241;
        v56 = -1;
        if ( v53 < 0xFFFFFFF8 )
          v56 = v53 + 8;
        v11 = v53 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
        if ( v53 + 8 >= 8 )
        {
          v57 = NumberOfBytes;
          v58 = (v56 + 7) & 0xFFFFFFF8;
          if ( v58 >= v56 )
          {
            v59 = v58 + 8;
            v60 = -1;
            if ( v58 + 8 >= v58 )
              v60 = v58 + 8;
            v11 = v59 < v58 ? 0xC0000095 : 0;
            if ( v59 >= v58 )
              v57 = v60;
          }
          else
          {
            v11 = -1073741675;
          }
          if ( v11 < 0 )
            goto LABEL_241;
          v61 = -1;
          v62 = *(_DWORD *)(a2 + 16);
          if ( v57 < 0xFFFFFFFC )
            v61 = v57 + 4;
          v11 = v57 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v57 + 4 >= 4 )
          {
            v63 = v61 + 4;
            v64 = -1;
            if ( v61 + 4 >= v61 )
              v64 = v61 + 4;
            v11 = v63 < v61 ? 0xC0000095 : 0;
            if ( v63 >= v61 )
            {
              v65 = v64 + v62;
              v66 = -1;
              if ( v64 + v62 >= v64 )
                v66 = v64 + v62;
              v11 = v65 < v64 ? 0xC0000095 : 0;
              if ( v65 >= v64 )
              {
                v67 = v66 + 4;
                v68 = -1;
                if ( v66 + 4 >= v66 )
                  v68 = v66 + 4;
                v11 = v67 < v66 ? 0xC0000095 : 0;
                if ( v67 >= v66 )
                  v11 = v68 + *(_DWORD *)(a2 + 32) < v68 ? 0xC0000095 : 0;
              }
            }
          }
        }
        if ( v11 < 0 )
          goto LABEL_241;
        if ( !a4 )
        {
          v11 = -1073741811;
          goto LABEL_241;
        }
        v11 = 0;
        *(_DWORD *)(a4 + 4) = v53;
        if ( v53 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v53, 0x20534C53u);
          if ( PoolWithTag )
          {
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v11 = -1073741801;
          }
        }
        else
        {
          v11 = -1073741762;
        }
        if ( v11 < 0 )
          goto LABEL_241;
        v70 = *(_QWORD *)(a4 + 8);
        v71 = v47 | 0x10000000;
        NumberOfBytesa = v71;
        if ( v70 )
        {
          v75 = 0;
          v76 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v77 = -1;
              if ( *(_DWORD *)v76 < 0xFFFFFFFC )
                v77 = *(_DWORD *)v76 + 4;
              v11 = *(_DWORD *)v76 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v76 + 4) < 4 )
                break;
              v78 = v77;
              v79 = v76;
              v80 = &v76[v77];
              v81 = -1LL;
              if ( v80 >= v76 )
                v81 = (__int64)&v76[v78];
              v76 = (char *)v81;
              v11 = v80 < v79 ? 0xC0000095 : 0;
              if ( v80 < v79 )
                break;
              if ( (unsigned int)++v75 >= *(_DWORD *)a4 )
              {
                v71 = NumberOfBytesa;
                goto LABEL_168;
              }
            }
          }
          else
          {
LABEL_168:
            v82 = -1LL;
            if ( v76 + 4 >= v76 )
              v82 = (__int64)(v76 + 4);
            v11 = v76 + 4 < v76 ? 0xC0000095 : 0;
            if ( v76 + 4 >= v76 )
            {
              if ( (unsigned __int64)(v76 + 8) > v70 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_239;
              *(_DWORD *)v76 = 4;
              *(_DWORD *)v82 = v71;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v72 = *(_DWORD *)(a4 + 4);
          v73 = -1;
          v74 = v72 + 8;
          if ( v72 + 8 >= v72 )
            v73 = v72 + 8;
          v11 = v74 < v72 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v73;
          if ( v74 >= v72 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_174;
          }
        }
        if ( v11 < 0 )
          goto LABEL_241;
LABEL_174:
        v83 = *(_QWORD *)(a4 + 8);
        if ( v83 )
        {
          v87 = 0;
          v88 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v89 = -1;
              if ( *(_DWORD *)v88 < 0xFFFFFFFC )
                v89 = *(_DWORD *)v88 + 4;
              v11 = *(_DWORD *)v88 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v88 + 4) < 4 )
                break;
              v90 = v89;
              v91 = v88;
              v92 = &v88[v89];
              v93 = -1LL;
              if ( v92 >= v88 )
                v93 = (__int64)&v88[v90];
              v88 = (char *)v93;
              v11 = v92 < v91 ? 0xC0000095 : 0;
              if ( v92 < v91 )
                break;
              if ( (unsigned int)++v87 >= *(_DWORD *)a4 )
                goto LABEL_187;
            }
          }
          else
          {
LABEL_187:
            v94 = -1LL;
            if ( v88 + 4 >= v88 )
              v94 = (__int64)(v88 + 4);
            v11 = v88 + 4 < v88 ? 0xC0000095 : 0;
            if ( v88 + 4 >= v88 )
            {
              if ( (unsigned __int64)(v88 + 12) > v83 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_239;
              v95 = v128;
              *(_DWORD *)v88 = 8;
              *(_QWORD *)v94 = v95;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v84 = *(_DWORD *)(a4 + 4);
          v85 = -1;
          v86 = v84 + 12;
          if ( v84 + 12 >= v84 )
            v85 = v84 + 12;
          v11 = v86 < v84 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v85;
          if ( v86 >= v84 )
          {
            ++*(_DWORD *)a4;
LABEL_193:
            v96 = Src;
            if ( Src )
            {
              if ( !v37 )
                goto LABEL_195;
            }
            else if ( v37 )
            {
LABEL_195:
              v11 = -1073741811;
              goto LABEL_221;
            }
            v97 = *(_QWORD *)(a4 + 8);
            if ( !v97 )
            {
              v98 = -1;
              if ( v124 >= 4 )
                v98 = v37 + 4;
              v11 = v126;
              if ( v124 >= 4 )
              {
                v99 = v98;
                v100 = *(_DWORD *)(a4 + 4);
                v101 = -1;
                v102 = v100 + v99;
                if ( v102 >= v100 )
                  v101 = v102;
                v11 = v102 < v100 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v101;
                if ( v102 >= v100 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_222;
                }
              }
LABEL_221:
              if ( v11 < 0 )
                goto LABEL_241;
LABEL_222:
              v111 = *(_QWORD *)(a4 + 8);
              v112 = v125;
              if ( !v111 )
              {
                v113 = *(_DWORD *)(a4 + 4);
                v114 = v113 + 8;
                if ( v113 + 8 >= v113 )
                  v48 = v113 + 8;
                v11 = v114 < v113 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v48;
                if ( v114 >= v113 )
                {
                  ++*(_DWORD *)a4;
                  v11 = 0;
                }
                goto LABEL_241;
              }
              v115 = 0;
              v116 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                do
                {
                  v117 = -1;
                  if ( *(_DWORD *)v116 < 0xFFFFFFFC )
                    v117 = *(_DWORD *)v116 + 4;
                  v11 = *(_DWORD *)v116 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v116 + 4) < 4 )
                    goto LABEL_241;
                  v118 = v117;
                  v119 = v116;
                  v120 = &v116[v117];
                  v121 = -1LL;
                  if ( v120 >= v116 )
                    v121 = (__int64)&v116[v118];
                  v116 = (char *)v121;
                  v11 = v120 < v119 ? 0xC0000095 : 0;
                  if ( v120 < v119 )
                    goto LABEL_241;
                }
                while ( (unsigned int)++v115 < *(_DWORD *)a4 );
              }
              if ( v116 + 4 >= v116 )
                v5 = (__int64)(v116 + 4);
              v11 = v116 + 4 < v116 ? 0xC0000095 : 0;
              if ( v116 + 4 >= v116 )
              {
                if ( (unsigned __int64)(v116 + 8) > v111 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_239;
                *(_DWORD *)v116 = 4;
                *(_DWORD *)v5 = v112;
                ++*(_DWORD *)a4;
              }
LABEL_241:
              if ( Src )
                ExFreePoolWithTag(Src, 0x20534C53u);
              return (unsigned int)v11;
            }
            v103 = 0;
            v104 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v105 = -1;
                if ( *(_DWORD *)v104 < 0xFFFFFFFC )
                  v105 = *(_DWORD *)v104 + 4;
                v11 = *(_DWORD *)v104 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v104 + 4) < 4 )
                  goto LABEL_221;
                v106 = v105;
                v107 = v104;
                v108 = &v104[v105];
                v109 = -1LL;
                if ( v108 >= v104 )
                  v109 = (__int64)&v104[v106];
                v104 = (char *)v109;
                v11 = v108 < v107 ? 0xC0000095 : 0;
                if ( v108 < v107 )
                  goto LABEL_221;
                if ( (unsigned int)++v103 >= *(_DWORD *)a4 )
                {
                  v96 = Src;
                  break;
                }
              }
            }
            v110 = -1LL;
            if ( v104 + 4 >= v104 )
              v110 = (__int64)(v104 + 4);
            v11 = v104 + 4 < v104 ? 0xC0000095 : 0;
            if ( v104 + 4 < v104 )
              goto LABEL_221;
            if ( (unsigned __int64)&v104[v37 + 4] <= v97 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v104 = v37;
              if ( v96 )
                memmove((void *)v110, v96, v37);
              ++*(_DWORD *)a4;
              goto LABEL_221;
            }
LABEL_239:
            v11 = -1073741789;
            goto LABEL_241;
          }
        }
        if ( v11 < 0 )
          goto LABEL_241;
        goto LABEL_193;
      }
    }
    else
    {
      v11 = -1073741811;
    }
    v37 = NumberOfBytes;
    goto LABEL_81;
  }
  return (unsigned int)v11;
}
