/*
 * XREFs of RtlRbRemoveNode @ 0x18001ECC0
 * Callers:
 *     RtlpHpVsFreeChunkRemove @ 0x180001008 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18001DF1C (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18004EAC4 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050D6C (EtwpDereferenceUmGuidEntry.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     RtlpHpVaMgrAlloc @ 0x180063220 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x1800639A4 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  $7D93978C745EB1C2D28075BAF55422B4 v2; // di
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  _RTL_BALANCED_NODE *v8; // r14
  char v9; // di
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE *v11; // rax
  _BOOL8 v12; // r15
  PRTL_BALANCED_NODE v13; // r9
  _RTL_BALANCED_NODE *v14; // r8
  _RTL_BALANCED_NODE *v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  char v22; // di
  unsigned __int64 v23; // rax
  _RTL_BALANCED_NODE *v24; // rcx
  char v25; // di
  unsigned __int64 ParentValue; // rcx
  unsigned __int64 v27; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v28; // bl
  char v29; // si
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  _RTL_BALANCED_NODE *v34; // rdi
  unsigned __int64 v35; // rax
  _RTL_BALANCED_NODE *v36; // rax
  char v37; // si
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  PRTL_BALANCED_NODE *v40; // rdi
  unsigned __int64 v41; // rax
  PRTL_BALANCED_NODE v42; // rax
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 Root; // rax
  unsigned __int64 v45; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v46; // cl
  bool v47; // zf
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  _RTL_BALANCED_NODE *v50; // rcx
  _RTL_BALANCED_NODE *v51; // rax
  char v52; // bl
  _RTL_BALANCED_NODE *v53; // rcx
  char v54; // cl
  $7D93978C745EB1C2D28075BAF55422B4 v55; // cl
  _RTL_BALANCED_NODE *v56; // rsi
  __int64 v57; // rbp
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // rcx
  int v62; // r9d
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  _RTL_BALANCED_NODE *v73; // rax
  _RTL_BALANCED_NODE *v74; // rcx
  __int64 v75; // r9
  char v76; // cl
  __int64 v77; // r9
  $424C8BBEF8F6C852886B4C6E806B5DB0 v78; // al
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r11
  unsigned __int64 v81; // r9
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  int v84; // r11d
  __int64 *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rbx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rcx
  _RTL_BALANCED_NODE *v91; // rax
  unsigned __int64 *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rbx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // r11
  unsigned __int64 v100; // rax
  int v101; // r9d
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rbx
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx

  v2 = Tree->0;
  v4 = (unsigned __int64)Node->Children[0];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)Node;
  v6 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)Node;
  v7 = v6;
  if ( v4 )
    v7 = v4;
  v8 = 0LL;
  v9 = *(_BYTE *)&v2 & 1;
  v10 = 0LL;
  if ( v4 )
    v10 = v6;
  if ( !v10 )
  {
    v14 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v9 && v14 )
      v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v14);
    v13 = Node;
    if ( !v14 )
    {
      if ( v7 )
        *(_QWORD *)(v7 + 16) = 0LL;
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
        goto LABEL_328;
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        v45 = 0LL;
        LOBYTE(Root) = (unsigned __int8)Tree ^ v7;
        if ( v7 )
          v45 = (unsigned __int64)Tree ^ v7;
        Tree->Min = (_RTL_BALANCED_NODE *)v45;
        v46 = ($7D93978C745EB1C2D28075BAF55422B4)(v45 | 1);
        Tree->0 = v46;
      }
      else
      {
        Tree->Min = (_RTL_BALANCED_NODE *)v7;
        v46 = ($7D93978C745EB1C2D28075BAF55422B4)v7;
      }
      if ( (*(_BYTE *)&v46 & 1) != 0 )
      {
        Root = (unsigned __int64)Tree ^ v7;
        v47 = v7 == 0;
LABEL_96:
        if ( !v47 )
          v8 = (_RTL_BALANCED_NODE *)Root;
      }
      else
      {
        v8 = (_RTL_BALANCED_NODE *)v7;
      }
      Tree->Root = v8;
      return Root;
    }
    v48 = (unsigned __int64)v14->Children[1];
    if ( v9 && v48 )
      v48 ^= (unsigned __int64)v14;
    if ( (PRTL_BALANCED_NODE)v48 == Node )
    {
      LODWORD(v12) = 1;
    }
    else
    {
      v49 = (unsigned __int64)v14->Children[0];
      if ( v9 && v49 )
        v49 ^= (unsigned __int64)v14;
      if ( (PRTL_BALANCED_NODE)v49 != Node )
        goto LABEL_328;
      v50 = Tree->Min;
      LODWORD(v12) = 0;
      if ( ((unsigned __int8)v50 & 1) != 0 )
      {
        if ( v50 == (_RTL_BALANCED_NODE *)1 )
          v51 = 0LL;
        else
          v51 = (_RTL_BALANCED_NODE *)((unsigned __int64)v50 ^ ((unsigned __int64)Tree | 1));
      }
      else
      {
        v51 = Tree->Min;
      }
      if ( v51 == Node )
      {
        if ( v7 )
        {
          if ( ((unsigned __int8)v50 & 1) != 0 )
          {
            Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v7);
            Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ v7 | 1);
          }
          else
          {
            Tree->Min = (_RTL_BALANCED_NODE *)v7;
          }
        }
        else if ( ((unsigned __int8)v50 & 1) != 0 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v14);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v14 | 1);
        }
        else
        {
          Tree->Min = v14;
        }
      }
    }
    v28 = Node->0;
    goto LABEL_124;
  }
  v11 = *(_RTL_BALANCED_NODE **)v6;
  LODWORD(v12) = 1;
  v13 = (PRTL_BALANCED_NODE)v6;
  v14 = (_RTL_BALANCED_NODE *)v6;
  if ( *(_QWORD *)v6 )
  {
    LODWORD(v12) = 0;
    do
    {
      v14 = v13;
      if ( v9 && v11 )
        v13 = (PRTL_BALANCED_NODE)((unsigned __int64)v11 ^ (unsigned __int64)v13);
      else
        v13 = v11;
      v11 = v13->Children[0];
    }
    while ( v13->Children[0] );
  }
  if ( v9 && v4 )
    v15 = (_RTL_BALANCED_NODE *)(v4 ^ (unsigned __int64)v13);
  else
    v15 = (_RTL_BALANCED_NODE *)v4;
  v13->Children[0] = v15;
  v16 = *(_QWORD *)(v4 + 16);
  v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = *(_BYTE *)&Tree->0 & 1;
  if ( v18 && v17 )
    v17 ^= v4;
  if ( (PRTL_BALANCED_NODE)v17 != Node )
    goto LABEL_328;
  v19 = v4 ^ (unsigned __int64)v13;
  if ( !v18 )
    v19 = (unsigned __int64)v13;
  *(_QWORD *)(v4 + 16) = v16 & 3 | v19;
  v20 = *(_QWORD *)(v6 + 16);
  v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
  v22 = *(_BYTE *)&Tree->0 & 1;
  if ( v22 && v21 )
    v21 ^= v6;
  if ( (PRTL_BALANCED_NODE)v21 != Node )
    goto LABEL_328;
  v23 = v6 ^ (unsigned __int64)v13;
  v24 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v13);
  if ( !v22 )
    v23 = (unsigned __int64)v13;
  *(_QWORD *)(v6 + 16) = v20 & 3 | v23;
  v7 = (unsigned __int64)v13->Children[1];
  v25 = *(_BYTE *)&Tree->0 & 1;
  if ( v25 && v7 )
    v7 ^= (unsigned __int64)v13;
  if ( !v25 )
    v24 = (_RTL_BALANCED_NODE *)v6;
  v13->Children[1] = v24;
  ParentValue = v13->ParentValue;
  v27 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v28 = ($424C8BBEF8F6C852886B4C6E806B5DB0)ParentValue;
  v29 = *(_BYTE *)&Tree->0 & 1;
  if ( v29 && v27 )
    v30 = (unsigned __int64)v13 ^ v27;
  else
    v30 = v13->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (_RTL_BALANCED_NODE *)v30 != v14 )
  {
    v28 = ($424C8BBEF8F6C852886B4C6E806B5DB0)ParentValue;
    if ( v29 )
    {
      if ( !v27 )
        goto LABEL_49;
      v27 ^= (unsigned __int64)v13;
    }
    if ( v27 )
      goto LABEL_328;
LABEL_49:
    if ( v13 != v14 )
      goto LABEL_328;
  }
  v31 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v29 )
  {
    if ( v31 )
      v31 ^= (unsigned __int64)Node;
    if ( v31 )
      v31 ^= (unsigned __int64)v13;
  }
  v32 = v31 | ParentValue & 3;
  v13->ParentValue = v32;
  v13->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v32 ^ (*(_BYTE *)&Node->0 ^ v32) & 1);
  v33 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v33 )
  {
    v37 = *(_BYTE *)&Tree->0 & 1;
    if ( v37 )
      v33 ^= (unsigned __int64)Node;
    v38 = *(_QWORD *)(v33 + 8);
    if ( v37 && v38 )
      v38 ^= v33;
    v39 = 0LL;
    if ( (PRTL_BALANCED_NODE)v38 == Node )
      v39 = 8LL;
    v40 = (PRTL_BALANCED_NODE *)(v39 + v33);
    v41 = *(_QWORD *)(v39 + v33);
    if ( v37 && v41 )
      v41 ^= v33;
    if ( (PRTL_BALANCED_NODE)v41 != Node )
      goto LABEL_328;
    v42 = (PRTL_BALANCED_NODE)(v33 ^ (unsigned __int64)v13);
    if ( !v37 )
      v42 = v13;
    *v40 = v42;
  }
  else
  {
    v34 = Tree->Min;
    v35 = (unsigned __int64)Tree->Root;
    if ( ((unsigned __int8)v34 & 1) != 0 )
    {
      if ( v35 )
        v35 ^= (unsigned __int64)Tree;
      else
        v35 = 0LL;
    }
    if ( (PRTL_BALANCED_NODE)v35 != Node )
      goto LABEL_328;
    v36 = v13;
    if ( ((unsigned __int8)v34 & 1) != 0 )
      v36 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v13);
    Tree->Root = v36;
  }
LABEL_124:
  v52 = *(_BYTE *)&v28 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v7 )
    v53 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v14);
  else
    v53 = (_RTL_BALANCED_NODE *)v7;
  LOBYTE(Root) = v12;
  v14->Children[v12] = v53;
  if ( v7 )
  {
    Root = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v54 = *(_BYTE *)&Tree->0 & 1;
    if ( v54 && Root )
      Root ^= v7;
    if ( (PRTL_BALANCED_NODE)Root != v13 )
      goto LABEL_328;
    if ( v54 && v14 )
      v14 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v14);
    *(_QWORD *)(v7 + 16) = v14;
    return Root;
  }
  if ( v52 )
    return Root;
  v55 = Tree->0;
  while ( 1 )
  {
    v56 = v14;
    v57 = !v12;
    v58 = (unsigned __int64)v14->Children[v57];
    if ( (*(_BYTE *)&v55 & 1) != 0 && v58 )
      v59 = (unsigned __int64)v14 ^ v58;
    else
      v59 = (unsigned __int64)v14->Children[v57];
    if ( (*(_BYTE *)(v59 + 16) & 1) == 0 )
      goto LABEL_205;
    v60 = (unsigned __int64)Tree->Root;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( v60 )
        v60 ^= (unsigned __int64)Tree;
      else
        v60 = 0LL;
    }
    v61 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v62 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v61 )
      v61 ^= v59;
    if ( (_RTL_BALANCED_NODE *)v61 != v14 )
      goto LABEL_328;
    if ( ((__int64)Tree->Min & 1) != 0 && v58 )
      v58 ^= (unsigned __int64)v14;
    if ( v58 != v59 )
      goto LABEL_328;
    v63 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( !v63 )
        goto LABEL_160;
      v63 ^= (unsigned __int64)v14;
    }
    if ( !v63 )
    {
LABEL_160:
      if ( (_RTL_BALANCED_NODE *)v60 != v14 )
        goto LABEL_328;
      v60 = v59;
      goto LABEL_176;
    }
    v64 = *(_QWORD *)(v63 + 8);
    if ( ((__int64)Tree->Min & 1) != 0 && v64 )
      v64 ^= v63;
    if ( (_RTL_BALANCED_NODE *)v64 == v14 )
    {
      v65 = v59 ^ v63;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v65 = v59;
      *(_QWORD *)(v63 + 8) = v65;
    }
    else
    {
      v66 = *(_QWORD *)v63;
      if ( ((__int64)Tree->Min & 1) != 0 && v66 )
        v66 ^= v63;
      if ( (_RTL_BALANCED_NODE *)v66 != v14 )
        goto LABEL_328;
      v67 = v59 ^ v63;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v67 = v59;
      *(_QWORD *)v63 = v67;
    }
LABEL_176:
    if ( v62 && v63 )
      v63 ^= v59;
    *(_QWORD *)(v59 + 16) &= 3uLL;
    *(_QWORD *)(v59 + 16) |= v63;
    v68 = *(_QWORD *)(v59 + 8 * v12);
    if ( !v62 )
      goto LABEL_182;
    if ( v68 )
    {
      v68 ^= v59;
LABEL_182:
      if ( v68 )
      {
        v69 = *(_QWORD *)(v68 + 16);
        v70 = v69 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v62 && v70 )
          v70 ^= v68;
        if ( v70 != v59 )
          goto LABEL_328;
        v71 = v68 ^ (unsigned __int64)v14;
        if ( !v62 )
          v71 = (unsigned __int64)v14;
        *(_QWORD *)(v68 + 16) = v69 & 3 | v71;
      }
    }
    if ( v62 && v68 )
      v68 ^= (unsigned __int64)v14;
    v14->Children[v57] = (_RTL_BALANCED_NODE *)v68;
    v72 = v59 ^ (unsigned __int64)v14;
    v73 = (_RTL_BALANCED_NODE *)(v59 ^ (unsigned __int64)v14);
    if ( !v62 )
      v73 = v14;
    *(_QWORD *)(v59 + 8 * v12) = v73;
    v14->ParentValue &= 3uLL;
    if ( !v62 )
      v72 = v59;
    v14->ParentValue |= v72;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      v74 = 0LL;
      if ( v60 )
        v74 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v60);
    }
    else
    {
      v74 = (_RTL_BALANCED_NODE *)v60;
    }
    Tree->Root = v74;
    *(_BYTE *)(v59 + 16) &= ~1u;
    *(_BYTE *)&v14->0 |= 1u;
    v55 = Tree->0;
    v59 = (unsigned __int64)v14->Children[v57];
    if ( (*(_BYTE *)&v55 & 1) != 0 && v59 )
      v59 ^= (unsigned __int64)v14;
LABEL_205:
    v75 = *(_QWORD *)v59;
    v76 = *(_BYTE *)&v55 & 1;
    if ( *(_QWORD *)v59 )
    {
      if ( v76 )
        v75 ^= v59;
      if ( (*(_BYTE *)(v75 + 16) & 1) != 0 )
        break;
    }
    v77 = *(_QWORD *)(v59 + 8);
    if ( v77 )
    {
      if ( v76 )
        v77 ^= v59;
      if ( (*(_BYTE *)(v77 + 16) & 1) != 0 )
        break;
    }
    v78 = v14->0;
    if ( (*(_BYTE *)&v78 & 1) != 0 )
    {
      LOBYTE(Root) = *(_BYTE *)&v78 & 0xFE;
      v14->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)Root;
      *(_BYTE *)(v59 + 16) |= 1u;
      return Root;
    }
    *(_BYTE *)(v59 + 16) |= 1u;
    v55 = Tree->0;
    Root = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v55 & 1) != 0 && Root )
      v14 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v14);
    else
      v14 = (_RTL_BALANCED_NODE *)(v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v14 )
      return Root;
    v79 = (unsigned __int64)v14->Children[1];
    if ( (*(_BYTE *)&v55 & 1) != 0 && v79 )
      v79 ^= (unsigned __int64)v14;
    v12 = v79 == (_QWORD)v56;
  }
  v80 = *(_QWORD *)(v59 + 8 * v57);
  if ( !v76 )
  {
LABEL_226:
    if ( !v80 || (*(_BYTE *)(v80 + 16) & 1) == 0 )
      goto LABEL_228;
    goto LABEL_271;
  }
  if ( v80 )
  {
    v80 ^= v59;
    goto LABEL_226;
  }
LABEL_228:
  v81 = *(_QWORD *)(v59 + 8 * v12);
  if ( v76 && v81 )
    v81 ^= v59;
  *(_BYTE *)(v81 + 16) &= ~1u;
  v82 = (unsigned int)v12 ^ 1;
  v83 = *(_QWORD *)(v81 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v84 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v83 )
    v83 ^= v81;
  if ( v83 != v59 )
    goto LABEL_328;
  v85 = (__int64 *)(v59 + 8 * v12);
  v86 = *v85;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v86 )
    v86 ^= v59;
  if ( v86 != v81 )
    goto LABEL_328;
  v87 = 8 * v82;
  v88 = (unsigned __int64)v14->Children[v82];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v88 )
    v88 ^= (unsigned __int64)v14;
  if ( v88 != v59 )
    goto LABEL_328;
  v89 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v89 )
    v89 ^= v59;
  if ( (_RTL_BALANCED_NODE *)v89 != v14 )
    goto LABEL_328;
  v90 = v81 ^ (unsigned __int64)v14;
  v91 = (_RTL_BALANCED_NODE *)(v81 ^ (unsigned __int64)v14);
  if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
    v91 = (_RTL_BALANCED_NODE *)v81;
  v14->Children[(unsigned __int64)v87 / 8] = v91;
  if ( !v84 || !v14 )
    v90 = (unsigned __int64)v14;
  *(_QWORD *)(v81 + 16) &= 3uLL;
  v92 = (unsigned __int64 *)(v87 + v81);
  *(_QWORD *)(v81 + 16) |= v90;
  v93 = *(_QWORD *)(v87 + v81);
  if ( !v84 )
  {
LABEL_255:
    if ( !v93 )
      goto LABEL_263;
    v94 = *(_QWORD *)(v93 + 16);
    v95 = v94 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v84 && v95 )
      v95 ^= v93;
    if ( v95 == v81 )
    {
      v96 = v93 ^ v59;
      if ( !v84 )
        v96 = v59;
      *(_QWORD *)(v93 + 16) = v94 & 3 | v96;
      goto LABEL_263;
    }
    goto LABEL_328;
  }
  if ( v93 )
  {
    v93 ^= v81;
    goto LABEL_255;
  }
LABEL_263:
  if ( v84 && v93 )
    v93 ^= v59;
  *v85 = v93;
  v97 = v81 ^ v59;
  v98 = v81 ^ v59;
  if ( !v84 )
    v98 = v59;
  *v92 = v98;
  *(_QWORD *)(v59 + 16) &= 3uLL;
  v47 = v84 == 0;
  v80 = v59;
  if ( v47 )
    v97 = v81;
  *(_QWORD *)(v59 + 16) |= v97;
  v59 = v81;
LABEL_271:
  *(_BYTE *)(v59 + 16) ^= (*(_BYTE *)&v14->0 ^ *(_BYTE *)(v59 + 16)) & 1;
  *(_BYTE *)&v14->0 &= ~1u;
  *(_BYTE *)(v80 + 16) &= ~1u;
  v99 = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v99 )
      v99 ^= (unsigned __int64)Tree;
    else
      v99 = 0LL;
  }
  v100 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v101 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v100 )
    v100 ^= v59;
  if ( (_RTL_BALANCED_NODE *)v100 != v14 )
    goto LABEL_328;
  v102 = (unsigned __int64)v14->Children[v57];
  if ( ((__int64)Tree->Min & 1) != 0 && v102 )
    v102 ^= (unsigned __int64)v14;
  if ( v102 != v59 )
LABEL_328:
    __fastfail(0x1Du);
  v103 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) == 0 )
    goto LABEL_286;
  if ( !v103 )
    goto LABEL_287;
  v103 ^= (unsigned __int64)v14;
LABEL_286:
  if ( !v103 )
  {
LABEL_287:
    if ( (_RTL_BALANCED_NODE *)v99 == v14 )
    {
      v99 = v59;
      goto LABEL_303;
    }
    goto LABEL_328;
  }
  v104 = *(_QWORD *)(v103 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v104 )
    v104 ^= v103;
  if ( (_RTL_BALANCED_NODE *)v104 == v14 )
  {
    v105 = v103 ^ v59;
    if ( ((__int64)Tree->Min & 1) == 0 )
      v105 = v59;
    *(_QWORD *)(v103 + 8) = v105;
  }
  else
  {
    v106 = *(_QWORD *)v103;
    if ( ((__int64)Tree->Min & 1) != 0 && v106 )
      v106 ^= v103;
    if ( (_RTL_BALANCED_NODE *)v106 != v14 )
      goto LABEL_328;
    v107 = v103 ^ v59;
    if ( ((__int64)Tree->Min & 1) == 0 )
      v107 = v59;
    *(_QWORD *)v103 = v107;
  }
LABEL_303:
  if ( v101 && v103 )
    v103 ^= v59;
  *(_QWORD *)(v59 + 16) &= 3uLL;
  *(_QWORD *)(v59 + 16) |= v103;
  v108 = *(_QWORD *)(v59 + 8 * v12);
  if ( v101 )
  {
    if ( v108 )
    {
      v108 ^= v59;
      goto LABEL_309;
    }
  }
  else
  {
LABEL_309:
    if ( v108 )
    {
      v109 = *(_QWORD *)(v108 + 16);
      v110 = v109 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v101 && v110 )
        v110 ^= v108;
      if ( v110 != v59 )
        goto LABEL_328;
      v111 = v108 ^ (unsigned __int64)v14;
      if ( !v101 )
        v111 = (unsigned __int64)v14;
      *(_QWORD *)(v108 + 16) = v109 & 3 | v111;
    }
  }
  if ( v101 && v108 )
    v108 ^= (unsigned __int64)v14;
  v14->Children[!v12] = (_RTL_BALANCED_NODE *)v108;
  v112 = v59 ^ (unsigned __int64)v14;
  Root = v59 ^ (unsigned __int64)v14;
  if ( !v101 )
    Root = (unsigned __int64)v14;
  *(_QWORD *)(v59 + 8 * v12) = Root;
  v14->ParentValue &= 3uLL;
  if ( !v101 )
    v112 = v59;
  v14->ParentValue |= v112;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = (unsigned __int64)Tree ^ v99;
    v47 = v99 == 0;
    goto LABEL_96;
  }
  Tree->Root = (_RTL_BALANCED_NODE *)v99;
  return Root;
}
