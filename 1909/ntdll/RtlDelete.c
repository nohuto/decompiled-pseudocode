/*
 * XREFs of RtlDelete @ 0x180064C00
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180064720 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x180089228 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800E49B0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x180064D4C (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x180064E90 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  PRTL_SPLAY_LINKS v3; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  __int64 v5; // rdx
  _RTL_SPLAY_LINKS *v6; // rcx
  _RTL_SPLAY_LINKS *v7; // rcx
  __int64 v8; // rdx

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
      v5 = 8LL;
      if ( Parent->LeftChild != Links )
        v5 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v5) = result;
      v6 = Links->Parent;
      result->Parent = Links->Parent;
      return RtlSplay(v6);
    }
  }
  else
  {
    v7 = Links->Parent;
    if ( Links->Parent == Links )
    {
      return 0LL;
    }
    else
    {
      v8 = 8LL;
      if ( v7->LeftChild != Links )
        v8 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v7->Parent + v8) = 0LL;
      return RtlSplay(v7);
    }
  }
  return result;
}
