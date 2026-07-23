/*
 * XREFs of RtlSubtreePredecessor @ 0x18006CA10
 * Callers:
 *     RtlDeleteNoSplay @ 0x18006C260 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x18006C830 (RtlDelete.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSubtreePredecessor(PRTL_SPLAY_LINKS Links)
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
