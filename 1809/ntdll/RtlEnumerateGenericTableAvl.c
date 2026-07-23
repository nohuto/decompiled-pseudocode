/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x18006DB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  PVOID result; // rax
  _RTL_BALANCED_LINKS *RestartKey; // r8
  _RTL_BALANCED_LINKS *RightChild; // rcx
  _RTL_BALANCED_LINKS *j; // rdx
  _RTL_BALANCED_LINKS *v7; // rdx
  _RTL_BALANCED_LINKS *k; // rdx
  _RTL_BALANCED_LINKS *i; // rdx

  result = 0LL;
  if ( Restart )
    Table->RestartKey = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    RestartKey = Table->RestartKey;
    if ( !RestartKey )
    {
      RightChild = Table->BalancedRoot.RightChild;
      for ( i = RightChild->LeftChild; i; i = i->LeftChild )
        RightChild = i;
      v7 = RightChild;
LABEL_10:
      Table->RestartKey = v7;
      return &RightChild[1];
    }
    RightChild = RestartKey->RightChild;
    if ( RightChild )
    {
      for ( j = RightChild->LeftChild; j; j = j->LeftChild )
        RightChild = j;
    }
    else
    {
      for ( k = RestartKey->Parent; k->RightChild == RestartKey; k = k->Parent )
        RestartKey = k;
      RightChild = 0LL;
      if ( k->LeftChild == RestartKey )
        RightChild = k;
    }
    v7 = RightChild;
    if ( RightChild )
      goto LABEL_10;
  }
  return result;
}
