/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x1405A624C
 * Callers:
 *     HvpViewMapStart @ 0x1405A61A0 (HvpViewMapStart.c)
 *     HvpViewMapExtendStorage @ 0x1406CD840 (HvpViewMapExtendStorage.c)
 * Callees:
 *     CmSiGetMemoryAllocationGranularity @ 0x14000F124 (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     CmSiUnmapViewOfSection @ 0x14013618C (CmSiUnmapViewOfSection.c)
 *     HvpViewMapCreateView @ 0x1405A6570 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1405A6658 (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _RTL_BALANCED_NODE *v4; // rdi
  _RTL_BALANCED_NODE *p_Node; // rbx
  __int64 MemoryAllocationGranularity; // rax
  __int64 v9; // r11
  _RTL_BALANCED_NODE *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  __int64 i; // r8
  __int64 j; // rdx
  __int64 v21; // rbx
  int ViewRangeValid; // esi
  int v23; // r9d
  int v24; // r8d
  __int64 v25; // r12
  _RTL_BALANCED_NODE *v26; // rax
  _RTL_BALANCED_NODE *v27; // rax
  _RTL_BALANCED_NODE *v28; // r8
  _RTL_BALANCED_NODE *v29; // rbx
  _RTL_RB_TREE *v30; // rbx
  unsigned __int64 Root; // rdx
  BOOLEAN v32; // al
  unsigned __int64 v33; // rax
  _RTL_BALANCED_NODE *v34; // rax
  _RTL_BALANCED_NODE *v35; // r8
  _RTL_BALANCED_NODE *v36; // rax
  _RTL_BALANCED_NODE *v37; // r8
  _RTL_BALANCED_NODE Node; // [rsp+30h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp+50h] BYREF
  _RTL_BALANCED_NODE *v42; // [rsp+A0h] [rbp+58h]
  char v43; // [rsp+A8h] [rbp+60h]

  v43 = a4;
  v4 = 0LL;
  p_Node = &Node;
  Privileges = 0LL;
  Node.Children[1] = &Node;
  Node.Children[0] = &Node;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v42 = (_RTL_BALANCED_NODE *)MemoryAllocationGranularity;
  v10 = (_RTL_BALANCED_NODE *)MemoryAllocationGranularity;
  v11 = 0x200000LL;
  if ( v12 < v13 )
  {
    v14 = -MemoryAllocationGranularity;
    while ( 1 )
    {
      v15 = a2 & v14;
      v16 = a3 - (a2 & v14);
      if ( v11 > v16 )
      {
        for ( i = (__int64)v10; i < v16; i *= 2LL )
          ;
        for ( j = 2 * i; v15 + j - a3 <= a3 / 8; j *= 2LL )
          i = j;
        v21 = v11;
        if ( i < v11 )
          v21 = i;
        v17 = v15 + v21;
        if ( (*(_BYTE *)(v9 + 32) & 1) != 0 && v17 >= *(_QWORD *)(v9 + 16) )
          v17 = *(_QWORD *)(v9 + 16);
        v18 = a3;
      }
      else
      {
        v17 = v15 + v11;
        v18 = v15 + v11;
      }
      ViewRangeValid = HvpViewMapCreateView(v9, a2 & v14, v17, &Privileges);
      if ( ViewRangeValid >= 0 )
      {
        v23 = v18;
        v4 = (_RTL_BALANCED_NODE *)Privileges;
        v24 = a2;
        v25 = a1;
        ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, (_DWORD)Privileges, v24, v23, v43);
        if ( ViewRangeValid < 0 )
        {
          v29 = Node.Children[0];
          goto LABEL_53;
        }
        v26 = Node.Children[1];
        if ( Node.Children[1]->Children[0] != &Node )
          __fastfail(3u);
        v4->Children[1] = Node.Children[1];
        v4->Children[0] = &Node;
        a2 = v17;
        v10 = v42;
        v26->Children[0] = v4;
        Node.Children[1] = v4;
        v4 = 0LL;
        Privileges = 0LL;
      }
      else
      {
        v10 = v42;
        v4 = (_RTL_BALANCED_NODE *)Privileges;
        if ( v11 <= (__int64)v42 )
        {
          v29 = Node.Children[0];
          goto LABEL_52;
        }
        v11 /= 2LL;
      }
      v9 = a1;
      if ( a2 >= a3 )
      {
        p_Node = Node.Children[0];
        break;
      }
    }
  }
  v27 = p_Node->Children[0];
  v28 = p_Node;
  if ( p_Node->Children[1] != &Node || v27->Children[1] != p_Node )
    __fastfail(3u);
  Node.Children[0] = p_Node->Children[0];
  v10 = &Node;
  v27->Children[1] = &Node;
  v29 = Node.Children[0];
  if ( v28 != &Node )
  {
    v30 = (_RTL_RB_TREE *)(v9 + 40);
    v4 = 0LL;
    do
    {
      Root = (unsigned __int64)v30->Root;
      if ( ((__int64)v30->Min & 1) != 0 && Root )
        Root ^= (unsigned __int64)v30;
      v32 = 0;
      if ( Root )
      {
        while ( 1 )
        {
          if ( (signed __int64)v28[1].ParentValue < *(_QWORD *)(Root + 40) )
          {
            v33 = *(_QWORD *)Root;
            if ( ((__int64)v30->Min & 1) != 0 )
            {
              if ( !v33 )
                goto LABEL_46;
              v33 ^= Root;
            }
            if ( !v33 )
            {
LABEL_46:
              v32 = 0;
              break;
            }
          }
          else
          {
            v33 = *(_QWORD *)(Root + 8);
            if ( ((__int64)v30->Min & 1) != 0 )
            {
              if ( !v33 )
                goto LABEL_40;
              v33 ^= Root;
            }
            if ( !v33 )
            {
LABEL_40:
              v32 = 1;
              break;
            }
          }
          Root = v33;
        }
      }
      RtlRbInsertNodeEx(v30, (PRTL_BALANCED_NODE)Root, v32, v28);
      v28 = Node.Children[0];
      if ( Node.Children[0]->Children[1] != &Node )
        goto LABEL_59;
      v34 = Node.Children[0]->Children[0];
      if ( Node.Children[0]->Children[0]->Children[1] != Node.Children[0] )
        goto LABEL_59;
      Node.Children[0] = Node.Children[0]->Children[0];
      v10 = &Node;
      v34->Children[1] = &Node;
    }
    while ( v28 != &Node );
    v29 = Node.Children[0];
  }
  ViewRangeValid = 0;
LABEL_52:
  v25 = a1;
LABEL_53:
  if ( v4 )
  {
    v35 = v4[2].Children[1];
    if ( v35 )
      CmSiUnmapViewOfSection((__int64)v10, *(HANDLE **)(v25 + 24), v35);
    CmSiFreeMemory((PPRIVILEGE_SET)v4);
    v29 = Node.Children[0];
  }
  if ( v29 != &Node )
  {
    v36 = v29->Children[0];
    if ( v29->Children[1] == &Node )
    {
      while ( v36->Children[1] == v29 )
      {
        Node.Children[0] = v36;
        v36->Children[1] = &Node;
        if ( v29 == &Node )
          return (unsigned int)ViewRangeValid;
        v37 = v29[2].Children[1];
        if ( v37 )
          CmSiUnmapViewOfSection((__int64)&Node, *(HANDLE **)(v25 + 24), v37);
        CmSiFreeMemory((PPRIVILEGE_SET)v29);
        v29 = Node.Children[0];
        if ( Node.Children[0]->Children[1] != &Node )
          break;
        v36 = Node.Children[0]->Children[0];
      }
    }
LABEL_59:
    __fastfail(3u);
  }
  return (unsigned int)ViewRangeValid;
}
