/*
 * XREFs of RtlSplay @ 0x180064A00
 * Callers:
 *     RtlEnumerateGenericTable @ 0x1800646B0 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x180064820 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x180064920 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x180064C00 (RtlDelete.c)
 *     RtlpTpIoLookup @ 0x180089550 (RtlpTpIoLookup.c)
 *     PfxFindPrefix @ 0x1800E4790 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800E4890 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x1800F3E20 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *i; // r8
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *Parent; // r9
  _RTL_SPLAY_LINKS *v4; // rax
  _RTL_SPLAY_LINKS *v6; // rax
  _RTL_SPLAY_LINKS *v7; // rax
  __int64 v8; // rax
  _RTL_SPLAY_LINKS *v9; // rax
  __int64 v10; // rax
  _RTL_SPLAY_LINKS *v11; // rax
  _RTL_SPLAY_LINKS *v12; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  __int64 v14; // rax
  _RTL_SPLAY_LINKS *v15; // rax
  _RTL_SPLAY_LINKS *v16; // rax
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
          v12 = Links->LeftChild;
          Parent->RightChild = v12;
          if ( v12 )
            v12->Parent = Parent;
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
            v14 = 8LL;
            if ( Parent->Parent->LeftChild != Parent )
              v14 = 16LL;
            *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v14) = Links;
          }
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
          continue;
        }
        v6 = Links->RightChild;
        i->LeftChild = v6;
        if ( v6 )
          v6->Parent = i;
        v7 = i->RightChild;
        Parent->LeftChild = v7;
        if ( v7 )
          v7->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v8 = 8LL;
          if ( Parent->Parent->LeftChild != Parent )
            v8 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v8) = Links;
        }
        Links->RightChild = i;
        i->RightChild = Parent;
LABEL_21:
        i->Parent = Links;
        Parent->Parent = i;
        continue;
      }
      v11 = Links->RightChild;
      i->LeftChild = v11;
      if ( v11 )
        v11->Parent = i;
      Links->RightChild = i;
    }
    else
    {
      if ( Parent != i )
      {
        if ( Parent->RightChild != i )
        {
          v15 = Links->LeftChild;
          i->RightChild = v15;
          if ( v15 )
            v15->Parent = i;
          v16 = Links->RightChild;
          Parent->LeftChild = v16;
          if ( v16 )
            v16->Parent = Parent;
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
          v10 = 8LL;
          if ( Parent->Parent->LeftChild != Parent )
            v10 = 16LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v10) = Links;
        }
        Links->LeftChild = i;
        i->LeftChild = Parent;
        goto LABEL_21;
      }
      v4 = Links->LeftChild;
      i->RightChild = v4;
      if ( v4 )
        v4->Parent = i;
      Links->LeftChild = i;
    }
    i->Parent = Links;
    Links->Parent = Links;
  }
  return Links;
}
