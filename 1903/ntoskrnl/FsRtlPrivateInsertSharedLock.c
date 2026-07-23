/*
 * XREFs of FsRtlPrivateInsertSharedLock @ 0x140103730
 * Callers:
 *     FsRtlPrivateInsertLock @ 0x140103650 (FsRtlPrivateInsertLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     RtlDeleteNoSplay @ 0x140102E90 (RtlDeleteNoSplay.c)
 *     RtlRealSuccessor @ 0x1401032A0 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140103CF8 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlSplay @ 0x140103E60 (RtlSplay.c)
 *     FsRtlSplitLocks @ 0x140104488 (FsRtlSplitLocks.c)
 */

char __fastcall FsRtlPrivateInsertSharedLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS **p_Parent; // r15
  PRTL_SPLAY_LINKS *v4; // rbp
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v6; // rbx
  _RTL_SPLAY_LINKS *v7; // rax
  PRTL_SPLAY_LINKS v8; // rcx
  _RTL_SPLAY_LINKS *v9; // rax
  _RTL_SPLAY_LINKS **v10; // r14
  _RTL_SPLAY_LINKS *v11; // rax
  _RTL_SPLAY_LINKS **v12; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v14; // rax
  PRTL_SPLAY_LINKS v15; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  PRTL_SPLAY_LINKS v17; // rax
  _RTL_SPLAY_LINKS *v18; // rsi
  char v20; // [rsp+60h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v21; // [rsp+68h] [rbp+10h] BYREF

  p_Parent = &a2[2].Parent;
  v4 = (PRTL_SPLAY_LINKS *)(a1 + 8);
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                 *(_QWORD *)(a1 + 8),
                                 (int)a2 + 8,
                                 (int)a2 + 48,
                                 (unsigned int)&v21,
                                 (__int64)&v20);
  v6 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( FirstOverlappingSharedNode )
  {
    v10 = (_RTL_SPLAY_LINKS **)(FirstOverlappingSharedNode - 24);
    v11 = *(_RTL_SPLAY_LINKS **)(FirstOverlappingSharedNode - 24);
    v12 = v10;
    if ( v11 )
    {
      LeftChild = a2->LeftChild;
      do
      {
        if ( LeftChild < v11->LeftChild || LeftChild == v11->LeftChild && (!a2->RightChild || v11->RightChild) )
          break;
        v12 = &v11->Parent;
        v11 = v11->Parent;
      }
      while ( v11 );
    }
    v14 = *v12;
    if ( !*v12 )
    {
      v6[1].Parent = a2;
      v14 = *v12;
    }
    a2->Parent = v14;
    *v12 = a2;
    *v4 = RtlSplay(v6);
    if ( *p_Parent > v6[-1].RightChild )
    {
      v6[-1].RightChild = *p_Parent;
      while ( 1 )
      {
        v17 = RtlRealSuccessor(v6);
        v18 = v17;
        if ( !v17 )
          break;
        v15 = v17 - 1;
        Parent = v17[-1].Parent;
        if ( Parent->LeftChild > v6[-1].RightChild )
          break;
        if ( !LOBYTE(v6[-1].LeftChild) && LOBYTE(v15->LeftChild) )
        {
          FsRtlSplitLocks(&v17[-1], 0LL, 0LL, 0LL);
          Parent = v15->Parent;
        }
        v6[1].Parent->Parent = Parent;
        v6[1].Parent = v15[2].Parent;
        if ( v15->RightChild > v6[-1].RightChild )
        {
          if ( LOBYTE(v15->LeftChild) )
            LOBYTE(v6[-1].LeftChild) = 1;
          v6[-1].RightChild = v15->RightChild;
        }
        RtlDeleteNoSplay(v18, v4);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v18[-1]);
      }
    }
    if ( LOBYTE(v6[-1].LeftChild) )
      FsRtlSplitLocks(v10, 0LL, 0LL, 0LL);
  }
  else
  {
    v7 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
    if ( !v7 )
      return (char)v7;
    v8 = v7 + 1;
    v7[1].LeftChild = 0LL;
    v7[1].RightChild = 0LL;
    v7[1].Parent = v7 + 1;
    LOBYTE(v7->LeftChild) = 0;
    v7[2].Parent = a2;
    v7->Parent = a2;
    v7->RightChild = *p_Parent;
    a2->Parent = 0LL;
    v9 = v21;
    if ( v21 )
    {
      if ( v20 )
        v21->LeftChild = v8;
      else
        v21->RightChild = v8;
      v8->Parent = v9;
      v8 = RtlSplay(v8);
    }
    *v4 = v8;
  }
  LOBYTE(v7) = 1;
  return (char)v7;
}
