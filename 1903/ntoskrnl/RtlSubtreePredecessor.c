/*
 * XREFs of RtlSubtreePredecessor @ 0x140104410
 * Callers:
 *     RtlDeleteNoSplay @ 0x140102E90 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x140104040 (RtlDelete.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSubtreePredecessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->LeftChild;
  if ( result )
  {
    for ( i = result->RightChild; i; i = i->RightChild )
      result = i;
  }
  return result;
}
