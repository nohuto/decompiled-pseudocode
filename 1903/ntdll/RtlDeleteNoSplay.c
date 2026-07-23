/*
 * XREFs of RtlDeleteNoSplay @ 0x180064C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064CAC @ 0x180064CAC (sub_180064CAC.c)
 *     RtlSubtreePredecessor @ 0x180064DF0 (RtlSubtreePredecessor.c)
 */

void __cdecl RtlDeleteNoSplay(PRTL_SPLAY_LINKS Links, PRTL_SPLAY_LINKS *Root)
{
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v6; // rcx
  _RTL_SPLAY_LINKS *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v7 = RtlSubtreePredecessor(Links);
    if ( Links->Parent == Links )
      *Root = v7;
    sub_180064CAC(v7, Links);
  }
  LeftChild = Links->LeftChild;
  if ( LeftChild || (LeftChild = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      LeftChild->Parent = LeftChild;
      *Root = LeftChild;
    }
    else
    {
      v8 = 8LL;
      if ( Parent->LeftChild != Links )
        v8 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v8) = LeftChild;
      LeftChild->Parent = Links->Parent;
    }
  }
  else
  {
    v6 = Links->Parent;
    if ( Links->Parent == Links )
    {
      *Root = 0LL;
    }
    else
    {
      v9 = 8LL;
      if ( v6->LeftChild != Links )
        v9 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v6->Parent + v9) = 0LL;
    }
  }
}
