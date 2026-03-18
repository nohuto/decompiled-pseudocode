/*
 * XREFs of RtlDelete @ 0x1401078E0
 * Callers:
 *     FsRtlRemoveNodeFromTunnel @ 0x140106580 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140106834 (FsRtlPrivateFastUnlockAll.c)
 *     RtlDeleteElementGenericTable @ 0x140106B90 (RtlDeleteElementGenericTable.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1401071F0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x140107374 (FsRtlFastUnlockSingleShared.c)
 *     RtlRemoveUnicodePrefix @ 0x1406B4DC0 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x1408CFF50 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSplay @ 0x140107700 (RtlSplay.c)
 *     SwapSplayLinks @ 0x140107B60 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x140107CB0 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rdx
  PRTL_SPLAY_LINKS v6; // rax
  __int64 v7; // rdx

  result = Links->LeftChild;
  if ( result )
  {
    if ( Links->RightChild )
    {
      v6 = RtlSubtreePredecessor(Links);
      SwapSplayLinks(v6, Links);
      result = Links->LeftChild;
    }
    if ( result )
      goto LABEL_3;
  }
  result = Links->RightChild;
  if ( result )
  {
LABEL_3:
    Parent = Links->Parent;
    if ( Links->Parent == Links )
    {
      result->Parent = result;
      return result;
    }
    v7 = 8LL;
    if ( Parent->LeftChild != Links )
      v7 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = result;
    v4 = Links->Parent;
    result->Parent = Links->Parent;
  }
  else
  {
    v4 = Links->Parent;
    if ( Links->Parent == Links )
      return 0LL;
    v5 = 8LL;
    if ( v4->LeftChild != Links )
      v5 = 16LL;
    *(_RTL_SPLAY_LINKS **)((char *)&v4->Parent + v5) = 0LL;
  }
  return RtlSplay(v4);
}
