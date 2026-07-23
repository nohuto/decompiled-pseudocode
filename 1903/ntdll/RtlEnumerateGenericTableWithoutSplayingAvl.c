/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180067070
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180067050 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     sub_1800670D0 @ 0x1800670D0 (sub_1800670D0.c)
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  __int64 v2; // r8
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS **v4; // r9
  _RTL_BALANCED_LINKS *i; // rcx

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  if ( *RestartKey )
  {
    RightChild = (_RTL_BALANCED_LINKS *)sub_1800670D0(*RestartKey, RestartKey, v2, RestartKey);
    if ( RightChild )
      *v4 = RightChild;
  }
  else
  {
    RightChild = Table->BalancedRoot.RightChild;
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    *RestartKey = RightChild;
  }
  return (PVOID)((unsigned __int64)&RightChild[1] & -(__int64)(RightChild != 0LL));
}
