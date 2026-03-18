/*
 * XREFs of ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x1C004D134
 * Callers:
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C004C2B0 (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C004C2DC (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@@@UEAAPEAXI@Z @ 0x1C004CB50 (--_E-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U-$DoubleLinkedListEleme.c)
 *     ?Clear@?$Queue@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@UEAAXXZ @ 0x1C004D320 (-Clear@-$Queue@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0017DAC (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C004DC10 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

void __fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear(
        __int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1);
    NonReferenceCounted::Release((NonReferenceCounted *)(v3 + 24));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
