/*
 * XREFs of ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U?$DoubleLinkedListElementDeleter@VCONTEXT_DATA@ContextDataAssignee@@@@@@QEAAXXZ @ 0x1C0055E84
 * Callers:
 *     ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C0055CD0 (--1-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U?$DoubleLinkedListElementDeleter@VCONTEXT_DATA@ContextDataAssignee@@@@@@UEAAPEAXI@Z @ 0x1C0055DA0 (--_E-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U-$DoubleLinkedListElementDeleter@VCON.c)
 *     ?Clear@?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAXXZ @ 0x1C0055F20 (-Clear@-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C001A588 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 */

_QWORD *__fastcall DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::Clear(
        __int64 a1,
        __int64 a2)
{
  _QWORD **v3; // rbx
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax

  v3 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    result = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)result[1] != v3 || (v5 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    --*(_QWORD *)(a1 + 32);
    result[1] = 0LL;
    *result = 0LL;
    NonReferenceCounted::Release((NonReferenceCounted *)(result + 4));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 394LL;
    return (_QWORD *)WdLogEvent5_WdAssertion(v6);
  }
  return result;
}
