/*
 * XREFs of RtlRbInsertNodeEx @ 0x1800380E0
 * Callers:
 *     EtwpInsertGuidEntry @ 0x180005FFC (EtwpInsertGuidEntry.c)
 *     EtwpInsertRegistration @ 0x18000AC1C (EtwpInsertRegistration.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18002A4F4 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpCheckForRetryLoading @ 0x18002D594 (LdrpCheckForRetryLoading.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180036698 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180039740 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVaMgrFree @ 0x18004E184 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180068684 (RtlpHpVsFreeChunkInsert.c)
 *     LdrpAddRedirectedFunction @ 0x1800D5124 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // r11
  char v6; // bl
  $7D93978C745EB1C2D28075BAF55422B4 v7; // cl
  unsigned __int64 Min; // rax
  _RTL_BALANCED_NODE *v9; // rcx
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE *v11; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v12; // si
  _RTL_BALANCED_NODE *v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rdi
  _BOOL8 v16; // rbp
  _BOOL8 v17; // rdi
  unsigned __int64 v18; // rax
  int v19; // ebx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  $87560DA0B77CFC7566AA725C77477589 *v22; // r14
  unsigned __int64 v23; // rax
  _RTL_BALANCED_NODE **v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 Root; // r15
  $87560DA0B77CFC7566AA725C77477589 *v31; // rbx
  BOOL v32; // edi
  unsigned __int64 v33; // rax
  int v34; // r9d
  _BOOL8 v35; // rbp
  _RTL_BALANCED_NODE **v36; // r14
  unsigned __int64 v37; // rax
  $87560DA0B77CFC7566AA725C77477589 *v38; // rsi
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx

  v4 = 0LL;
  Node->Children[0] = 0LL;
  v6 = Right;
  Node->Children[1] = 0LL;
  v7 = Tree->0;
  LOBYTE(Min) = *(_BYTE *)&v7 & 1;
  if ( !Parent )
  {
    v43 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
    if ( (_BYTE)Min )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)v43;
      v7 = Tree->0;
    }
    else
    {
      Tree->Root = Node;
    }
    if ( (*(_BYTE *)&v7 & 1) != 0 )
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v43;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v43 | 1);
    }
    else
    {
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return Min;
  }
  v9 = Node;
  if ( (_BYTE)Min )
    v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)Node);
  Parent->Children[Right] = v9;
  v10 = (unsigned __int64)Parent;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v10 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
  Min = v10 | 1;
  Node->ParentValue = Min;
  if ( !Right )
  {
    Min = (unsigned __int64)Tree->Min;
    if ( (Min & 1) != 0 )
      v11 = Min == 1 ? 0LL : (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
    else
      v11 = Tree->Min;
    if ( Parent == v11 )
    {
      if ( (Min & 1) != 0 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(Min) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)Min;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
  {
    v12 = Tree->0;
    while ( 1 )
    {
      v13 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v14 = *(_BYTE *)&v12 & 1;
      if ( (*(_BYTE *)&v12 & 1) != 0 && v13 )
        v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v13);
      v15 = (unsigned __int64)v13->Children[0];
      if ( v14 && v15 )
        v15 ^= (unsigned __int64)v13;
      v16 = v15 == (_QWORD)Parent;
      v17 = v15 != (_QWORD)Parent;
      Min = (unsigned __int64)v13->Children[v16];
      if ( v14 )
      {
        if ( !Min )
          break;
        Min ^= (unsigned __int64)v13;
      }
      if ( !Min || (*(_BYTE *)(Min + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->0 &= ~1u;
      Node = v13;
      *(_BYTE *)(Min + 16) &= ~1u;
      LOBYTE(Min) = v13->ParentValue;
      Parent = (PRTL_BALANCED_NODE)(v13->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !Parent )
          return Min;
        Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v13 ^ (unsigned __int64)Parent);
      }
      if ( Parent )
      {
        v13->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(Min | 1);
        v12 = Tree->0;
        Min = (unsigned __int64)Parent->Children[0];
        if ( (*(_BYTE *)&v12 & 1) != 0 && Min )
          Min ^= (unsigned __int64)Parent;
        v6 = v13 != (_RTL_BALANCED_NODE *)Min;
        if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
          continue;
      }
      return Min;
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
      v31 = &Parent->16;
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
      v38 = &v13->16;
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
      v31->ParentValue &= 3uLL;
      v31->ParentValue |= v39;
      v42 = (unsigned __int64)Parent->Children[v35];
      if ( v34 )
      {
        if ( !v42 )
        {
LABEL_53:
          if ( v34 && v42 )
            v42 ^= (unsigned __int64)v13;
          *v36 = (_RTL_BALANCED_NODE *)v42;
          Min = (unsigned __int64)Parent ^ (unsigned __int64)v13;
          if ( v34 )
            v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v13);
          Parent->Children[v35] = v13;
          if ( v34 )
            Parent = (PRTL_BALANCED_NODE)Min;
          v38->ParentValue &= 3uLL;
          v38->ParentValue |= (unsigned __int64)Parent;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          {
            LOBYTE(Min) = (unsigned __int8)Tree ^ Root;
            if ( Root )
              v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ Root);
          }
          else
          {
            v4 = (_RTL_BALANCED_NODE *)Root;
          }
          Tree->Root = v4;
          *(_BYTE *)&v38->0 |= 1u;
          *(_BYTE *)&v31->0 &= ~1u;
          return Min;
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
    v19 = *(_BYTE *)&v12 & 1;
    if ( (*(_BYTE *)&v12 & 1) != 0 && v18 )
      v18 ^= (unsigned __int64)Node;
    if ( (PRTL_BALANCED_NODE)v18 != Parent )
      goto LABEL_90;
    v20 = (unsigned __int64)Parent->Children[v16];
    if ( (*(_BYTE *)&v12 & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v20 != Node )
      goto LABEL_90;
    v21 = (unsigned __int64)v13->Children[v17];
    if ( (*(_BYTE *)&v12 & 1) != 0 && v21 )
      v21 ^= (unsigned __int64)v13;
    if ( (PRTL_BALANCED_NODE)v21 != Parent )
      goto LABEL_90;
    v22 = &Parent->16;
    v23 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v12 & 1) != 0 && v23 )
      v23 ^= (unsigned __int64)Parent;
    if ( (_RTL_BALANCED_NODE *)v23 != v13 )
      goto LABEL_90;
    v24 = &Node->Children[v17];
    v25 = (unsigned __int64)Node;
    if ( (*(_BYTE *)&v12 & 1) != 0 )
      v25 = (unsigned __int64)Node ^ (unsigned __int64)v13;
    v13->Children[v17] = (_RTL_BALANCED_NODE *)v25;
    v26 = (unsigned __int64)v13;
    if ( (*(_BYTE *)&v12 & 1) != 0 )
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
        v22->ParentValue &= 3uLL;
        v22->ParentValue |= v29;
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
  return Min;
}
