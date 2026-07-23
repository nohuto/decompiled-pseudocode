/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1405C5A10
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1405C5840 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14070D0A4 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     strnlen @ 0x1401974E0 (strnlen.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C5680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405C5D00 (EtwpGetProviderGroupFromTraits.c)
 *     TraitsCompare @ 0x1406A50D4 (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x1408C48E8 (AddDecodeGuidToSessions.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        PRTL_RB_TREE Tree)
{
  __int16 v8; // bp
  PRTL_BALANCED_NODE v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  PRTL_BALANCED_NODE v13; // r15
  _RTL_BALANCED_NODE *Root; // rbx
  unsigned __int64 v15; // rax
  BOOLEAN v16; // r14
  char v17; // r12
  int v18; // eax
  _RTL_BALANCED_NODE *v19; // rax
  __int128 *ProviderGroupFromTraits; // rax
  UINT puResult; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-74h]
  PVOID P; // [rsp+38h] [rbp-70h]
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-68h]
  unsigned int *v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int128 v28; // [rsp+58h] [rbp-50h] BYREF

  v8 = 0;
  v10 = Node;
  Mutex = FastMutex;
  v26 = a3;
  v23 = a2;
  v27 = a1;
  P = Node;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( WORD2(Node[1].Left) != a6 )
  {
    v11 = -1073741566;
    goto LABEL_44;
  }
  v12 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  if ( (unsigned int)v12 > a6 )
  {
    v11 = -1073741566;
    goto LABEL_44;
  }
  if ( (unsigned int)v12 < a6 )
  {
    while ( (int)v12 + 2 <= a6 )
    {
      LODWORD(v12) = *(unsigned __int16 *)((char *)&Node[1].Left + v12 + 4) + (_DWORD)v12;
      if ( (unsigned int)v12 >= a6 )
        goto LABEL_10;
    }
LABEL_2:
    v11 = -1073741566;
    goto LABEL_44;
  }
LABEL_10:
  if ( (_DWORD)v12 != a6 )
  {
    v11 = -1073741566;
    goto LABEL_44;
  }
  Node->0 = 0uLL;
  Node->ParentValue = 0LL;
  v13 = Node + 1;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = Tree->Root;
    if ( !Tree->Root )
    {
LABEL_17:
      v16 = 0;
      Root = 0LL;
      v17 = 0;
LABEL_18:
      RtlRbInsertNodeEx(Tree, Root, v16, Node);
      P = 0LL;
      goto LABEL_19;
    }
    v15 = (unsigned __int64)Tree ^ (unsigned __int64)Root;
  }
  else
  {
    v15 = (unsigned __int64)Tree->Root;
    Root = Tree->Root;
  }
  if ( !v15 )
    goto LABEL_17;
  v16 = 0;
  v17 = 0;
  if ( !Root )
    goto LABEL_32;
  while ( 1 )
  {
    v18 = TraitsCompare(Node, Root);
    if ( v18 > 0 )
    {
      v19 = Root->Children[1];
      if ( !v19 )
      {
        v16 = 1;
        goto LABEL_18;
      }
      goto LABEL_29;
    }
    if ( v18 >= 0 )
      break;
    v19 = Root->Children[0];
    if ( !Root->Children[0] )
    {
      v16 = 0;
      goto LABEL_18;
    }
LABEL_29:
    Root = v19;
  }
  v17 = 1;
LABEL_32:
  if ( !v17 )
    goto LABEL_18;
  v13 = Root + 1;
  v10 = Root;
  v11 = RtlUIntAdd((UINT)Root[1].Children[0], 1u, &puResult);
  if ( v11 < 0 )
  {
    KeReleaseGuardedMutex(Mutex);
  }
  else
  {
    LODWORD(v13->Children[0]) = puResult;
LABEL_19:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v10, 0LL) )
    {
      if ( v17 )
      {
        --LODWORD(v13->Children[0]);
      }
      else
      {
        RtlRbRemoveNode(Tree, v10);
        P = v10;
      }
      v11 = -1073741823;
    }
    else
    {
      v11 = 0;
    }
    KeReleaseGuardedMutex(Mutex);
    if ( !v11 )
    {
      if ( WORD2(v10[1].Left) == 22 && *(_DWORD *)((char *)&v10[1].Left + 6) == 33559296 )
      {
        if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
          v8 = 1024;
LABEL_43:
        _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v8 | 0x200);
      }
      else
      {
        if ( *(_QWORD *)(a4 + 40) )
          goto LABEL_43;
        ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits((char *)&v10[1].Left + 4);
        if ( !ProviderGroupFromTraits )
          goto LABEL_43;
        v28 = *ProviderGroupFromTraits;
        v11 = EtwpAddRegEntryToGroup(a4, &v28, v27, v23, v26);
        if ( !v11 )
          goto LABEL_43;
        EtwpReleaseProviderTraitsReference(a4);
      }
    }
  }
LABEL_44:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v11;
}
