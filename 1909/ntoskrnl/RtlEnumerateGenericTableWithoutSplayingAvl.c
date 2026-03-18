/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x14010CE40
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x14010CE10 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _QWORD *v3; // rcx
  _QWORD *j; // rax
  void *v5; // rcx
  _QWORD *i; // rcx
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS *k; // rcx
  _RTL_BALANCED_LINKS *v10; // rcx

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  v3 = *RestartKey;
  if ( *RestartKey )
  {
    j = (_QWORD *)v3[2];
    if ( j )
    {
      for ( i = (_QWORD *)j[1]; i; i = (_QWORD *)i[1] )
        j = i;
    }
    else
    {
      for ( j = (_QWORD *)*v3; (_QWORD *)j[2] == v3; j = (_QWORD *)*j )
        v3 = j;
      if ( (_QWORD *)j[1] != v3 )
      {
        j = 0LL;
LABEL_8:
        v5 = j + 4;
        if ( !j )
          return 0LL;
        return v5;
      }
    }
    if ( j )
      *RestartKey = j;
    goto LABEL_8;
  }
  RightChild = Table->BalancedRoot.RightChild;
  for ( k = RightChild->LeftChild; k; k = k->LeftChild )
    RightChild = k;
  *RestartKey = RightChild;
  v10 = RightChild + 1;
  if ( !RightChild )
    return 0LL;
  return v10;
}
