/*
 * XREFs of RtlRbRemoveNode @ 0x180039FA0
 * Callers:
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_180036634 @ 0x180036634 (sub_180036634.c)
 *     sub_180036F20 @ 0x180036F20 (sub_180036F20.c)
 *     sub_180039500 @ 0x180039500 (sub_180039500.c)
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_18004DE5C @ 0x18004DE5C (sub_18004DE5C.c)
 *     sub_18004E180 @ 0x18004E180 (sub_18004E180.c)
 *     sub_180050744 @ 0x180050744 (sub_180050744.c)
 *     sub_1800538F4 @ 0x1800538F4 (sub_1800538F4.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  _RTL_BALANCED_NODE *v6; // rbp
  char v7; // r11
  unsigned __int64 v8; // rax
  _RTL_BALANCED_NODE *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  _BOOL8 v12; // rsi
  ULONG_PTR v13; // r8
  char v14; // r8
  _RTL_BALANCED_NODE *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  PRTL_BALANCED_NODE v18; // rax
  _RTL_BALANCED_NODE *v19; // rcx
  unsigned __int64 v20; // rax
  _RTL_BALANCED_NODE *v21; // rax
  ULONG_PTR v22; // r10
  unsigned __int64 v23; // rax
  char v24; // r11
  unsigned __int64 v25; // rcx
  ULONG_PTR v26; // rcx
  unsigned __int64 v27; // rax
  char v28; // r8
  unsigned __int64 v29; // r8
  char v30; // cl
  unsigned __int64 v31; // r9
  char v32; // cl
  unsigned __int64 v33; // rax
  ULONG_PTR v34; // rax
  ULONG_PTR v35; // rcx
  ULONG_PTR v36; // rcx
  char v37; // r9
  ULONG_PTR v38; // r11
  __int64 v39; // rax
  unsigned __int64 *v40; // r11
  ULONG_PTR v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  char v44; // cl
  _RTL_BALANCED_NODE *v45; // r15
  __int64 v46; // r11
  unsigned __int64 v47; // rax
  _RTL_BALANCED_NODE *v48; // rdx
  ULONG_PTR *p_ParentValue; // r8
  _RTL_BALANCED_NODE *v50; // r8
  char v51; // cl
  _RTL_BALANCED_NODE *v52; // rax
  char v53; // al
  char v54; // cl
  unsigned __int64 v55; // rcx
  char v56; // cl
  _RTL_BALANCED_NODE *v57; // r8
  ULONG_PTR *v58; // r10
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rax
  int v61; // r8d
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r9
  _RTL_BALANCED_NODE **v67; // rsi
  _RTL_BALANCED_NODE *v68; // r9
  __int64 v69; // rcx
  unsigned __int64 v70; // rax
  int v71; // r8d
  __int64 v72; // r10
  _RTL_BALANCED_NODE **v73; // r12
  _RTL_BALANCED_NODE *v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rax
  _RTL_BALANCED_NODE *v77; // rax
  unsigned __int64 v78; // rcx
  _RTL_BALANCED_NODE **v79; // r14
  _RTL_BALANCED_NODE *v80; // r10
  _RTL_BALANCED_NODE *v81; // rax
  bool v82; // zf
  unsigned __int64 v83; // rax
  PRTL_BALANCED_NODE Min; // r9
  unsigned __int64 Root; // rax
  _RTL_BALANCED_NODE *v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // r13
  unsigned __int64 v91; // rcx
  int v92; // r14d
  unsigned __int64 v93; // r10
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  _RTL_BALANCED_NODE **v96; // r10
  unsigned __int64 v97; // r9
  _RTL_BALANCED_NODE *v98; // rax
  _RTL_BALANCED_NODE *v99; // rcx
  ULONG_PTR v100; // r15
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rcx
  ULONG_PTR ParentValue; // r15
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  ULONG_PTR v108; // r12
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rcx
  bool v112; // zf

  v3 = (unsigned __int64)Node->Children[0];
  if ( ((__int64)Tree->Min & 1) != 0 && v3 )
    v3 ^= (unsigned __int64)Node;
  v4 = (unsigned __int64)Node->Children[1];
  if ( ((__int64)Tree->Min & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)Node;
  v5 = v4;
  if ( v3 )
    v5 = v3;
  v6 = 0LL;
  v7 = (__int64)Tree->Min & 1;
  v8 = 0LL;
  if ( v3 )
    v8 = v4;
  if ( v8 )
  {
    v20 = *(_QWORD *)v4;
    v10 = v4;
    v9 = (_RTL_BALANCED_NODE *)v4;
    LODWORD(v12) = 1;
    if ( *(_QWORD *)v4 )
    {
      LODWORD(v12) = 0;
      do
      {
        v9 = (_RTL_BALANCED_NODE *)v10;
        if ( v7 && v20 )
          v10 ^= v20;
        else
          v10 = v20;
        v20 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 );
    }
    if ( v7 && v3 )
      v21 = (_RTL_BALANCED_NODE *)(v3 ^ v10);
    else
      v21 = (_RTL_BALANCED_NODE *)v3;
    *(_QWORD *)v10 = v21;
    v22 = *(_QWORD *)(v3 + 16);
    v23 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
    v24 = (__int64)Tree->Min & 1;
    if ( v24 && v23 )
      v23 ^= v3;
    if ( (PRTL_BALANCED_NODE)v23 != Node )
      goto LABEL_200;
    v25 = v10;
    if ( v24 )
      v25 = v3 ^ v10;
    *(_QWORD *)(v3 + 16) = v25 | v22 & 3;
    v26 = *(_QWORD *)(v4 + 16);
    v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    v28 = (__int64)Tree->Min & 1;
    if ( v28 && v27 )
      v27 ^= v4;
    if ( (PRTL_BALANCED_NODE)v27 != Node )
      goto LABEL_200;
    if ( v28 )
      v29 = v4 ^ v10;
    else
      v29 = v10;
    *(_QWORD *)(v4 + 16) = v29 | v26 & 3;
    v5 = *(_QWORD *)(v10 + 8);
    v30 = (__int64)Tree->Min & 1;
    if ( v30 && v5 )
      v5 ^= v10;
    v13 = *(_QWORD *)(v10 + 16);
    if ( v30 )
      v4 ^= v10;
    *(_QWORD *)(v10 + 8) = v4;
    v31 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    v32 = (__int64)Tree->Min & 1;
    if ( v32 && v31 )
      v33 = v10 ^ v31;
    else
      v33 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v33 == v9 )
      goto LABEL_48;
    if ( v32 )
    {
      if ( !v31 )
        goto LABEL_218;
      v31 ^= v10;
    }
    if ( v31 )
      goto LABEL_200;
LABEL_218:
    if ( (_RTL_BALANCED_NODE *)v10 != v9 )
      goto LABEL_200;
LABEL_48:
    v34 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v32 )
    {
      if ( v34 )
        v34 ^= (unsigned __int64)Node;
      if ( v34 )
        v34 ^= v10;
    }
    v35 = v34 | v13 & 3;
    *(_QWORD *)(v10 + 16) = v35;
    *(_BYTE *)(v10 + 16) = v35 ^ (*(_BYTE *)&Node->16 ^ v35) & 1;
    v36 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v36 )
    {
      v37 = (__int64)Tree->Min & 1;
      if ( v37 )
        v36 ^= (unsigned __int64)Node;
      v38 = *(_QWORD *)(v36 + 8);
      if ( v37 && v38 )
        v38 ^= v36;
      v39 = 0LL;
      if ( (PRTL_BALANCED_NODE)v38 == Node )
        v39 = 8LL;
      v40 = (unsigned __int64 *)(v39 + v36);
      v41 = *(_QWORD *)(v39 + v36);
      if ( v37 && v41 )
        v41 ^= v36;
      if ( (PRTL_BALANCED_NODE)v41 != Node )
        goto LABEL_200;
      v42 = v10 ^ v36;
      v43 = v10;
      if ( v37 )
        v43 = v42;
      *v40 = v43;
    }
    else
    {
      Min = Tree->Min;
      Root = (unsigned __int64)Tree->Root;
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      if ( (PRTL_BALANCED_NODE)Root != Node )
        goto LABEL_200;
      v86 = (_RTL_BALANCED_NODE *)v10;
      if ( ((unsigned __int8)Min & 1) != 0 )
        v86 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v10);
      Tree->Root = v86;
    }
    goto LABEL_14;
  }
  v9 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v7 && v9 )
    v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v9);
  v10 = (unsigned __int64)Node;
  if ( !v9 )
  {
    if ( v5 )
      *(_QWORD *)(v5 + 16) = 0LL;
    v16 = (unsigned __int64)Tree->Min;
    v55 = (unsigned __int64)Tree->Root;
    if ( (v16 & 1) != 0 )
    {
      if ( v55 )
        v55 ^= (unsigned __int64)Tree;
      else
        v55 = 0LL;
    }
    if ( (PRTL_BALANCED_NODE)v55 != Node )
      goto LABEL_200;
    if ( (v16 & 1) != 0 )
    {
      v111 = 0LL;
      LOBYTE(v16) = v5 ^ (unsigned __int8)Tree;
      if ( v5 )
        v111 = v5 ^ (unsigned __int64)Tree;
      Tree->Min = (PRTL_BALANCED_NODE)v111;
      v56 = v111 | 1;
      LOBYTE(Tree->Min) = v56;
    }
    else
    {
      Tree->Min = (PRTL_BALANCED_NODE)v5;
      v56 = v5;
    }
    if ( (v56 & 1) != 0 )
    {
      v16 = v5 ^ (unsigned __int64)Tree;
      v112 = v5 == 0;
      goto LABEL_329;
    }
    v6 = (_RTL_BALANCED_NODE *)v5;
LABEL_85:
    Tree->Root = v6;
    return v16;
  }
  v11 = (unsigned __int64)v9->Children[1];
  if ( v7 && v11 )
    v11 ^= (unsigned __int64)v9;
  if ( (PRTL_BALANCED_NODE)v11 == Node )
  {
    LODWORD(v12) = 1;
  }
  else
  {
    v17 = (unsigned __int64)v9->Children[0];
    if ( v7 && v17 )
      v17 ^= (unsigned __int64)v9;
    if ( (PRTL_BALANCED_NODE)v17 != Node )
      goto LABEL_200;
    v18 = Tree->Min;
    LODWORD(v12) = 0;
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      if ( v18 == (PRTL_BALANCED_NODE)1 )
        v19 = 0LL;
      else
        v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v18 ^ ((unsigned __int64)Tree | 1));
    }
    else
    {
      v19 = Tree->Min;
    }
    if ( v19 == Node )
    {
      if ( v5 )
      {
        if ( ((unsigned __int8)v18 & 1) != 0 )
        {
          Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Tree ^ v5);
          LOBYTE(Tree->Min) = (unsigned __int8)Tree ^ v5 | 1;
        }
        else
        {
          Tree->Min = (PRTL_BALANCED_NODE)v5;
        }
      }
      else if ( ((unsigned __int8)v18 & 1) != 0 )
      {
        Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Tree ^ (unsigned __int64)v9);
        LOBYTE(Tree->Min) = (unsigned __int8)Tree ^ (unsigned __int8)v9 | 1;
      }
      else
      {
        Tree->Min = v9;
      }
    }
  }
  LOBYTE(v13) = Node->16;
LABEL_14:
  v14 = v13 & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v5 )
    v15 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v9);
  else
    v15 = (_RTL_BALANCED_NODE *)v5;
  LOBYTE(v16) = v12;
  v9->Children[v12] = v15;
  if ( !v5 )
  {
    if ( v14 )
      return v16;
    v44 = (char)Tree->Min;
    while ( 1 )
    {
      v45 = v9;
      v46 = !v12;
      v47 = (unsigned __int64)v9->Children[v46];
      if ( (v44 & 1) != 0 && v47 )
        v48 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ v47);
      else
        v48 = v9->Children[v46];
      p_ParentValue = &v48->ParentValue;
      if ( (*(_BYTE *)&v48->16 & 1) == 0 )
        goto LABEL_64;
      v90 = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( v90 )
          v90 ^= (unsigned __int64)Tree;
        else
          v90 = 0LL;
      }
      v91 = *p_ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v92 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v91 )
        v91 ^= (unsigned __int64)v48;
      if ( (_RTL_BALANCED_NODE *)v91 != v9 )
        goto LABEL_200;
      if ( ((__int64)Tree->Min & 1) != 0 && v47 )
        v47 ^= (unsigned __int64)v9;
      if ( (_RTL_BALANCED_NODE *)v47 != v48 )
        goto LABEL_200;
      v93 = v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v93 )
        {
LABEL_198:
          if ( (_RTL_BALANCED_NODE *)v90 != v9 )
            goto LABEL_200;
          v90 = (unsigned __int64)v48;
          goto LABEL_164;
        }
        v93 ^= (unsigned __int64)v9;
      }
      if ( !v93 )
        goto LABEL_198;
      v94 = *(_QWORD *)(v93 + 8);
      if ( ((__int64)Tree->Min & 1) != 0 && v94 )
        v94 ^= v93;
      if ( (_RTL_BALANCED_NODE *)v94 == v9 )
      {
        v95 = (unsigned __int64)v48;
        if ( ((__int64)Tree->Min & 1) != 0 )
          v95 = (unsigned __int64)v48 ^ v93;
        *(_QWORD *)(v93 + 8) = v95;
      }
      else
      {
        v106 = *(_QWORD *)v93;
        if ( ((__int64)Tree->Min & 1) != 0 && v106 )
          v106 ^= v93;
        if ( (_RTL_BALANCED_NODE *)v106 != v9 )
          goto LABEL_200;
        v107 = (unsigned __int64)v48;
        if ( ((__int64)Tree->Min & 1) != 0 )
          v107 = (unsigned __int64)v48 ^ v93;
        *(_QWORD *)v93 = v107;
      }
LABEL_164:
      if ( v92 && v93 )
        v93 ^= (unsigned __int64)v48;
      *p_ParentValue &= 3uLL;
      *p_ParentValue |= v93;
      v96 = &v48->Children[v12];
      v97 = (unsigned __int64)*v96;
      if ( !v92 )
        goto LABEL_166;
      if ( v97 )
      {
        v97 ^= (unsigned __int64)v48;
LABEL_166:
        if ( v97 )
        {
          v108 = *(_QWORD *)(v97 + 16);
          v109 = v108 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v92 && v109 )
            v109 ^= v97;
          if ( (_RTL_BALANCED_NODE *)v109 != v48 )
            goto LABEL_200;
          v110 = (unsigned __int64)v9;
          if ( v92 )
            v110 = (unsigned __int64)v9 ^ v97;
          *(_QWORD *)(v97 + 16) = v110 | v108 & 3;
        }
      }
      if ( v92 && v97 )
        v97 ^= (unsigned __int64)v9;
      v9->Children[v46] = (_RTL_BALANCED_NODE *)v97;
      v98 = v9;
      if ( v92 )
      {
        v98 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v9);
        v48 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v9);
      }
      *v96 = v98;
      v9->ParentValue &= 3uLL;
      v9->ParentValue |= (unsigned __int64)v48;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        v99 = 0LL;
        if ( v90 )
          v99 = (_RTL_BALANCED_NODE *)(v90 ^ (unsigned __int64)Tree);
      }
      else
      {
        v99 = (_RTL_BALANCED_NODE *)v90;
      }
      Tree->Root = v99;
      *(_BYTE *)p_ParentValue &= ~1u;
      *(_BYTE *)&v9->16 |= 1u;
      v44 = (char)Tree->Min;
      v48 = v9->Children[v46];
      if ( (v44 & 1) != 0 && v48 )
        v48 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v48);
LABEL_64:
      v50 = v48->Children[0];
      v51 = v44 & 1;
      if ( v48->Children[0] )
      {
        if ( v51 )
          v50 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v50);
        if ( (*(_BYTE *)&v50->16 & 1) != 0 )
          goto LABEL_89;
      }
      v52 = v48->Children[1];
      if ( v52 )
      {
        if ( v51 )
          v52 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v52);
        if ( (*(_BYTE *)&v52->16 & 1) != 0 )
        {
LABEL_89:
          v57 = v48->Children[v46];
          if ( v51 )
          {
            if ( v57 )
            {
              v57 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v57);
              goto LABEL_90;
            }
          }
          else
          {
LABEL_90:
            if ( v57 && (*(_BYTE *)&v57->16 & 1) != 0 )
              goto LABEL_92;
          }
          v68 = v48->Children[v12];
          if ( v51 && v68 )
            v68 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v68);
          *(_BYTE *)&v68->16 &= ~1u;
          v69 = (unsigned int)v12 ^ 1;
          v70 = v68->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          v71 = (__int64)Tree->Min & 1;
          if ( ((__int64)Tree->Min & 1) != 0 && v70 )
            v70 ^= (unsigned __int64)v68;
          if ( (_RTL_BALANCED_NODE *)v70 != v48 )
            goto LABEL_200;
          v72 = (unsigned int)v69;
          v73 = &v48->Children[v12];
          v74 = *v73;
          if ( ((__int64)Tree->Min & 1) != 0 && v74 )
            v74 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v74);
          if ( v74 != v68 )
            goto LABEL_200;
          v75 = (unsigned __int64)v9->Children[v69];
          if ( ((__int64)Tree->Min & 1) != 0 && v75 )
            v75 ^= (unsigned __int64)v9;
          if ( (_RTL_BALANCED_NODE *)v75 != v48 )
            goto LABEL_200;
          v76 = v48->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          if ( ((__int64)Tree->Min & 1) != 0 && v76 )
            v76 ^= (unsigned __int64)v48;
          if ( (_RTL_BALANCED_NODE *)v76 != v9 )
            goto LABEL_200;
          v77 = v68;
          v78 = (unsigned __int64)v9 ^ (unsigned __int64)v68;
          if ( ((__int64)Tree->Min & 1) != 0 )
            v77 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v68);
          v9->Children[v72] = v77;
          if ( !v71 || !v9 )
            v78 = (unsigned __int64)v9;
          v68->ParentValue &= 3uLL;
          v79 = &v68->Children[v72];
          v68->ParentValue |= v78;
          v80 = *v79;
          if ( !v71 )
          {
LABEL_130:
            if ( !v80 )
              goto LABEL_131;
            ParentValue = v80->ParentValue;
            v104 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v71 && v104 )
              v104 ^= (unsigned __int64)v80;
            if ( (_RTL_BALANCED_NODE *)v104 == v68 )
            {
              v105 = (unsigned __int64)v48;
              if ( v71 )
                v105 = (unsigned __int64)v48 ^ (unsigned __int64)v80;
              v80->ParentValue = v105 | ParentValue & 3;
              goto LABEL_131;
            }
            goto LABEL_200;
          }
          if ( v80 )
          {
            v80 = (_RTL_BALANCED_NODE *)((unsigned __int64)v68 ^ (unsigned __int64)v80);
            goto LABEL_130;
          }
LABEL_131:
          if ( v71 && v80 )
            v80 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v80);
          *v73 = v80;
          v81 = v48;
          v82 = v71 == 0;
          v57 = v48;
          if ( !v82 )
            v81 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v68);
          *v79 = v81;
          v83 = (unsigned __int64)v68;
          if ( !v82 )
            v83 = (unsigned __int64)v48 ^ (unsigned __int64)v68;
          v48->ParentValue &= 3uLL;
          v48->ParentValue |= v83;
          v48 = v68;
LABEL_92:
          v58 = &v9->ParentValue;
          *(_BYTE *)&v48->16 ^= (*(_BYTE *)&v9->16 ^ *(_BYTE *)&v48->16) & 1;
          *(_BYTE *)&v9->16 &= ~1u;
          *(_BYTE *)&v57->16 &= ~1u;
          v59 = (unsigned __int64)Tree->Root;
          if ( ((__int64)Tree->Min & 1) != 0 )
          {
            if ( v59 )
              v59 ^= (unsigned __int64)Tree;
            else
              v59 = 0LL;
          }
          v60 = v48->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          v61 = (__int64)Tree->Min & 1;
          if ( ((__int64)Tree->Min & 1) != 0 && v60 )
            v60 ^= (unsigned __int64)v48;
          if ( (_RTL_BALANCED_NODE *)v60 != v9 )
            goto LABEL_200;
          v62 = (unsigned __int64)v9->Children[v46];
          if ( ((__int64)Tree->Min & 1) != 0 && v62 )
            v62 ^= (unsigned __int64)v9;
          if ( (_RTL_BALANCED_NODE *)v62 != v48 )
LABEL_200:
            __fastfail(0x1Du);
          v63 = *v58 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( ((__int64)Tree->Min & 1) != 0 )
          {
            if ( v63 )
            {
              v63 ^= (unsigned __int64)v9;
              goto LABEL_98;
            }
          }
          else
          {
LABEL_98:
            if ( v63 )
            {
              v64 = *(_QWORD *)(v63 + 8);
              if ( ((__int64)Tree->Min & 1) != 0 && v64 )
                v64 ^= v63;
              if ( (_RTL_BALANCED_NODE *)v64 == v9 )
              {
                v65 = (unsigned __int64)v48;
                if ( ((__int64)Tree->Min & 1) != 0 )
                  v65 = (unsigned __int64)v48 ^ v63;
                *(_QWORD *)(v63 + 8) = v65;
              }
              else
              {
                v88 = *(_QWORD *)v63;
                if ( ((__int64)Tree->Min & 1) != 0 && v88 )
                  v88 ^= v63;
                if ( (_RTL_BALANCED_NODE *)v88 != v9 )
                  goto LABEL_200;
                v89 = (unsigned __int64)v48;
                if ( ((__int64)Tree->Min & 1) != 0 )
                  v89 = (unsigned __int64)v48 ^ v63;
                *(_QWORD *)v63 = v89;
              }
LABEL_104:
              if ( v61 && v63 )
                v63 ^= (unsigned __int64)v48;
              v48->ParentValue &= 3uLL;
              v48->ParentValue |= v63;
              v66 = (unsigned __int64)v48->Children[v12];
              v67 = &v48->Children[v12];
              if ( v61 )
              {
                if ( v66 )
                {
                  v66 ^= (unsigned __int64)v48;
                  goto LABEL_106;
                }
              }
              else
              {
LABEL_106:
                if ( v66 )
                {
                  v100 = *(_QWORD *)(v66 + 16);
                  v101 = v100 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v61 && v101 )
                    v101 ^= v66;
                  if ( (_RTL_BALANCED_NODE *)v101 != v48 )
                    goto LABEL_200;
                  v102 = (unsigned __int64)v9;
                  if ( v61 )
                    v102 = (unsigned __int64)v9 ^ v66;
                  *(_QWORD *)(v66 + 16) = v102 | v100 & 3;
                }
              }
              if ( v61 && v66 )
                v66 ^= (unsigned __int64)v9;
              v9->Children[v46] = (_RTL_BALANCED_NODE *)v66;
              v16 = (unsigned __int64)v48 ^ (unsigned __int64)v9;
              if ( v61 )
              {
                v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)v48 ^ (unsigned __int64)v9);
                v48 = (_RTL_BALANCED_NODE *)v16;
              }
              *v67 = v9;
              *v58 &= 3uLL;
              *v58 |= (unsigned __int64)v48;
              if ( ((__int64)Tree->Min & 1) == 0 )
              {
                Tree->Root = (PRTL_BALANCED_NODE)v59;
                return v16;
              }
              v16 = v59 ^ (unsigned __int64)Tree;
              v112 = v59 == 0;
LABEL_329:
              if ( !v112 )
                v6 = (_RTL_BALANCED_NODE *)v16;
              goto LABEL_85;
            }
          }
          if ( (_RTL_BALANCED_NODE *)v59 != v9 )
            goto LABEL_200;
          v59 = (unsigned __int64)v48;
          goto LABEL_104;
        }
      }
      v53 = (char)v9->16;
      if ( (v53 & 1) != 0 )
      {
        LOBYTE(v16) = v53 & 0xFE;
        *(_BYTE *)&v9->16 = v16;
        *(_BYTE *)&v48->16 |= 1u;
        return v16;
      }
      *(_BYTE *)&v48->16 |= 1u;
      v44 = (char)Tree->Min;
      v16 = v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v44 & 1) != 0 && v16 )
        v9 = (_RTL_BALANCED_NODE *)(v16 ^ (unsigned __int64)v9);
      else
        v9 = (_RTL_BALANCED_NODE *)(v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v9 )
        return v16;
      v87 = (unsigned __int64)v9->Children[1];
      if ( (v44 & 1) != 0 && v87 )
        v87 ^= (unsigned __int64)v9;
      v12 = v87 == (_QWORD)v45;
    }
  }
  v16 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v54 = (__int64)Tree->Min & 1;
  if ( v54 && v16 )
    v16 ^= v5;
  if ( v16 != v10 )
    goto LABEL_200;
  if ( v54 && v9 )
    v9 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v9);
  *(_QWORD *)(v5 + 16) = v9;
  return v16;
}
