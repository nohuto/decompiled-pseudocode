/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1405C48F0
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1405C471C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x1407397D4 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     strnlen @ 0x1401A22C0 (strnlen.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405C4B84 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4B70 (EtwpReleaseProviderTraitsReference.c)
 *     TraitsCompare @ 0x1406C6BD4 (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x1409001A8 (AddDecodeGuidToSessions.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        PRTL_RB_TREE Tree)
{
  __int16 v8; // bp
  PRTL_BALANCED_NODE v10; // rdi
  __int64 v11; // rdx
  PRTL_BALANCED_NODE v12; // r14
  unsigned __int64 v13; // rax
  _RTL_BALANCED_NODE *Root; // rbx
  BOOLEAN v15; // r15
  char v16; // r13
  int v17; // eax
  _RTL_BALANCED_NODE *v18; // rax
  PRTL_BALANCED_NODE v19; // r14
  unsigned int v20; // ebx
  __int128 *ProviderGroupFromTraits; // rax
  PRTL_BALANCED_NODE P; // [rsp+30h] [rbp-78h]
  __int128 v28; // [rsp+58h] [rbp-50h] BYREF

  v8 = 0;
  v10 = Node;
  P = Node;
  if ( a6 < 3 )
    goto LABEL_40;
  if ( WORD2(Node[1].Left) != a6 )
  {
    v20 = -1073741566;
    v19 = Node;
    goto LABEL_29;
  }
  v11 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  if ( (unsigned int)v11 > a6 )
  {
    v20 = -1073741566;
    v19 = Node;
    goto LABEL_29;
  }
  if ( (unsigned int)v11 < a6 )
  {
    while ( (int)v11 + 2 <= a6 )
    {
      LODWORD(v11) = *(unsigned __int16 *)((char *)&Node[1].Left + v11 + 4) + (_DWORD)v11;
      if ( (unsigned int)v11 >= a6 )
        goto LABEL_7;
    }
LABEL_40:
    v20 = -1073741566;
    v19 = Node;
    goto LABEL_29;
  }
LABEL_7:
  if ( (_DWORD)v11 != a6 )
  {
    v20 = -1073741566;
    v19 = Node;
    goto LABEL_29;
  }
  Node->Children[0] = 0LL;
  v12 = Node + 1;
  Node->Children[1] = 0LL;
  Node->ParentValue = 0LL;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = Tree->Root;
    if ( !Tree->Root )
      goto LABEL_33;
    v13 = (unsigned __int64)Tree ^ (unsigned __int64)Root;
  }
  else
  {
    v13 = (unsigned __int64)Tree->Root;
    Root = Tree->Root;
  }
  if ( !v13 )
  {
LABEL_33:
    v15 = 0;
    Root = 0LL;
    v16 = 0;
    goto LABEL_34;
  }
  v15 = 0;
  v16 = 0;
  if ( !Root )
  {
LABEL_19:
    if ( !v16 )
      goto LABEL_34;
    ++LODWORD(Root[1].Children[0]);
    v12 = Root + 1;
    v10 = Root;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v17 = TraitsCompare(Node, Root);
    if ( v17 > 0 )
      break;
    if ( v17 >= 0 )
    {
      v16 = 1;
      goto LABEL_19;
    }
    v18 = Root->Children[0];
    if ( !Root->Children[0] )
    {
      v15 = 0;
      goto LABEL_34;
    }
LABEL_14:
    Root = v18;
  }
  v18 = Root->Children[1];
  if ( v18 )
    goto LABEL_14;
  v15 = 1;
LABEL_34:
  RtlRbInsertNodeEx(Tree, Root, v15, Node);
  P = 0LL;
LABEL_21:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v10, 0LL) )
  {
    if ( v16 )
    {
      --LODWORD(v12->Children[0]);
      v19 = P;
    }
    else
    {
      RtlRbRemoveNode(Tree, v10);
      v19 = v10;
    }
    v20 = -1073741823;
  }
  else
  {
    v19 = P;
    v20 = 0;
  }
  KeReleaseGuardedMutex(FastMutex);
  if ( !v20 )
  {
    if ( WORD2(v10[1].Left) == 22 && *(_DWORD *)((char *)&v10[1].Left + 6) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v8 = 1024;
LABEL_28:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v8 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_28;
      v28 = 0uLL;
      ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits((char *)&v10[1].Left + 4);
      if ( !ProviderGroupFromTraits )
        goto LABEL_28;
      v28 = *ProviderGroupFromTraits;
      v20 = EtwpAddRegEntryToGroup(a4, (unsigned int)&v28, a1, a2, a3);
      if ( !v20 )
        goto LABEL_28;
      EtwpReleaseProviderTraitsReference(a4);
    }
  }
LABEL_29:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return v20;
}
