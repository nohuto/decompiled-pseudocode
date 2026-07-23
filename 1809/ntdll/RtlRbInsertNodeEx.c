/*
 * XREFs of RtlRbInsertNodeEx @ 0x18001F940
 * Callers:
 *     RtlpHpSegFreeRangeInsert @ 0x18001DF80 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18001E2D8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800207B8 (LdrpInsertModuleToIndexLockHeld.c)
 *     EtwpInsertRegistration @ 0x180020A4C (EtwpInsertRegistration.c)
 *     LdrpCheckForRetryLoading @ 0x18002ADB8 (LdrpCheckForRetryLoading.c)
 *     EtwpInsertGuidEntry @ 0x180050E5C (EtwpInsertGuidEntry.c)
 *     RtlpHpVaMgrFree @ 0x180063908 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // r14
  PRTL_BALANCED_NODE v5; // r11
  char v7; // di
  $7D93978C745EB1C2D28075BAF55422B4 v8; // cl
  char v9; // r9
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE *v11; // rcx
  unsigned __int64 v12; // rax
  _RTL_BALANCED_NODE *Min; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v14; // bl
  unsigned __int64 v15; // r8
  char v16; // r9
  unsigned __int64 v17; // rcx
  BOOL v18; // eax
  _BOOL8 v19; // rcx
  _BOOL8 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // r9d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  _RTL_BALANCED_NODE **v27; // rdi
  unsigned __int64 v28; // rcx
  PRTL_BALANCED_NODE v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 Root; // r11
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  int v39; // r9d
  _RTL_BALANCED_NODE **v40; // rsi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx

  v4 = 0LL;
  v5 = Node;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  v7 = Right;
  v8 = Tree->0;
  v9 = *(_BYTE *)&v8 & 1;
  if ( !Parent )
  {
    v10 = (unsigned __int64)v5 ^ (unsigned __int64)Tree;
    if ( v9 )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)v10;
      v8 = Tree->0;
    }
    else
    {
      Tree->Root = v5;
    }
    if ( (*(_BYTE *)&v8 & 1) != 0 )
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v10;
      LOBYTE(v10) = v10 | 1;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)v10;
    }
    else
    {
      Tree->Min = v5;
    }
    v5->ParentValue = 0LL;
    return v10;
  }
  v11 = v5;
  if ( v9 )
    v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)Parent);
  Parent->Children[Right] = v11;
  v12 = (unsigned __int64)Parent;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v12 = (unsigned __int64)v5 ^ (unsigned __int64)Parent;
  v10 = v12 | 1;
  v5->ParentValue = v10;
  if ( !Right )
  {
    Min = Tree->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
      v10 = Min == (_RTL_BALANCED_NODE *)1 ? 0LL : (unsigned __int64)Min ^ ((unsigned __int64)Tree | 1);
    else
      v10 = (unsigned __int64)Tree->Min;
    if ( Parent == (PRTL_BALANCED_NODE)v10 )
    {
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)Tree);
        LOBYTE(v10) = (unsigned __int8)v5 ^ (unsigned __int8)Tree | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)v10;
      }
      else
      {
        Tree->Min = v5;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
  {
    v14 = Tree->0;
    while ( 1 )
    {
      v15 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v16 = *(_BYTE *)&v14 & 1;
      if ( (*(_BYTE *)&v14 & 1) != 0 && v15 )
        v15 ^= (unsigned __int64)Parent;
      v17 = *(_QWORD *)v15;
      if ( v16 && v17 )
        v17 ^= v15;
      v18 = v17 != (_QWORD)Parent;
      v19 = v17 == (_QWORD)Parent;
      v20 = v18;
      v21 = *(_QWORD *)(v15 + 8 * v19);
      if ( v16 )
      {
        if ( !v21 )
          break;
        v21 ^= v15;
      }
      if ( !v21 || (*(_BYTE *)(v21 + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->0 &= ~1u;
      v5 = (PRTL_BALANCED_NODE)v15;
      *(_BYTE *)(v21 + 16) &= ~1u;
      v10 = *(_QWORD *)(v15 + 16);
      Parent = (PRTL_BALANCED_NODE)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !Parent )
          return v10;
        Parent = (PRTL_BALANCED_NODE)(v15 ^ (unsigned __int64)Parent);
      }
      if ( Parent )
      {
        *(_BYTE *)(v15 + 16) = v10 | 1;
        v14 = Tree->0;
        v10 = (unsigned __int64)Parent->Children[0];
        if ( (*(_BYTE *)&v14 & 1) != 0 && v10 )
          v10 ^= (unsigned __int64)Parent;
        v7 = v15 != v10;
        if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
          continue;
      }
      return v10;
    }
    if ( v7 == v20 )
    {
LABEL_85:
      Root = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      v37 = (unsigned int)v20 ^ 1;
      v38 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v39 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v38 )
        v38 ^= (unsigned __int64)Parent;
      if ( v38 != v15 )
        goto LABEL_145;
      v40 = (_RTL_BALANCED_NODE **)(v15 + 8 * ((unsigned int)v37 ^ 1LL));
      v41 = (unsigned __int64)*v40;
      if ( ((__int64)Tree->Min & 1) != 0 && v41 )
        v41 ^= v15;
      if ( (PRTL_BALANCED_NODE)v41 != Parent )
        goto LABEL_145;
      v42 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_101;
        v42 ^= v15;
      }
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 8);
        if ( ((__int64)Tree->Min & 1) != 0 && v43 )
          v43 ^= v42;
        if ( v43 == v15 )
        {
          v44 = v42 ^ (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v44 = (unsigned __int64)Parent;
          *(_QWORD *)(v42 + 8) = v44;
        }
        else
        {
          v45 = *(_QWORD *)v42;
          if ( ((__int64)Tree->Min & 1) != 0 && v45 )
            v45 ^= v42;
          if ( v45 != v15 )
            goto LABEL_145;
          v46 = v42 ^ (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v46 = (unsigned __int64)Parent;
          *(_QWORD *)v42 = v46;
        }
LABEL_117:
        if ( v39 && v42 )
          v42 ^= (unsigned __int64)Parent;
        Parent->ParentValue &= 3uLL;
        Parent->ParentValue |= v42;
        v47 = (unsigned __int64)Parent->Children[v37];
        if ( v39 )
        {
          if ( !v47 )
            goto LABEL_131;
          v47 ^= (unsigned __int64)Parent;
        }
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 16);
          v49 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v39 && v49 )
            v49 ^= v47;
          if ( (PRTL_BALANCED_NODE)v49 == Parent )
          {
            v50 = v47 ^ v15;
            if ( !v39 )
              v50 = v15;
            *(_QWORD *)(v47 + 16) = v48 & 3 | v50;
            goto LABEL_131;
          }
LABEL_145:
          __fastfail(0x1Du);
        }
LABEL_131:
        if ( v39 && v47 )
          v47 ^= v15;
        *v40 = (_RTL_BALANCED_NODE *)v47;
        v51 = v15 ^ (unsigned __int64)Parent;
        v10 = v15 ^ (unsigned __int64)Parent;
        if ( !v39 )
          v10 = v15;
        Parent->Children[v37] = (_RTL_BALANCED_NODE *)v10;
        *(_QWORD *)(v15 + 16) &= 3uLL;
        if ( !v39 )
          v51 = (unsigned __int64)Parent;
        *(_QWORD *)(v15 + 16) |= v51;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          LOBYTE(v10) = Root ^ (unsigned __int8)Tree;
          if ( Root )
            v4 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)Tree);
        }
        else
        {
          v4 = (_RTL_BALANCED_NODE *)Root;
        }
        Tree->Root = v4;
        *(_BYTE *)(v15 + 16) |= 1u;
        *(_BYTE *)&Parent->0 &= ~1u;
        return v10;
      }
LABEL_101:
      if ( Root != v15 )
        goto LABEL_145;
      Root = (unsigned __int64)Parent;
      goto LABEL_117;
    }
    v22 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v23 = *(_BYTE *)&v14 & 1;
    if ( (*(_BYTE *)&v14 & 1) != 0 && v22 )
      v22 ^= (unsigned __int64)v5;
    if ( (PRTL_BALANCED_NODE)v22 != Parent )
      goto LABEL_145;
    v24 = (unsigned __int64)Parent->Children[v19];
    if ( (*(_BYTE *)&v14 & 1) != 0 && v24 )
      v24 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v24 != v5 )
      goto LABEL_145;
    v25 = *(_QWORD *)(v15 + 8 * v20);
    if ( (*(_BYTE *)&v14 & 1) != 0 && v25 )
      v25 ^= v15;
    if ( (PRTL_BALANCED_NODE)v25 != Parent )
      goto LABEL_145;
    v26 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v14 & 1) != 0 && v26 )
      v26 ^= (unsigned __int64)Parent;
    if ( v26 != v15 )
      goto LABEL_145;
    v27 = &v5->Children[v20];
    v28 = v15 ^ (unsigned __int64)v5;
    v29 = (PRTL_BALANCED_NODE)(v15 ^ (unsigned __int64)v5);
    if ( (*(_BYTE *)&v14 & 1) == 0 )
      v29 = v5;
    *(_QWORD *)(v15 + 8 * v20) = v29;
    v5->ParentValue &= 3uLL;
    if ( (*(_BYTE *)&v14 & 1) == 0 )
      v28 = v15;
    v5->ParentValue |= v28;
    v30 = (unsigned __int64)*v27;
    if ( (*(_BYTE *)&v14 & 1) != 0 )
    {
      if ( !v30 )
      {
LABEL_77:
        if ( v23 && v30 )
          v30 ^= (unsigned __int64)Parent;
        Parent->Children[!v20] = (_RTL_BALANCED_NODE *)v30;
        v34 = (unsigned __int64)Parent ^ (unsigned __int64)v5;
        v35 = (unsigned __int64)Parent ^ (unsigned __int64)v5;
        if ( !v23 )
          v35 = (unsigned __int64)Parent;
        *v27 = (_RTL_BALANCED_NODE *)v35;
        Parent->ParentValue &= 3uLL;
        if ( !v23 )
          v34 = (unsigned __int64)v5;
        Parent->ParentValue |= v34;
        Parent = v5;
        goto LABEL_85;
      }
      v30 ^= (unsigned __int64)v5;
    }
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 16);
      v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v23 && v32 )
        v32 ^= v30;
      if ( (PRTL_BALANCED_NODE)v32 != v5 )
        goto LABEL_145;
      v33 = (unsigned __int64)Parent ^ v30;
      if ( !v23 )
        v33 = (unsigned __int64)Parent;
      *(_QWORD *)(v30 + 16) = v31 & 3 | v33;
    }
    goto LABEL_77;
  }
  return v10;
}
