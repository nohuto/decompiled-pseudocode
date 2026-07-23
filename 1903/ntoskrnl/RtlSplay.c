/*
 * XREFs of RtlSplay @ 0x140103E60
 * Callers:
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140102C64 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     RtlInsertElementGenericTableFull @ 0x1401033F0 (RtlInsertElementGenericTableFull.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1401034F4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140103730 (FsRtlPrivateInsertSharedLock.c)
 *     RtlLookupElementGenericTable @ 0x140103DE0 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x140104040 (RtlDelete.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140142774 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x14014343C (FsRtlCheckNoSharedConflict.c)
 *     RtlEnumerateGenericTable @ 0x140181B70 (RtlEnumerateGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x140311B60 (RtlLookupElementGenericTableFull.c)
 *     RtlInsertUnicodePrefix @ 0x1406B1F00 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x1406B2050 (RtlFindUnicodePrefix.c)
 *     PfxFindPrefix @ 0x1408D0430 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1408D0530 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *i; // r8
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *Parent; // r9
  _RTL_SPLAY_LINKS *v5; // rax
  _RTL_SPLAY_LINKS *v6; // rax
  _RTL_SPLAY_LINKS *v7; // rax
  _RTL_SPLAY_LINKS *v8; // rax
  _RTL_SPLAY_LINKS *v9; // rax
  _RTL_SPLAY_LINKS *v10; // rax
  _RTL_SPLAY_LINKS *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _RTL_SPLAY_LINKS *v15; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  __int64 v17; // rax

  for ( i = Links->Parent; Links->Parent != Links; i = Links->Parent )
  {
    LeftChild = i->LeftChild;
    Parent = i->Parent;
    if ( LeftChild == Links )
    {
      if ( Parent != i )
      {
        if ( Parent->LeftChild != i )
        {
          v15 = Links->LeftChild;
          Parent->RightChild = v15;
          if ( v15 )
            v15->Parent = Parent;
          RightChild = Links->RightChild;
          i->LeftChild = RightChild;
          if ( RightChild )
            RightChild->Parent = i;
          if ( Parent->Parent == Parent )
          {
            Links->Parent = Links;
          }
          else
          {
            Links->Parent = Parent->Parent;
            v17 = 8LL;
            if ( Parent->Parent->LeftChild != Parent )
              v17 = 16LL;
            *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v17) = Links;
          }
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
          continue;
        }
        v7 = Links->RightChild;
        i->LeftChild = v7;
        if ( v7 )
          v7->Parent = i;
        v8 = i->RightChild;
        Parent->LeftChild = v8;
        if ( v8 )
          v8->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v13 = 8LL;
          if ( Parent->Parent->LeftChild != Parent )
            v13 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v13) = Links;
        }
        Links->RightChild = i;
        i->RightChild = Parent;
        goto LABEL_23;
      }
      v5 = Links->RightChild;
      i->LeftChild = v5;
      if ( v5 )
        v5->Parent = i;
      Links->RightChild = i;
    }
    else
    {
      if ( Parent != i )
      {
        if ( Parent->RightChild != i )
        {
          v10 = Links->LeftChild;
          i->RightChild = v10;
          if ( v10 )
            v10->Parent = i;
          v11 = Links->RightChild;
          Parent->LeftChild = v11;
          if ( v11 )
            v11->Parent = Parent;
          if ( Parent->Parent == Parent )
          {
            Links->Parent = Links;
          }
          else
          {
            Links->Parent = Parent->Parent;
            v12 = 8LL;
            if ( Parent->Parent->LeftChild != Parent )
              v12 = 16LL;
            *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v12) = Links;
          }
          Links->LeftChild = i;
          i->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
          continue;
        }
        Parent->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = Parent;
        v9 = Links->LeftChild;
        i->RightChild = v9;
        if ( v9 )
          v9->Parent = i;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v14 = 8LL;
          if ( Parent->Parent->LeftChild != Parent )
            v14 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v14) = Links;
        }
        Links->LeftChild = i;
        i->LeftChild = Parent;
LABEL_23:
        i->Parent = Links;
        Parent->Parent = i;
        continue;
      }
      v6 = Links->LeftChild;
      i->RightChild = v6;
      if ( v6 )
        v6->Parent = i;
      Links->LeftChild = i;
    }
    i->Parent = Links;
    Links->Parent = Links;
  }
  return Links;
}
