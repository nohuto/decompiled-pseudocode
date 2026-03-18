/*
 * XREFs of ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0017DAC
 * Callers:
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C0002438 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C000C370 (--_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C00172F0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAXXZ @ 0x1C0017ED0 (-Clear@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNPRESE.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x1C004D134 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x1C004D198 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C004D398 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U?$DoubleLinkedListElementDeleter@VCONTEXT_DATA@ContextDataAssignee@@@@@@QEAAXXZ @ 0x1C004EDB4 (-Clear@-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U-$DoubleLinkedListElementDeleter@V.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall NonReferenceCounted::Release(NonReferenceCounted *this)
{
  if ( this )
    (**(void (__fastcall ***)(NonReferenceCounted *, __int64))this)(this, 1LL);
  return 0LL;
}
