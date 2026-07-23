/*
 * XREFs of FsRtlPrivateInsertSharedLock @ 0x14008D16C
 * Callers:
 *     FsRtlPrivateInsertLock @ 0x14008D08C (FsRtlPrivateInsertLock.c)
 * Callees:
 *     RtlDeleteNoSplay @ 0x140014470 (RtlDeleteNoSplay.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x14008D2A4 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlSplay @ 0x14008D5A0 (RtlSplay.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x14012F030 (RtlRealSuccessor.c)
 *     FsRtlSplitLocks @ 0x14012F0C4 (FsRtlSplitLocks.c)
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
  _RTL_SPLAY_LINKS *v14; // rdx
  _RTL_SPLAY_LINKS *v15; // rax
  PRTL_SPLAY_LINKS v16; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  PRTL_SPLAY_LINKS v18; // rax
  _RTL_SPLAY_LINKS *v19; // rsi
  char v21; // [rsp+60h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v22; // [rsp+68h] [rbp+10h] BYREF

  p_Parent = &a2[2].Parent;
  v4 = (PRTL_SPLAY_LINKS *)(a1 + 8);
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                 *(_QWORD *)(a1 + 8),
                                 (int)a2 + 8,
                                 (int)a2 + 48,
                                 (unsigned int)&v22,
                                 (__int64)&v21);
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
        v14 = v11->LeftChild;
        if ( LeftChild < v14 || LeftChild == v14 && (!a2->RightChild || v11->RightChild) )
          break;
        v12 = &v11->Parent;
        v11 = v11->Parent;
      }
      while ( v11 );
    }
    v15 = *v12;
    if ( !*v12 )
    {
      v6[1].Parent = a2;
      v15 = *v12;
    }
    a2->Parent = v15;
    *v12 = a2;
    *v4 = RtlSplay(v6);
    if ( *p_Parent > v6[-1].RightChild )
    {
      v6[-1].RightChild = *p_Parent;
      while ( 1 )
      {
        v18 = RtlRealSuccessor(v6);
        v19 = v18;
        if ( !v18 )
          break;
        v16 = v18 - 1;
        Parent = v18[-1].Parent;
        if ( Parent->LeftChild > v6[-1].RightChild )
          break;
        if ( !LOBYTE(v6[-1].LeftChild) && LOBYTE(v16->LeftChild) )
        {
          FsRtlSplitLocks(&v18[-1], 0LL, 0LL, 0LL);
          Parent = v16->Parent;
        }
        v6[1].Parent->Parent = Parent;
        v6[1].Parent = v16[2].Parent;
        if ( v16->RightChild > v6[-1].RightChild )
        {
          if ( LOBYTE(v16->LeftChild) )
            LOBYTE(v6[-1].LeftChild) = 1;
          v6[-1].RightChild = v16->RightChild;
        }
        RtlDeleteNoSplay(v19, v4);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v19[-1]);
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
    v9 = v22;
    if ( v22 )
    {
      if ( v21 )
        v22->LeftChild = v8;
      else
        v22->RightChild = v8;
      v8->Parent = v9;
      v8 = RtlSplay(v8);
    }
    *v4 = v8;
  }
  LOBYTE(v7) = 1;
  return (char)v7;
}
