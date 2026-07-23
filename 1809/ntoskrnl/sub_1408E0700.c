/*
 * XREFs of sub_1408E0700 @ 0x1408E0700
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408E0700(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // r13d
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  __int64 v9; // r12
  signed int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned int i; // r9d
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned int v19; // r11d
  unsigned __int64 v20; // rdx
  int v21; // r9d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  int v26; // r9d
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // r15d
  int v31; // ebx
  void *v32; // rcx
  unsigned int j; // edx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  unsigned int v36; // ecx
  __int64 v37; // rdx
  unsigned int *v38; // rax
  void *v39; // r10
  int v40; // r14d
  int v41; // esi
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // r8d
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // r9d
  unsigned int v51; // edx
  unsigned int v52; // eax
  int v53; // ecx
  unsigned int v54; // ecx
  int v55; // r11d
  unsigned int v56; // eax
  unsigned int v57; // edx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // edx
  PVOID PoolWithTag; // rax
  __int64 v63; // r10
  int v64; // r14d
  unsigned int v65; // edx
  int v66; // eax
  unsigned int v67; // ecx
  int v68; // r9d
  char *v69; // r8
  unsigned int v70; // eax
  unsigned int v71; // r14d
  char *v72; // rcx
  char *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r10
  unsigned int v77; // edx
  int v78; // eax
  unsigned int v79; // ecx
  int v80; // r9d
  char *v81; // r8
  unsigned int v82; // eax
  unsigned int v83; // r14d
  char *v84; // rcx
  char *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rdx
  _QWORD *v88; // xmm0_8
  void *v89; // r11
  __int64 v90; // r10
  int v91; // eax
  int v92; // ecx
  unsigned int v93; // edx
  int v94; // eax
  unsigned int v95; // ecx
  int v96; // r9d
  char *v97; // r8
  unsigned int v98; // eax
  unsigned int v99; // r11d
  char *v100; // rcx
  char *v101; // rdx
  __int64 v102; // rax
  __int64 v103; // r9
  __int64 v104; // r9
  int v105; // r15d
  unsigned int v106; // ecx
  unsigned int v107; // eax
  int v108; // r10d
  char *v109; // r8
  unsigned int v110; // eax
  unsigned int v111; // r11d
  char *v112; // rcx
  char *v113; // rdx
  __int64 v114; // rax
  int v116; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v117; // [rsp+44h] [rbp-1Ch]
  unsigned int v118; // [rsp+48h] [rbp-18h]
  void *Src; // [rsp+50h] [rbp-10h]
  _QWORD *v120; // [rsp+58h] [rbp-8h]
  unsigned int NumberOfBytes; // [rsp+B0h] [rbp+50h]
  int NumberOfBytesa; // [rsp+B0h] [rbp+50h]

  v5 = 0LL;
  NumberOfBytes = 0;
  v116 = 0;
  v6 = 0;
  v7 = 0LL;
  Src = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v12 = *(_QWORD *)(a1 + 8);
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
      v18 = v120;
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
    v120 = (_QWORD *)*v18;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( !v8 )
    return (unsigned int)-1073741811;
  v19 = *(_DWORD *)a1;
  if ( v19 <= 4 )
    return (unsigned int)-1073741811;
  v20 = v8;
  v21 = 0;
  while ( 1 )
  {
    v22 = -1LL;
    if ( v20 + 4 >= v20 )
      v22 = v20 + 4;
    v11 = v20 + 4 < v20 ? 0xC0000095 : 0;
    if ( v20 + 4 < v20 )
      break;
    v23 = v22 + *(unsigned int *)v20;
    v20 = -1LL;
    if ( v23 >= v22 )
      v20 = v23;
    v11 = v23 < v22 ? 0xC0000095 : 0;
    if ( v23 < v22 )
      break;
    if ( (unsigned int)++v21 >= 4 )
    {
      v24 = -1LL;
      if ( v20 + 4 >= v20 )
        v24 = v20 + 4;
      v11 = v20 + 4 < v20 ? 0xC0000095 : 0;
      if ( v20 + 4 >= v20 )
      {
        v6 = *(_DWORD *)v20;
        if ( *(_DWORD *)v20 )
          v5 = v24;
      }
      break;
    }
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v19 <= 5 )
    return (unsigned int)-1073741811;
  v25 = v8;
  v26 = 0;
  while ( 1 )
  {
    v27 = -1LL;
    if ( v25 + 4 >= v25 )
      v27 = v25 + 4;
    v11 = v25 + 4 < v25 ? 0xC0000095 : 0;
    if ( v25 + 4 < v25 )
      break;
    v28 = v27 + *(unsigned int *)v25;
    v25 = -1LL;
    if ( v28 >= v27 )
      v25 = v28;
    v11 = v28 < v27 ? 0xC0000095 : 0;
    if ( v28 < v27 )
      break;
    if ( (unsigned int)++v26 >= 5 )
    {
      v29 = -1LL;
      if ( v25 + 4 >= v25 )
        v29 = v25 + 4;
      v11 = v25 + 4 < v25 ? 0xC0000095 : 0;
      if ( v25 + 4 >= v25 )
      {
        NumberOfBytes = *(_DWORD *)v25;
        if ( *(_DWORD *)v25 )
          v7 = v29;
      }
      break;
    }
  }
  if ( v11 >= 0 )
  {
    if ( v19 > 6 )
    {
      for ( j = 0; j < 6; ++j )
      {
        v34 = -1LL;
        if ( v8 + 4 >= v8 )
          v34 = v8 + 4;
        v11 = v8 + 4 < v8 ? 0xC0000095 : 0;
        if ( v8 + 4 < v8 )
          goto LABEL_77;
        v35 = v34 + *(unsigned int *)v8;
        v8 = -1LL;
        if ( v35 >= v34 )
          v8 = v35;
        v11 = v35 < v34 ? 0xC0000095 : 0;
        if ( v35 < v34 )
          goto LABEL_77;
      }
      v36 = *(_DWORD *)v8;
      v37 = -1LL;
      if ( v8 + 4 >= v8 )
        v37 = v8 + 4;
      v11 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
      {
LABEL_77:
        v36 = NumberOfBytes;
        v38 = (unsigned int *)v120;
        goto LABEL_78;
      }
      v38 = 0LL;
      if ( v36 )
        v38 = (unsigned int *)v37;
LABEL_78:
      if ( v11 >= 0 )
      {
        if ( v36 != 4 )
          return (unsigned int)-1073741789;
        v30 = *v38;
LABEL_59:
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( v30 )
        {
          v31 = 0;
          Src = ExAllocatePoolWithTag(PagedPool, v30, 0x20534C53u);
          v32 = Src;
          if ( !Src )
            return (unsigned int)-1073741801;
        }
        else
        {
          v32 = Src;
          v31 = 1;
        }
        if ( qword_14096E3D8 )
        {
          v39 = 0LL;
          if ( !v31 )
            v39 = v32;
          v40 = qword_14096E3D8(v5, v6, v7, NumberOfBytes, v39, v30, &v116);
        }
        else
        {
          v40 = -1073741637;
        }
        v41 = -1;
        v117 = v30 + 4;
        v42 = -1;
        if ( v30 < 0xFFFFFFFC )
          v42 = v30 + 4;
        v118 = v30 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        v11 = v118;
        if ( v30 + 4 < 4 )
          goto LABEL_98;
        v43 = v42;
        v44 = v42 + 20;
        v45 = -1;
        if ( v43 < 0xFFFFFFEC )
          v45 = v44;
        v11 = v43 >= 0xFFFFFFEC ? 0xC0000095 : 0;
        if ( v44 < 0x14 )
        {
LABEL_98:
          v46 = NumberOfBytes;
        }
        else
        {
          v46 = NumberOfBytes;
          v47 = v45 + 8;
          v48 = -1;
          if ( v45 + 8 >= v45 )
            v48 = v45 + 8;
          v11 = v47 < v45 ? 0xC0000095 : 0;
          if ( v47 >= v45 )
            v46 = v48;
        }
        if ( v11 < 0 )
          goto LABEL_219;
        v49 = -1;
        if ( v46 < 0xFFFFFFF8 )
          v49 = v46 + 8;
        v11 = v46 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
        if ( v46 + 8 >= 8 )
        {
          v50 = NumberOfBytes;
          v51 = (v49 + 7) & 0xFFFFFFF8;
          if ( v51 >= v49 )
          {
            v52 = v51 + 8;
            v53 = -1;
            if ( v51 + 8 >= v51 )
              v53 = v51 + 8;
            v11 = v52 < v51 ? 0xC0000095 : 0;
            if ( v52 >= v51 )
              v50 = v53;
          }
          else
          {
            v11 = -1073741675;
          }
          if ( v11 < 0 )
            goto LABEL_219;
          v54 = -1;
          v55 = *(_DWORD *)(a2 + 16);
          if ( v50 < 0xFFFFFFFC )
            v54 = v50 + 4;
          v11 = v50 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v50 + 4 >= 4 )
          {
            v56 = v54 + 4;
            v57 = -1;
            if ( v54 + 4 >= v54 )
              v57 = v54 + 4;
            v11 = v56 < v54 ? 0xC0000095 : 0;
            if ( v56 >= v54 )
            {
              v58 = v57 + v55;
              v59 = -1;
              if ( v57 + v55 >= v57 )
                v59 = v57 + v55;
              v11 = v58 < v57 ? 0xC0000095 : 0;
              if ( v58 >= v57 )
              {
                v60 = v59 + 4;
                v61 = -1;
                if ( v59 + 4 >= v59 )
                  v61 = v59 + 4;
                v11 = v60 < v59 ? 0xC0000095 : 0;
                if ( v60 >= v59 )
                  v11 = v61 + *(_DWORD *)(a2 + 32) < v61 ? 0xC0000095 : 0;
              }
            }
          }
        }
        if ( v11 < 0 )
          goto LABEL_219;
        if ( !a4 )
        {
          v11 = -1073741811;
          goto LABEL_219;
        }
        v11 = 0;
        *(_DWORD *)(a4 + 4) = v46;
        if ( v46 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v46, 0x20534C53u);
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
          goto LABEL_219;
        v63 = *(_QWORD *)(a4 + 8);
        v64 = v40 | 0x10000000;
        NumberOfBytesa = v64;
        if ( v63 )
        {
          v68 = 0;
          v69 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v70 = -1;
              if ( *(_DWORD *)v69 < 0xFFFFFFFC )
                v70 = *(_DWORD *)v69 + 4;
              v11 = *(_DWORD *)v69 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v69 + 4) < 4 )
                break;
              v71 = v70;
              v72 = v69;
              v73 = &v69[v70];
              v74 = -1LL;
              if ( v73 >= v69 )
                v74 = (__int64)&v69[v71];
              v69 = (char *)v74;
              v11 = v73 < v72 ? 0xC0000095 : 0;
              if ( v73 < v72 )
                break;
              if ( (unsigned int)++v68 >= *(_DWORD *)a4 )
              {
                v64 = NumberOfBytesa;
                goto LABEL_146;
              }
            }
          }
          else
          {
LABEL_146:
            v75 = -1LL;
            if ( v69 + 4 >= v69 )
              v75 = (__int64)(v69 + 4);
            v11 = v69 + 4 < v69 ? 0xC0000095 : 0;
            if ( v69 + 4 >= v69 )
            {
              if ( (unsigned __int64)(v69 + 8) > v63 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_217;
              *(_DWORD *)v69 = 4;
              *(_DWORD *)v75 = v64;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v65 = *(_DWORD *)(a4 + 4);
          v66 = -1;
          v67 = v65 + 8;
          if ( v65 + 8 >= v65 )
            v66 = v65 + 8;
          v11 = v67 < v65 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v66;
          if ( v67 >= v65 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_152;
          }
        }
        if ( v11 < 0 )
          goto LABEL_219;
LABEL_152:
        v76 = *(_QWORD *)(a4 + 8);
        if ( v76 )
        {
          v80 = 0;
          v81 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v82 = -1;
              if ( *(_DWORD *)v81 < 0xFFFFFFFC )
                v82 = *(_DWORD *)v81 + 4;
              v11 = *(_DWORD *)v81 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v81 + 4) < 4 )
                break;
              v83 = v82;
              v84 = v81;
              v85 = &v81[v82];
              v86 = -1LL;
              if ( v85 >= v81 )
                v86 = (__int64)&v81[v83];
              v81 = (char *)v86;
              v11 = v85 < v84 ? 0xC0000095 : 0;
              if ( v85 < v84 )
                break;
              if ( (unsigned int)++v80 >= *(_DWORD *)a4 )
                goto LABEL_165;
            }
          }
          else
          {
LABEL_165:
            v87 = -1LL;
            if ( v81 + 4 >= v81 )
              v87 = (__int64)(v81 + 4);
            v11 = v81 + 4 < v81 ? 0xC0000095 : 0;
            if ( v81 + 4 >= v81 )
            {
              if ( (unsigned __int64)(v81 + 12) > v76 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_217;
              v88 = v120;
              *(_DWORD *)v81 = 8;
              *(_QWORD *)v87 = v88;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v77 = *(_DWORD *)(a4 + 4);
          v78 = -1;
          v79 = v77 + 12;
          if ( v77 + 12 >= v77 )
            v78 = v77 + 12;
          v11 = v79 < v77 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v78;
          if ( v79 >= v77 )
          {
            ++*(_DWORD *)a4;
LABEL_171:
            v89 = Src;
            if ( Src )
            {
              if ( !v30 )
                goto LABEL_173;
            }
            else if ( v30 )
            {
LABEL_173:
              v11 = -1073741811;
              goto LABEL_199;
            }
            v90 = *(_QWORD *)(a4 + 8);
            if ( !v90 )
            {
              v91 = -1;
              if ( v117 >= 4 )
                v91 = v117;
              v11 = v118;
              if ( v117 >= 4 )
              {
                v92 = v91;
                v93 = *(_DWORD *)(a4 + 4);
                v94 = -1;
                v95 = v93 + v92;
                if ( v95 >= v93 )
                  v94 = v95;
                v11 = v95 < v93 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v94;
                if ( v95 >= v93 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_200;
                }
              }
LABEL_199:
              if ( v11 < 0 )
                goto LABEL_219;
LABEL_200:
              v104 = *(_QWORD *)(a4 + 8);
              v105 = v116;
              if ( !v104 )
              {
                v106 = *(_DWORD *)(a4 + 4);
                v107 = v106 + 8;
                if ( v106 + 8 >= v106 )
                  v41 = v106 + 8;
                v11 = v107 < v106 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v41;
                if ( v107 >= v106 )
                {
                  ++*(_DWORD *)a4;
                  v11 = 0;
                }
                goto LABEL_219;
              }
              v108 = 0;
              v109 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                do
                {
                  v110 = -1;
                  if ( *(_DWORD *)v109 < 0xFFFFFFFC )
                    v110 = *(_DWORD *)v109 + 4;
                  v11 = *(_DWORD *)v109 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v109 + 4) < 4 )
                    goto LABEL_219;
                  v111 = v110;
                  v112 = v109;
                  v113 = &v109[v110];
                  v114 = -1LL;
                  if ( v113 >= v109 )
                    v114 = (__int64)&v109[v111];
                  v109 = (char *)v114;
                  v11 = v113 < v112 ? 0xC0000095 : 0;
                  if ( v113 < v112 )
                    goto LABEL_219;
                }
                while ( (unsigned int)++v108 < *(_DWORD *)a4 );
              }
              if ( v109 + 4 >= v109 )
                v9 = (__int64)(v109 + 4);
              v11 = v109 + 4 < v109 ? 0xC0000095 : 0;
              if ( v109 + 4 >= v109 )
              {
                if ( (unsigned __int64)(v109 + 8) > v104 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_217;
                *(_DWORD *)v109 = 4;
                *(_DWORD *)v9 = v105;
                ++*(_DWORD *)a4;
              }
LABEL_219:
              if ( Src )
                ExFreePoolWithTag(Src, 0x20534C53u);
              return (unsigned int)v11;
            }
            v96 = 0;
            v97 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v98 = -1;
                if ( *(_DWORD *)v97 < 0xFFFFFFFC )
                  v98 = *(_DWORD *)v97 + 4;
                v11 = *(_DWORD *)v97 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v97 + 4) < 4 )
                  goto LABEL_199;
                v99 = v98;
                v100 = v97;
                v101 = &v97[v98];
                v102 = -1LL;
                if ( v101 >= v97 )
                  v102 = (__int64)&v97[v99];
                v97 = (char *)v102;
                v11 = v101 < v100 ? 0xC0000095 : 0;
                if ( v101 < v100 )
                  goto LABEL_199;
                if ( (unsigned int)++v96 >= *(_DWORD *)a4 )
                {
                  v89 = Src;
                  break;
                }
              }
            }
            v103 = -1LL;
            if ( v97 + 4 >= v97 )
              v103 = (__int64)(v97 + 4);
            v11 = v97 + 4 < v97 ? 0xC0000095 : 0;
            if ( v97 + 4 < v97 )
              goto LABEL_199;
            if ( (unsigned __int64)&v97[v30 + 4] <= v90 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v97 = v30;
              if ( v89 )
                memmove((void *)v103, v89, v30);
              ++*(_DWORD *)a4;
              goto LABEL_199;
            }
LABEL_217:
            v11 = -1073741789;
            goto LABEL_219;
          }
        }
        if ( v11 < 0 )
          goto LABEL_219;
        goto LABEL_171;
      }
    }
    else
    {
      v11 = -1073741811;
    }
    v30 = NumberOfBytes;
    goto LABEL_59;
  }
  return (unsigned int)v11;
}
