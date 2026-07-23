/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008ABB0
 * Callers:
 *     <none>
 * Callees:
 *     RealPredecessor @ 0x18006BDBC (RealPredecessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v7; // eax
  _RTL_BALANCED_LINKS *v8; // rsi
  _RTL_BALANCED_LINKS *v9; // rax

  *RestartKey = 0LL;
  if ( !Table->NumberGenericTableElements )
    return 0LL;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v7 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v7 )
      break;
    RightChild = RightChild->LeftChild;
LABEL_8:
    if ( !RightChild )
      return 0LL;
  }
  if ( v7 == GenericGreaterThan )
  {
    RightChild = RightChild->RightChild;
    goto LABEL_8;
  }
  do
  {
    v8 = RightChild;
    v9 = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
    RightChild = v9;
  }
  while ( v9 && Table->CompareRoutine(Table, Buffer, &v9[1]) == GenericEqual );
  *RestartKey = v8;
  return &v8[1];
}
