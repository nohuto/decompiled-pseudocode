/*
 * XREFs of RtlSplay @ 0x14008D5A0
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x14008D16C (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x14008D384 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     RtlDelete @ 0x14008D400 (RtlDelete.c)
 *     RtlLookupElementGenericTable @ 0x14008D520 (RtlLookupElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x14008EC60 (RtlInsertElementGenericTableFull.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140122504 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     RtlEnumerateGenericTable @ 0x1401783B0 (RtlEnumerateGenericTable.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14026F12C (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x14026F1E8 (FsRtlCheckNoSharedConflict.c)
 *     RtlLookupElementGenericTableFull @ 0x1402F3200 (RtlLookupElementGenericTableFull.c)
 *     RtlInsertUnicodePrefix @ 0x1406A38A0 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x1406A3A00 (RtlFindUnicodePrefix.c)
 *     PfxFindPrefix @ 0x140893410 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140893510 (PfxInsertPrefix.c)
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
  __int64 v9; // rax
  _RTL_SPLAY_LINKS *v10; // rax
  __int64 v11; // rax
  _RTL_SPLAY_LINKS *v12; // rax
  _RTL_SPLAY_LINKS *v13; // rax
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
          v9 = 8LL;
          if ( Parent->Parent->LeftChild != Parent )
            v9 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v9) = Links;
        }
        Links->RightChild = i;
        i->RightChild = Parent;
        goto LABEL_25;
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
          v12 = Links->LeftChild;
          i->RightChild = v12;
          if ( v12 )
            v12->Parent = i;
          v13 = Links->RightChild;
          Parent->LeftChild = v13;
          if ( v13 )
            v13->Parent = Parent;
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
          i->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
          continue;
        }
        Parent->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = Parent;
        v10 = Links->LeftChild;
        i->RightChild = v10;
        if ( v10 )
          v10->Parent = i;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v11 = 8LL;
          if ( Parent->Parent->LeftChild != Parent )
            v11 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v11) = Links;
        }
        Links->LeftChild = i;
        i->LeftChild = Parent;
LABEL_25:
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
