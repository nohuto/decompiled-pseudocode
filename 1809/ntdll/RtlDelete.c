/*
 * XREFs of RtlDelete @ 0x18006C830
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x18006C310 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x18008BAB8 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800E7590 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x18006C8CC (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x18006CA10 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  PRTL_SPLAY_LINKS v3; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  _RTL_SPLAY_LINKS *v8; // rcx

  result = Links->LeftChild;
  if ( result )
  {
    if ( Links->RightChild )
    {
      v3 = RtlSubtreePredecessor(Links);
      SwapSplayLinks(v3, Links);
      result = Links->LeftChild;
    }
    if ( result )
      goto LABEL_5;
  }
  result = Links->RightChild;
  if ( result )
  {
LABEL_5:
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      result->Parent = result;
    }
    else
    {
      v7 = 8LL;
      if ( Parent->LeftChild != Links )
        v7 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = result;
      v8 = Links->Parent;
      result->Parent = Links->Parent;
      return RtlSplay(v8);
    }
  }
  else
  {
    v5 = Links->Parent;
    if ( Links->Parent == Links )
    {
      return 0LL;
    }
    else
    {
      v6 = 8LL;
      if ( v5->LeftChild != Links )
        v6 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v5->Parent + v6) = 0LL;
      return RtlSplay(v5);
    }
  }
  return result;
}
