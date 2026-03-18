/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x1C0054C34
 * Callers:
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0054568 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>>::InsertTail(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  _QWORD *v5; // rax
  char result; // al
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  if ( a2 )
  {
    v3 = a1 + 2;
    v4 = 0LL;
    if ( (_QWORD *)*v3 != v3 )
      v4 = *v3 - 8LL;
    while ( v4 && v4 != a2 )
    {
      v5 = *(_QWORD **)(v4 + 8);
      v4 = (__int64)(v5 - 1);
      if ( v5 == v3 )
        v4 = 0LL;
    }
    if ( v4 )
      return 0;
  }
  v7 = (_QWORD *)(a2 + 8);
  v8 = (_QWORD *)a1[3];
  if ( (_QWORD *)*v8 != a1 + 2 )
    __fastfail(3u);
  *v7 = a1 + 2;
  v7[1] = v8;
  *v8 = v7;
  a1[3] = v7;
  result = 1;
  ++a1[4];
  return result;
}
