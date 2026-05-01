/*
 * XREFs of ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18002A530
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18002C3AC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180036260 (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180037EB0 (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall HampDepGroupEvaluateDependencies(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rcx
  struct _HAM_DEPENDENCY_LINK *v6; // rdx
  char *v7; // r9
  struct _HAM_DEPENDENCY_LINK *v8; // rdx
  struct _HAM_DEPENDENCY_LINK *v9; // r8
  struct _HAM_DEPENDENCY_LINK *i; // rcx
  struct _HAM_DEPENDENCY_LINK *v11; // rdx
  struct _HAM_DEPENDENCY_LINK *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  struct _RTL_BALANCED_NODE *v16; // rbx
  int v17; // eax
  struct _RTL_BALANCED_NODE *v18; // rdi
  struct _RTL_BALANCED_NODE *v19; // rsi
  int v20; // eax
  struct _RTL_BALANCED_NODE *v21; // r9
  struct _RTL_BALANCED_NODE *ParentValue; // rdx
  struct _RTL_BALANCED_NODE **v23; // rdi
  bool v24; // zf
  int v25; // eax
  char v26; // al
  struct _RTL_BALANCED_NODE *v27; // rcx
  struct _RTL_BALANCED_NODE *v28; // r14
  int v29; // ecx
  int v30; // r8d
  unsigned int v31; // r9d
  __int64 v32; // r8
  struct _RTL_BALANCED_NODE *v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  void *v38; // rsi
  int v39; // ebp
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  void *v44; // rbp
  int v45; // esi
  unsigned __int64 v46; // rax
  struct _RTL_BALANCED_NODE *v47; // rdx
  struct _HAM_DEPENDENCY_LINK *v48; // r9
  struct _HAM_DEPENDENCY_LINK *j; // rcx
  struct _HAM_DEPENDENCY_LINK *v50; // rax
  struct _HAM_DEPENDENCY_LINK *v51; // rdx
  struct _HAM_DEPENDENCY_LINK *v52; // rdx
  __int64 v53; // rax
  struct _HAM_DEPENDENCY_LINK *v54; // rbx
  struct _HAM_DEPENDENCY_LINK *v55; // rdx
  char *v56; // r9
  char v57; // r11
  __int64 v58; // rcx
  int v59; // ecx
  __int64 v60; // r10
  char v61; // dl
  int v62; // eax
  char v63; // dl
  struct _HAM_DEPENDENCY_LINK *v64; // rdx
  struct _HAM_DEPENDENCY_LINK *v65; // r8
  struct _HAM_DEPENDENCY_LINK *k; // rcx
  struct _HAM_DEPENDENCY_LINK *v67; // rdx
  struct _HAM_DEPENDENCY_LINK *v68; // rdx
  char *v69; // [rsp+60h] [rbp+8h]
  struct _RTL_BALANCED_NODE *v70; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  v3 = (unsigned __int64)a1 + 72;
  v69 = (char *)a1 + 72;
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      NextLink = 0LL;
    else
      NextLink = (struct _HAM_DEPENDENCY_LINK *)(v2 ^ (v3 | 1));
  }
  else
  {
    NextLink = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 10);
  }
  if ( NextLink )
  {
    while ( 1 )
    {
      v6 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 8);
      v7 = 0LL;
      if ( v6 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
        v7 = (char *)v6 - 16;
      if ( v7 )
        break;
      NextLink = HampDepGroupGetNextLink(NextLink);
      if ( !NextLink )
        goto LABEL_29;
    }
    while ( 1 )
    {
      do
      {
        v8 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v7 + 2);
        v9 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v7 + 1);
        *((_DWORD *)v7 + 8) = 0;
        v7 = 0LL;
        if ( v8 != (struct _HAM_DEPENDENCY_LINK *)((char *)v9 + 64) )
          v7 = (char *)v8 - 16;
      }
      while ( v7 );
      i = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v9 + 1);
      if ( i )
      {
        v11 = *(struct _HAM_DEPENDENCY_LINK **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = v11;
            v11 = *(struct _HAM_DEPENDENCY_LINK **)v11;
          }
          while ( v11 );
        }
      }
      else
      {
        for ( i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v9 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              i;
              i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)i == v9 )
            break;
          v9 = i;
        }
      }
      if ( !i )
        break;
      while ( 1 )
      {
        v12 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)i + 8);
        v7 = 0LL;
        if ( v12 != (struct _HAM_DEPENDENCY_LINK *)((char *)i + 64) )
          v7 = (char *)v12 - 16;
        if ( v7 )
          break;
        i = HampDepGroupGetNextLink(i);
        if ( !i )
          goto LABEL_29;
      }
    }
  }
  while ( 1 )
  {
LABEL_29:
    v13 = *(_QWORD *)(a2 + 8);
    v14 = *(_QWORD *)a2;
    if ( (v13 & 1) != 0 )
    {
      if ( !v14 )
        break;
      v14 ^= a2;
    }
    if ( !v14 )
      break;
    if ( (*(_QWORD *)(a2 + 8) & 1LL) != 0 )
    {
      if ( v13 == 1 )
        v15 = 0LL;
      else
        v15 = v13 ^ (a2 | 1);
    }
    else
    {
      v15 = *(_QWORD *)(a2 + 8);
    }
    RtlRbRemoveNode(a2, v15);
    *(_QWORD *)(v15 + 16) = -1LL;
    v16 = *(struct _RTL_BALANCED_NODE **)v3;
    v70 = *(struct _RTL_BALANCED_NODE **)(v15 - 752);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = HampDepGroupCompareDependencyLinkForHost(&v70, v16);
        if ( !v17 )
          break;
        if ( v17 >= 0 )
          v16 = v16->Children[1];
        else
          v16 = v16->Children[0];
        if ( !v16 )
          goto LABEL_28;
      }
      v18 = v16->Children[0];
      v19 = 0LL;
      if ( v16->Children[0] )
      {
        while ( 1 )
        {
          v20 = HampDepGroupCompareDependencyLinkForHost(&v70, v18);
          if ( v20 < 0 )
            goto LABEL_50;
          if ( v20 <= 0 )
            break;
          v18 = v18->Children[1];
LABEL_51:
          if ( !v18 )
          {
            if ( v19 )
              v16 = v19;
            goto LABEL_54;
          }
        }
        v19 = v18;
LABEL_50:
        v18 = v18->Children[0];
        goto LABEL_51;
      }
LABEL_54:
      v21 = v70;
      while ( v16[1].Children[0] == v21 )
      {
        ParentValue = (struct _RTL_BALANCED_NODE *)v16[2].ParentValue;
        v23 = 0LL;
        if ( ParentValue != (struct _RTL_BALANCED_NODE *)&v16[2].16 )
          v23 = &ParentValue[-1].Children[1];
        v24 = v23 == 0LL;
        if ( v23 )
          goto LABEL_61;
        v16 = (struct _RTL_BALANCED_NODE *)HampDepGroupGetNextLink((struct _HAM_DEPENDENCY_LINK *)v16);
        if ( !v16 )
        {
          v23 = 0LL;
          v24 = 1;
LABEL_61:
          v3 = (unsigned __int64)v69;
          if ( !v24 )
          {
            while ( 1 )
            {
              if ( *((_BYTE *)v23 + 40) != 3 )
              {
                v25 = *((_DWORD *)v23 + 9);
                *((_DWORD *)v23 + 8) |= 8u;
                v26 = 2 * v25;
                v27 = *v23;
                if ( (!*v23 || (*(_BYTE *)&v27[22].16 & 8) == 0) && (v26 & 2) == 0 )
                {
                  v28 = v27[3].Children[1];
                  v29 = *(_DWORD *)(v15 + 24) >> 2;
                  v30 = LODWORD(v28[31].Children[0]) >> 2;
                  v31 = v30 & 3;
                  if ( v31 <= (v29 & 3u) )
                    LOBYTE(v30) = v29;
                  v32 = LODWORD(v28[31].Children[0]) ^ ((unsigned __int8)LODWORD(v28[31].Children[0]) ^ (unsigned __int8)(4 * v30)) & 0xCu;
                  LODWORD(v28[31].Children[0]) = v32;
                  v33 = *v23;
                  v33[18].Children[0] = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v33[18].Children[0] | 0x20);
                  LODWORD(v33[20].Children[0]) ^= (LODWORD(v33[20].Children[0]) ^ (LODWORD(v28[31].Children[0]) >> 2)) & 3;
                  v34 = (unsigned int)v28[31].Children[0];
                  v35 = v34;
                  if ( (v34 & 2) != 0 )
                  {
                    if ( v31 < ((v34 >> 2) & 3) )
                    {
                      RtlRbRemoveNode(a2, &v28[30]);
                      v28[30].ParentValue = -1LL;
                      v42 = *(_QWORD *)(a2 + 8);
                      v43 = *(_QWORD *)a2;
                      v44 = (void *)((LODWORD(v28[31].Children[0]) >> 2) & 3);
                      if ( (v42 & 1) != 0 && v43 )
                        v43 ^= a2;
                      LOBYTE(v41) = 0;
                      v45 = v42 & 1;
                      if ( v43 )
                      {
                        while ( 1 )
                        {
                          if ( (int)HampDepHostStackCompareHosts(v44, (struct _RTL_BALANCED_NODE *)v43) < 0 )
                          {
                            v46 = *(_QWORD *)v43;
                            if ( v45 )
                            {
                              if ( !v46 )
                                goto LABEL_103;
                              v46 ^= v43;
                            }
                            if ( !v46 )
                            {
LABEL_103:
                              LOBYTE(v41) = 0;
                              break;
                            }
                          }
                          else
                          {
                            v46 = *(_QWORD *)(v43 + 8);
                            if ( v45 )
                            {
                              if ( !v46 )
                                goto LABEL_97;
                              v46 ^= v43;
                            }
                            if ( !v46 )
                            {
LABEL_97:
                              LOBYTE(v41) = 1;
                              break;
                            }
                          }
                          v43 = v46;
                        }
                      }
                      RtlRbInsertNodeEx(a2, v43, v41, &v28[30]);
                    }
                  }
                  else
                  {
                    v36 = *(_QWORD *)(a2 + 8);
                    v37 = *(_QWORD *)a2;
                    v38 = (void *)((v35 >> 2) & 3);
                    if ( (v36 & 1) != 0 )
                    {
                      if ( v37 )
                        v37 ^= a2;
                      else
                        v37 = 0LL;
                    }
                    LOBYTE(v32) = 0;
                    v39 = v36 & 1;
                    if ( v37 )
                    {
                      while ( 1 )
                      {
                        if ( (int)HampDepHostStackCompareHosts(v38, (struct _RTL_BALANCED_NODE *)v37) < 0 )
                        {
                          v40 = *(_QWORD *)v37;
                          if ( v39 )
                          {
                            if ( !v40 )
                              goto LABEL_85;
                            v40 ^= v37;
                          }
                          if ( !v40 )
                          {
LABEL_85:
                            LOBYTE(v32) = 0;
                            break;
                          }
                        }
                        else
                        {
                          v40 = *(_QWORD *)(v37 + 8);
                          if ( v39 )
                          {
                            if ( !v40 )
                              goto LABEL_79;
                            v40 ^= v37;
                          }
                          if ( !v40 )
                          {
LABEL_79:
                            LOBYTE(v32) = 1;
                            break;
                          }
                        }
                        v37 = v40;
                      }
                    }
                    RtlRbInsertNodeEx(a2, v37, v32, &v28[30]);
                    LODWORD(v28[31].Children[0]) |= 2u;
                  }
                }
              }
              v47 = v23[2];
              v48 = (struct _HAM_DEPENDENCY_LINK *)v23[1];
              v23 = 0LL;
              if ( v47 != (struct _RTL_BALANCED_NODE *)((char *)v48 + 64) )
                v23 = &v47[-1].Children[1];
              if ( !v23 )
              {
                j = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v48 + 1);
                v50 = v48;
                if ( j )
                {
                  v51 = *(struct _HAM_DEPENDENCY_LINK **)j;
                  if ( *(_QWORD *)j )
                  {
                    do
                    {
                      j = v51;
                      v51 = *(struct _HAM_DEPENDENCY_LINK **)v51;
                    }
                    while ( v51 );
                  }
                }
                else
                {
                  for ( j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v48 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                        j;
                        j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)j + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( *(struct _HAM_DEPENDENCY_LINK **)j == v50 )
                      break;
                    v50 = j;
                  }
                }
                if ( !j )
                  goto LABEL_28;
                while ( 1 )
                {
                  v52 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)j + 8);
                  v23 = 0LL;
                  if ( v52 != (struct _HAM_DEPENDENCY_LINK *)((char *)j + 64) )
                    v23 = (struct _RTL_BALANCED_NODE **)((char *)v52 - 16);
                  if ( v23 )
                    break;
                  j = HampDepGroupGetNextLink(j);
                  if ( !j )
                    goto LABEL_28;
                }
              }
              if ( (struct _RTL_BALANCED_NODE *)*((_QWORD *)v48 + 3) != v23[1][1].Children[0] )
                v23 = 0LL;
              if ( !v23 )
                goto LABEL_28;
            }
          }
          goto LABEL_29;
        }
      }
    }
LABEL_28:
    v3 = (unsigned __int64)v69;
  }
  v53 = *(_QWORD *)(v3 + 8);
  if ( (v53 & 1) != 0 )
  {
    if ( v53 == 1 )
      v54 = 0LL;
    else
      v54 = (struct _HAM_DEPENDENCY_LINK *)(v53 ^ (v3 | 1));
  }
  else
  {
    v54 = *(struct _HAM_DEPENDENCY_LINK **)(v3 + 8);
  }
  if ( v54 )
  {
    while ( 1 )
    {
      v55 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v54 + 8);
      v56 = 0LL;
      if ( v55 != (struct _HAM_DEPENDENCY_LINK *)((char *)v54 + 64) )
        v56 = (char *)v55 - 16;
      if ( v56 )
        break;
      v54 = HampDepGroupGetNextLink(v54);
      if ( !v54 )
        return;
    }
    while ( 1 )
    {
      v57 = v56[40];
      if ( v57 == 1 )
      {
        if ( *(_QWORD *)(*((_QWORD *)v56 + 6) + 776LL) <= *((_QWORD *)v56 + 8)
          && *(_QWORD *)(*((_QWORD *)v56 + 7) + 776LL) <= *((_QWORD *)v56 + 9) )
        {
          goto LABEL_144;
        }
      }
      else
      {
        if ( v57 != 3 )
          goto LABEL_144;
        v58 = *((_QWORD *)v56 + 7);
        if ( *(_QWORD *)(v58 + 776) <= *((_QWORD *)v56 + 9)
          && (HIWORD(*(_DWORD *)(v58 + 632)) & 3u) < (unsigned __int64)*((int *)v56 + 21) )
        {
          goto LABEL_144;
        }
      }
      *((_DWORD *)v56 + 9) |= 1u;
LABEL_144:
      v59 = 2 * *((_DWORD *)v56 + 9);
      v60 = *(_QWORD *)v56;
      v61 = v59 | 1;
      if ( (*((_DWORD *)v56 + 8) & 8) == 0 )
        v61 = v59;
      if ( v60 && (*(_BYTE *)(v60 + 544) & 8) != 0 || (v61 & 2) != 0 )
      {
        v62 = 3;
      }
      else if ( v57 == 3 )
      {
        v62 = *((_QWORD *)v56 + 8) < *(_QWORD *)(*((_QWORD *)v56 + 6) + 776LL) ? 5 : 0;
      }
      else
      {
        if ( (*(_DWORD *)(v60 + 544) & 0xC0u) >= 0x40 || (v24 = (v61 & 1) == 0, v63 = 3, v24) )
          v63 = 1;
        v62 = 0;
        if ( (v63 == 1) != (*(_BYTE *)(*(_QWORD *)v56 + 548LL) == 1) )
        {
          LOBYTE(v62) = v63 == 1;
          ++v62;
        }
      }
      v64 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v56 + 2);
      *((_DWORD *)v56 + 8) = v62 | *((_DWORD *)v56 + 8) & 0xFFFFFFF8;
      v65 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v56 + 1);
      v56 = 0LL;
      if ( v64 != (struct _HAM_DEPENDENCY_LINK *)((char *)v65 + 64) )
        v56 = (char *)v64 - 16;
      if ( !v56 )
      {
        k = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v65 + 1);
        if ( k )
        {
          v67 = *(struct _HAM_DEPENDENCY_LINK **)k;
          if ( *(_QWORD *)k )
          {
            do
            {
              k = v67;
              v67 = *(struct _HAM_DEPENDENCY_LINK **)v67;
            }
            while ( v67 );
          }
        }
        else
        {
          for ( k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v65 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                k;
                k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( *(struct _HAM_DEPENDENCY_LINK **)k == v65 )
              break;
            v65 = k;
          }
        }
        if ( !k )
          return;
        while ( 1 )
        {
          v68 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)k + 8);
          v56 = 0LL;
          if ( v68 != (struct _HAM_DEPENDENCY_LINK *)((char *)k + 64) )
            v56 = (char *)v68 - 16;
          if ( v56 )
            break;
          k = HampDepGroupGetNextLink(k);
          if ( !k )
            return;
        }
      }
    }
  }
}
