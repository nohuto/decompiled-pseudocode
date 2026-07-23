/*
 * XREFs of RtlGetElementGenericTableAvl @ 0x1402F3250
 * Callers:
 *     <none>
 * Callees:
 *     RealSuccessor @ 0x1400069FC (RealSuccessor.c)
 *     RealPredecessor @ 0x1401348E0 (RealPredecessor.c)
 */

PVOID __stdcall RtlGetElementGenericTableAvl(PRTL_AVL_TABLE Table, ULONG I)
{
  ULONG v2; // r9d
  unsigned int WhichOrderedElement; // edx
  PRTL_AVL_TABLE v4; // r10
  unsigned int NumberGenericTableElements; // r8d
  _QWORD *OrderedPointer; // rcx
  _QWORD *i; // rax
  int v9; // edx
  _QWORD *k; // rax
  int v11; // r9d
  unsigned int v12; // r8d
  int v13; // r11d
  _QWORD *j; // rax
  int v15; // edx

  v2 = I;
  WhichOrderedElement = Table->WhichOrderedElement;
  v4 = Table;
  if ( v2 == -1 )
    return 0LL;
  NumberGenericTableElements = Table->NumberGenericTableElements;
  if ( v2 + 1 > NumberGenericTableElements )
    return 0LL;
  OrderedPointer = Table->OrderedPointer;
  if ( !OrderedPointer )
  {
    OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
    for ( i = (_QWORD *)OrderedPointer[1]; i; i = (_QWORD *)i[1] )
      OrderedPointer = i;
    WhichOrderedElement = 0;
    v4->OrderedPointer = OrderedPointer;
    v4->WhichOrderedElement = 0;
  }
  if ( WhichOrderedElement != v2 )
  {
    if ( WhichOrderedElement <= v2 )
    {
      v12 = NumberGenericTableElements - v2;
      if ( v2 - WhichOrderedElement > v12 )
      {
        OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
        for ( j = (_QWORD *)OrderedPointer[2]; j; j = (_QWORD *)j[2] )
          OrderedPointer = j;
        if ( v12 != 1 )
        {
          do
            OrderedPointer = RealPredecessor(OrderedPointer);
          while ( v15 != 1 );
        }
      }
      else if ( v2 != WhichOrderedElement )
      {
        do
          OrderedPointer = RealSuccessor(OrderedPointer);
        while ( v13 != 1 );
      }
    }
    else if ( v2 < WhichOrderedElement >> 1 )
    {
      OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
      for ( k = (_QWORD *)OrderedPointer[1]; k; k = (_QWORD *)k[1] )
        OrderedPointer = k;
      for ( ; v2; v2 = v11 - 1 )
        OrderedPointer = RealSuccessor(OrderedPointer);
    }
    else if ( WhichOrderedElement != v2 )
    {
      do
        OrderedPointer = RealPredecessor(OrderedPointer);
      while ( v9 != 1 );
    }
    v4->OrderedPointer = OrderedPointer;
    v4->WhichOrderedElement = v2;
  }
  return OrderedPointer + 4;
}
