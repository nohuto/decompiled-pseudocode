/*
 * XREFs of sub_1403230F0 @ 0x1403230F0
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403230F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned __int64 v8; // r8
  signed int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned int i; // r10d
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int v17; // r11d
  unsigned __int64 v18; // rdx
  unsigned int j; // r10d
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned int v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int v25; // r14d
  int v26; // ebx
  PVOID v27; // rcx
  unsigned int k; // r9d
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rdx
  unsigned int *v33; // rax
  PVOID v34; // r8
  int v35; // r12d
  int v36; // esi
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // r8d
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // r9d
  unsigned int v47; // eax
  int v48; // ecx
  int v49; // r11d
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned int v56; // edx
  PVOID PoolWithTag; // rax
  __int64 v58; // r10
  int v59; // r12d
  unsigned int v60; // edx
  int v61; // eax
  unsigned int v62; // ecx
  int v63; // r9d
  char *v64; // r8
  unsigned int v65; // eax
  unsigned int v66; // r12d
  char *v67; // rcx
  char *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r10
  unsigned int v72; // edx
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // r9d
  char *v76; // r8
  unsigned int v77; // eax
  unsigned int v78; // r12d
  char *v79; // rcx
  char *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  const void *v83; // r11
  __int64 v84; // r9
  int v85; // r12d
  unsigned int v86; // ecx
  unsigned int v87; // eax
  __int64 v88; // r10
  int v89; // eax
  int v90; // ecx
  unsigned int v91; // edx
  int v92; // eax
  unsigned int v93; // ecx
  int v94; // r9d
  char *v95; // r8
  unsigned int v96; // eax
  unsigned int v97; // r11d
  char *v98; // rcx
  char *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // r9
  int v102; // r10d
  char *v103; // r8
  unsigned int v104; // eax
  unsigned int v105; // r11d
  char *v106; // rcx
  char *v107; // rdx
  __int64 v108; // rax
  int v110; // [rsp+30h] [rbp-20h]
  unsigned int v111; // [rsp+34h] [rbp-1Ch]
  PVOID Src; // [rsp+40h] [rbp-10h]
  _QWORD *v113; // [rsp+48h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+40h] BYREF

  v5 = -1LL;
  LODWORD(NumberOfBytes) = 0;
  Src = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = -1LL;
      if ( v10 + 4 >= v10 )
        v12 = v10 + 4;
      v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_18;
      v13 = v12 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v13 >= v12 )
        v10 = v13;
      v9 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
        goto LABEL_18;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_18:
      v14 = NumberOfBytes;
      v16 = v113;
      goto LABEL_19;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_19:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v113 = (_QWORD *)*v16;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    if ( !v8 )
      return (unsigned int)-1073741811;
    v17 = *(_DWORD *)a1;
    if ( v17 <= 4 )
      return (unsigned int)-1073741811;
    v18 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v20 = -1LL;
      if ( v18 + 4 >= v18 )
        v20 = v18 + 4;
      v9 = v18 + 4 < v18 ? 0xC0000095 : 0;
      if ( v18 + 4 < v18 )
        goto LABEL_41;
      v21 = v20 + *(unsigned int *)v18;
      v18 = -1LL;
      if ( v21 >= v20 )
        v18 = v21;
      v9 = v21 < v20 ? 0xC0000095 : 0;
      if ( v21 < v20 )
        goto LABEL_41;
    }
    v22 = *(_DWORD *)v18;
    v23 = -1LL;
    if ( v18 + 4 >= v18 )
      v23 = v18 + 4;
    v9 = v18 + 4 < v18 ? 0xC0000095 : 0;
    if ( v18 + 4 < v18 )
    {
LABEL_41:
      v22 = NumberOfBytes;
      v24 = (__int64)v113;
      goto LABEL_42;
    }
    v24 = 0LL;
    if ( v22 )
      v24 = v23;
LABEL_42:
    if ( v9 >= 0 )
    {
      if ( v17 > 5 )
      {
        for ( k = 0; k < 5; ++k )
        {
          v29 = -1LL;
          if ( v8 + 4 >= v8 )
            v29 = v8 + 4;
          v9 = v8 + 4 < v8 ? 0xC0000095 : 0;
          if ( v8 + 4 < v8 )
            goto LABEL_64;
          v30 = v29 + *(unsigned int *)v8;
          v8 = -1LL;
          if ( v30 >= v29 )
            v8 = v30;
          v9 = v30 < v29 ? 0xC0000095 : 0;
          if ( v30 < v29 )
            goto LABEL_64;
        }
        v31 = *(_DWORD *)v8;
        v32 = -1LL;
        if ( v8 + 4 >= v8 )
          v32 = v8 + 4;
        v9 = v8 + 4 < v8 ? 0xC0000095 : 0;
        if ( v8 + 4 < v8 )
        {
LABEL_64:
          v31 = NumberOfBytes;
          v33 = (unsigned int *)v113;
          goto LABEL_65;
        }
        v33 = 0LL;
        if ( v31 )
          v33 = (unsigned int *)v32;
LABEL_65:
        if ( v9 >= 0 )
        {
          if ( v31 != 4 )
            return (unsigned int)-1073741789;
          v25 = *v33;
LABEL_46:
          if ( v9 < 0 )
            return (unsigned int)v9;
          if ( v25 )
          {
            v26 = 0;
            Src = ExAllocatePoolWithTag(PagedPool, v25, 0x20534C53u);
            v27 = Src;
            if ( !Src )
              return (unsigned int)-1073741801;
          }
          else
          {
            v27 = 0LL;
            v26 = 1;
          }
          if ( qword_14096E3A8 )
          {
            v34 = 0LL;
            if ( !v26 )
              v34 = v27;
            v35 = qword_14096E3A8(v24, v22, v34, v25, &NumberOfBytes);
          }
          else
          {
            v35 = -1073741637;
          }
          v36 = -1;
          v111 = v25 + 4;
          v37 = -1;
          if ( v25 < 0xFFFFFFFC )
            v37 = v25 + 4;
          v9 = v25 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( v25 + 4 < 4 )
            goto LABEL_85;
          v38 = v37;
          v39 = v37 + 20;
          v40 = -1;
          if ( v38 < 0xFFFFFFEC )
            v40 = v39;
          v9 = v38 >= 0xFFFFFFEC ? 0xC0000095 : 0;
          if ( v39 < 0x14 )
          {
LABEL_85:
            v41 = NumberOfBytes;
          }
          else
          {
            v41 = NumberOfBytes;
            v42 = v40 + 8;
            v43 = -1;
            if ( v40 + 8 >= v40 )
              v43 = v40 + 8;
            v9 = v42 < v40 ? 0xC0000095 : 0;
            if ( v42 >= v40 )
              v41 = v43;
          }
          if ( v9 < 0 )
            goto LABEL_206;
          v44 = -1;
          if ( v41 < 0xFFFFFFF8 )
            v44 = v41 + 8;
          v9 = v41 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
          if ( v41 + 8 >= 8 )
          {
            v45 = (v44 + 7) & 0xFFFFFFF8;
            if ( v45 >= v44 )
            {
              v47 = v45 + 8;
              v48 = -1;
              if ( v45 + 8 >= v45 )
                v48 = v45 + 8;
              v9 = v47 < v45 ? 0xC0000095 : 0;
              v46 = NumberOfBytes;
              if ( v47 >= v45 )
                v46 = v48;
            }
            else
            {
              v9 = -1073741675;
              v46 = NumberOfBytes;
            }
            if ( v9 < 0 )
              goto LABEL_206;
            v49 = *(_DWORD *)(a2 + 16);
            v50 = -1;
            if ( v46 < 0xFFFFFFFC )
              v50 = v46 + 4;
            v9 = v46 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( v46 + 4 >= 4 )
            {
              v51 = v50 + 4;
              v52 = -1;
              if ( v50 + 4 >= v50 )
                v52 = v50 + 4;
              v9 = v51 < v50 ? 0xC0000095 : 0;
              if ( v51 >= v50 )
              {
                v53 = v52 + v49;
                v54 = -1;
                if ( v52 + v49 >= v52 )
                  v54 = v52 + v49;
                v9 = v53 < v52 ? 0xC0000095 : 0;
                if ( v53 >= v52 )
                {
                  v55 = v54 + 4;
                  v56 = -1;
                  if ( v54 + 4 >= v54 )
                    v56 = v54 + 4;
                  v9 = v55 < v54 ? 0xC0000095 : 0;
                  if ( v55 >= v54 )
                    v9 = v56 + *(_DWORD *)(a2 + 32) < v56 ? 0xC0000095 : 0;
                }
              }
            }
          }
          if ( v9 < 0 )
            goto LABEL_206;
          if ( !a4 )
          {
            v9 = -1073741811;
            goto LABEL_206;
          }
          v9 = 0;
          *(_DWORD *)(a4 + 4) = v41;
          if ( v41 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v41, 0x20534C53u);
            if ( PoolWithTag )
            {
              *(_QWORD *)(a4 + 8) = PoolWithTag;
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
            goto LABEL_206;
          v58 = *(_QWORD *)(a4 + 8);
          v59 = v35 | 0x10000000;
          v110 = v59;
          if ( v58 )
          {
            v63 = 0;
            v64 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v65 = -1;
                if ( *(_DWORD *)v64 < 0xFFFFFFFC )
                  v65 = *(_DWORD *)v64 + 4;
                v9 = *(_DWORD *)v64 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v64 + 4) < 4 )
                  break;
                v66 = v65;
                v67 = v64;
                v68 = &v64[v65];
                v69 = -1LL;
                if ( v68 >= v64 )
                  v69 = (__int64)&v64[v66];
                v64 = (char *)v69;
                v9 = v68 < v67 ? 0xC0000095 : 0;
                if ( v68 < v67 )
                  break;
                if ( (unsigned int)++v63 >= *(_DWORD *)a4 )
                {
                  v59 = v110;
                  goto LABEL_133;
                }
              }
            }
            else
            {
LABEL_133:
              v70 = -1LL;
              if ( v64 + 4 >= v64 )
                v70 = (__int64)(v64 + 4);
              v9 = v64 + 4 < v64 ? 0xC0000095 : 0;
              if ( v64 + 4 >= v64 )
              {
                if ( (unsigned __int64)(v64 + 8) > v58 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_204;
                *(_DWORD *)v64 = 4;
                *(_DWORD *)v70 = v59;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v60 = *(_DWORD *)(a4 + 4);
            v61 = -1;
            v62 = v60 + 8;
            if ( v60 + 8 >= v60 )
              v61 = v60 + 8;
            v9 = v62 < v60 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v61;
            if ( v62 >= v60 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_139;
            }
          }
          if ( v9 < 0 )
            goto LABEL_206;
LABEL_139:
          v71 = *(_QWORD *)(a4 + 8);
          if ( v71 )
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
                v9 = *(_DWORD *)v76 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v76 + 4) < 4 )
                  break;
                v78 = v77;
                v79 = v76;
                v80 = &v76[v77];
                v81 = -1LL;
                if ( v80 >= v76 )
                  v81 = (__int64)&v76[v78];
                v76 = (char *)v81;
                v9 = v80 < v79 ? 0xC0000095 : 0;
                if ( v80 < v79 )
                  break;
                if ( (unsigned int)++v75 >= *(_DWORD *)a4 )
                  goto LABEL_152;
              }
            }
            else
            {
LABEL_152:
              v82 = -1LL;
              if ( v76 + 4 >= v76 )
                v82 = (__int64)(v76 + 4);
              v9 = v76 + 4 < v76 ? 0xC0000095 : 0;
              if ( v76 + 4 >= v76 )
              {
                if ( (unsigned __int64)(v76 + 12) > v71 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_204;
                *(_DWORD *)v76 = 8;
                *(_QWORD *)v82 = v113;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v72 = *(_DWORD *)(a4 + 4);
            v73 = -1;
            v74 = v72 + 12;
            if ( v72 + 12 >= v72 )
              v73 = v72 + 12;
            v9 = v74 < v72 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v73;
            if ( v74 >= v72 )
            {
              ++*(_DWORD *)a4;
LABEL_158:
              v83 = Src;
              if ( Src )
              {
                if ( !v25 )
                  goto LABEL_160;
              }
              else if ( v25 )
              {
LABEL_160:
                v9 = -1073741811;
                goto LABEL_161;
              }
              v88 = *(_QWORD *)(a4 + 8);
              if ( !v88 )
              {
                v89 = -1;
                if ( v111 >= 4 )
                  v89 = v25 + 4;
                v9 = v25 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( v111 >= 4 )
                {
                  v90 = v89;
                  v91 = *(_DWORD *)(a4 + 4);
                  v92 = -1;
                  v93 = v91 + v90;
                  if ( v93 >= v91 )
                    v92 = v93;
                  v9 = v93 < v91 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v92;
                  if ( v93 >= v91 )
                  {
                    ++*(_DWORD *)a4;
                    goto LABEL_162;
                  }
                }
LABEL_161:
                if ( v9 < 0 )
                  goto LABEL_206;
LABEL_162:
                v84 = *(_QWORD *)(a4 + 8);
                v85 = NumberOfBytes;
                if ( !v84 )
                {
                  v86 = *(_DWORD *)(a4 + 4);
                  v87 = v86 + 8;
                  if ( v86 + 8 >= v86 )
                    v36 = v86 + 8;
                  v9 = v87 < v86 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v36;
                  if ( v87 >= v86 )
                  {
                    ++*(_DWORD *)a4;
                    v9 = 0;
                  }
                  goto LABEL_206;
                }
                v102 = 0;
                v103 = *(char **)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  do
                  {
                    v104 = -1;
                    if ( *(_DWORD *)v103 < 0xFFFFFFFC )
                      v104 = *(_DWORD *)v103 + 4;
                    v9 = *(_DWORD *)v103 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v103 + 4) < 4 )
                      goto LABEL_206;
                    v105 = v104;
                    v106 = v103;
                    v107 = &v103[v104];
                    v108 = -1LL;
                    if ( v107 >= v103 )
                      v108 = (__int64)&v103[v105];
                    v103 = (char *)v108;
                    v9 = v107 < v106 ? 0xC0000095 : 0;
                    if ( v107 < v106 )
                      goto LABEL_206;
                  }
                  while ( (unsigned int)++v102 < *(_DWORD *)a4 );
                }
                if ( v103 + 4 >= v103 )
                  v5 = (__int64)(v103 + 4);
                v9 = v103 + 4 < v103 ? 0xC0000095 : 0;
                if ( v103 + 4 >= v103 )
                {
                  if ( (unsigned __int64)(v103 + 8) > v84 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_204;
                  *(_DWORD *)v103 = 4;
                  *(_DWORD *)v5 = v85;
                  ++*(_DWORD *)a4;
                }
LABEL_206:
                if ( Src )
                  ExFreePoolWithTag(Src, 0x20534C53u);
                return (unsigned int)v9;
              }
              v94 = 0;
              v95 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v96 = -1;
                  if ( *(_DWORD *)v95 < 0xFFFFFFFC )
                    v96 = *(_DWORD *)v95 + 4;
                  v9 = *(_DWORD *)v95 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v95 + 4) < 4 )
                    goto LABEL_161;
                  v97 = v96;
                  v98 = v95;
                  v99 = &v95[v96];
                  v100 = -1LL;
                  if ( v99 >= v95 )
                    v100 = (__int64)&v95[v97];
                  v95 = (char *)v100;
                  v9 = v99 < v98 ? 0xC0000095 : 0;
                  if ( v99 < v98 )
                    goto LABEL_161;
                  if ( (unsigned int)++v94 >= *(_DWORD *)a4 )
                  {
                    v83 = Src;
                    break;
                  }
                }
              }
              v101 = -1LL;
              if ( v95 + 4 >= v95 )
                v101 = (__int64)(v95 + 4);
              v9 = v95 + 4 < v95 ? 0xC0000095 : 0;
              if ( v95 + 4 < v95 )
                goto LABEL_161;
              if ( (unsigned __int64)&v95[v25 + 4] <= v88 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v95 = v25;
                if ( v83 )
                  memmove((void *)v101, v83, v25);
                ++*(_DWORD *)a4;
                goto LABEL_161;
              }
LABEL_204:
              v9 = -1073741789;
              goto LABEL_206;
            }
          }
          if ( v9 < 0 )
            goto LABEL_206;
          goto LABEL_158;
        }
      }
      else
      {
        v9 = -1073741811;
      }
      v25 = NumberOfBytes;
      goto LABEL_46;
    }
  }
  return (unsigned int)v9;
}
