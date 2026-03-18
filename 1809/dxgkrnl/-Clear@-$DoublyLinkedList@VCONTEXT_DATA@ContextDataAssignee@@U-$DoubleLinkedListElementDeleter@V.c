/*
 * XREFs of ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U?$DoubleLinkedListElementDeleter@VCONTEXT_DATA@ContextDataAssignee@@@@@@QEAAXXZ @ 0x1C004EDB4
 * Callers:
 *     ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C004EBFC (--1-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U?$DoubleLinkedListElementDeleter@VCONTEXT_DATA@ContextDataAssignee@@@@@@UEAAPEAXI@Z @ 0x1C004ECD0 (--_E-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U-$DoubleLinkedListElementDeleter@VCON.c)
 *     ?Clear@?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAXXZ @ 0x1C004EE40 (-Clear@-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0017DAC (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 */

void __fastcall DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::Clear(
        __int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rax

  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_QWORD *)(a1 + 32);
    *v3 = 0LL;
    v3[1] = 0LL;
    NonReferenceCounted::Release((NonReferenceCounted *)(v3 + 4));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
