/*
 * XREFs of RtlRbInsertNodeEx @ 0x1800380E0
 * Callers:
 *     sub_180005FFC @ 0x180005FFC (sub_180005FFC.c)
 *     sub_18000AC1C @ 0x18000AC1C (sub_18000AC1C.c)
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 *     sub_180036698 @ 0x180036698 (sub_180036698.c)
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_18004E0E4 @ 0x18004E0E4 (sub_18004E0E4.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_180068434 @ 0x180068434 (sub_180068434.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // r11
  char v6; // bl
  char Min; // cl
  unsigned __int64 v8; // rax
  _RTL_BALANCED_NODE *v9; // rcx
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE *v11; // rcx
  char v12; // si
  _RTL_BALANCED_NODE *v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rdi
  _BOOL8 v16; // rbp
  _BOOL8 v17; // rdi
  ULONG_PTR v18; // rax
  int v19; // ebx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  ULONG_PTR *v22; // r14
  ULONG_PTR v23; // rax
  _RTL_BALANCED_NODE **v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 Root; // r15
  ULONG_PTR *p_ParentValue; // rbx
  BOOL v32; // edi
  ULONG_PTR v33; // rax
  int v34; // r9d
  _BOOL8 v35; // rbp
  _RTL_BALANCED_NODE **v36; // r14
  unsigned __int64 v37; // rax
  ULONG_PTR *v38; // rsi
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  ULONG_PTR v46; // r12
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  ULONG_PTR v49; // r15
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx

  v4 = 0LL;
  Node->Children[0] = 0LL;
  v6 = Right;
  Node->Children[1] = 0LL;
  Min = (char)Tree->Min;
  LOBYTE(v8) = Min & 1;
  if ( !Parent )
  {
    v43 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
    if ( (_BYTE)v8 )
    {
      Tree->Root = (PRTL_BALANCED_NODE)v43;
      Min = (char)Tree->Min;
    }
    else
    {
      Tree->Root = Node;
    }
    if ( (Min & 1) != 0 )
    {
      Tree->Min = (PRTL_BALANCED_NODE)v43;
      LOBYTE(Tree->Min) = v43 | 1;
    }
    else
    {
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return v8;
  }
  v9 = Node;
  if ( (_BYTE)v8 )
    v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)Node);
  Parent->Children[Right] = v9;
  v10 = (unsigned __int64)Parent;
  if ( ((__int64)Tree->Min & 1) != 0 )
    v10 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
  v8 = v10 | 1;
  Node->ParentValue = v8;
  if ( !Right )
  {
    v8 = (unsigned __int64)Tree->Min;
    if ( (v8 & 1) != 0 )
      v11 = v8 == 1 ? 0LL : (_RTL_BALANCED_NODE *)(v8 ^ ((unsigned __int64)Tree | 1));
    else
      v11 = Tree->Min;
    if ( Parent == v11 )
    {
      if ( (v8 & 1) != 0 )
      {
        Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(v8) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        LOBYTE(Tree->Min) = v8;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->16 & 1) != 0 )
  {
    v12 = (char)Tree->Min;
    while ( 1 )
    {
      v13 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v14 = v12 & 1;
      if ( (v12 & 1) != 0 && v13 )
        v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v13);
      v15 = (unsigned __int64)v13->Children[0];
      if ( v14 && v15 )
        v15 ^= (unsigned __int64)v13;
      v16 = v15 == (_QWORD)Parent;
      v17 = v15 != (_QWORD)Parent;
      v8 = (unsigned __int64)v13->Children[v16];
      if ( v14 )
      {
        if ( !v8 )
          break;
        v8 ^= (unsigned __int64)v13;
      }
      if ( !v8 || (*(_BYTE *)(v8 + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->16 &= ~1u;
      Node = v13;
      *(_BYTE *)(v8 + 16) &= ~1u;
      LOBYTE(v8) = v13->ParentValue;
      Parent = (PRTL_BALANCED_NODE)(v13->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !Parent )
          return v8;
        Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v13 ^ (unsigned __int64)Parent);
      }
      if ( Parent )
      {
        *(_BYTE *)&v13->16 = v8 | 1;
        v12 = (char)Tree->Min;
        v8 = (unsigned __int64)Parent->Children[0];
        if ( (v12 & 1) != 0 && v8 )
          v8 ^= (unsigned __int64)Parent;
        v6 = v13 != (_RTL_BALANCED_NODE *)v8;
        if ( (*(_BYTE *)&Parent->16 & 1) != 0 )
          continue;
      }
      return v8;
    }
    if ( v6 == v17 )
    {
LABEL_38:
      Root = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      p_ParentValue = &Parent->ParentValue;
      v32 = !v17;
      v33 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v34 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v33 )
        v33 ^= (unsigned __int64)Parent;
      if ( (_RTL_BALANCED_NODE *)v33 != v13 )
        goto LABEL_90;
      v35 = v32;
      v36 = &v13->Children[!v32];
      v37 = (unsigned __int64)*v36;
      if ( ((__int64)Tree->Min & 1) != 0 && v37 )
        v37 ^= (unsigned __int64)v13;
      if ( (PRTL_BALANCED_NODE)v37 != Parent )
        goto LABEL_90;
      v38 = &v13->ParentValue;
      v39 = v13->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v39 )
          goto LABEL_88;
        v39 ^= (unsigned __int64)v13;
      }
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 8);
        if ( ((__int64)Tree->Min & 1) != 0 && v40 )
          v40 ^= v39;
        if ( (_RTL_BALANCED_NODE *)v40 == v13 )
        {
          v41 = (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) != 0 )
            v41 = (unsigned __int64)Parent ^ v39;
          *(_QWORD *)(v39 + 8) = v41;
        }
        else
        {
          v44 = *(_QWORD *)v39;
          if ( ((__int64)Tree->Min & 1) != 0 && v44 )
            v44 ^= v39;
          if ( (_RTL_BALANCED_NODE *)v44 != v13 )
            goto LABEL_90;
          v45 = (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) != 0 )
            v45 = (unsigned __int64)Parent ^ v39;
          *(_QWORD *)v39 = v45;
        }
        goto LABEL_50;
      }
LABEL_88:
      if ( (_RTL_BALANCED_NODE *)Root != v13 )
        goto LABEL_90;
      Root = (unsigned __int64)Parent;
LABEL_50:
      if ( v34 && v39 )
        v39 ^= (unsigned __int64)Parent;
      *p_ParentValue &= 3uLL;
      *p_ParentValue |= v39;
      v42 = (unsigned __int64)Parent->Children[v35];
      if ( v34 )
      {
        if ( !v42 )
        {
LABEL_53:
          if ( v34 && v42 )
            v42 ^= (unsigned __int64)v13;
          *v36 = (_RTL_BALANCED_NODE *)v42;
          v8 = (unsigned __int64)Parent ^ (unsigned __int64)v13;
          if ( v34 )
            v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v13);
          Parent->Children[v35] = v13;
          if ( v34 )
            Parent = (PRTL_BALANCED_NODE)v8;
          *v38 &= 3uLL;
          *v38 |= (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) != 0 )
          {
            LOBYTE(v8) = (unsigned __int8)Tree ^ Root;
            if ( Root )
              v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ Root);
          }
          else
          {
            v4 = (_RTL_BALANCED_NODE *)Root;
          }
          Tree->Root = v4;
          *(_BYTE *)v38 |= 1u;
          *(_BYTE *)p_ParentValue &= ~1u;
          return v8;
        }
        v42 ^= (unsigned __int64)Parent;
      }
      if ( !v42 )
        goto LABEL_53;
      v46 = *(_QWORD *)(v42 + 16);
      v47 = v46 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v34 && v47 )
        v47 ^= v42;
      if ( (PRTL_BALANCED_NODE)v47 == Parent )
      {
        v48 = (unsigned __int64)v13;
        if ( v34 )
          v48 = (unsigned __int64)v13 ^ v42;
        *(_QWORD *)(v42 + 16) = v48 | v46 & 3;
        goto LABEL_53;
      }
LABEL_90:
      __fastfail(0x1Du);
    }
    v18 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v19 = v12 & 1;
    if ( (v12 & 1) != 0 && v18 )
      v18 ^= (unsigned __int64)Node;
    if ( (PRTL_BALANCED_NODE)v18 != Parent )
      goto LABEL_90;
    v20 = (unsigned __int64)Parent->Children[v16];
    if ( (v12 & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v20 != Node )
      goto LABEL_90;
    v21 = (unsigned __int64)v13->Children[v17];
    if ( (v12 & 1) != 0 && v21 )
      v21 ^= (unsigned __int64)v13;
    if ( (PRTL_BALANCED_NODE)v21 != Parent )
      goto LABEL_90;
    v22 = &Parent->ParentValue;
    v23 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v12 & 1) != 0 && v23 )
      v23 ^= (unsigned __int64)Parent;
    if ( (_RTL_BALANCED_NODE *)v23 != v13 )
      goto LABEL_90;
    v24 = &Node->Children[v17];
    v25 = (unsigned __int64)Node;
    if ( (v12 & 1) != 0 )
      v25 = (unsigned __int64)Node ^ (unsigned __int64)v13;
    v13->Children[v17] = (_RTL_BALANCED_NODE *)v25;
    v26 = (unsigned __int64)v13;
    if ( (v12 & 1) != 0 )
      v26 = (unsigned __int64)Node ^ (unsigned __int64)v13;
    Node->ParentValue &= 3uLL;
    Node->ParentValue |= v26;
    v27 = (unsigned __int64)*v24;
    if ( v19 )
    {
      if ( !v27 )
      {
LABEL_34:
        if ( v19 && v27 )
          v27 ^= (unsigned __int64)Parent;
        Parent->Children[v16] = (_RTL_BALANCED_NODE *)v27;
        v28 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
        v29 = (unsigned __int64)Node;
        if ( v19 )
        {
          Parent = (PRTL_BALANCED_NODE)((unsigned __int64)Parent ^ (unsigned __int64)Node);
          v29 = v28;
        }
        *v24 = Parent;
        Parent = Node;
        *v22 &= 3uLL;
        *v22 |= v29;
        goto LABEL_38;
      }
      v27 ^= (unsigned __int64)Node;
    }
    if ( v27 )
    {
      v49 = *(_QWORD *)(v27 + 16);
      v50 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v19 && v50 )
        v50 ^= v27;
      if ( (PRTL_BALANCED_NODE)v50 != Node )
        goto LABEL_90;
      v51 = (unsigned __int64)Parent;
      if ( v19 )
        v51 = (unsigned __int64)Parent ^ v27;
      *(_QWORD *)(v27 + 16) = v51 | v49 & 3;
    }
    goto LABEL_34;
  }
  return v8;
}
