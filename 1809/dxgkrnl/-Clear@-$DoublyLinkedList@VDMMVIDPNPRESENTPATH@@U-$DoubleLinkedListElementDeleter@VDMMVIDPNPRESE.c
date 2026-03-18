/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAXXZ @ 0x1C0017ED0
 * Callers:
 *     ??1?$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ @ 0x1C00047CC (--1-$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@UEAAPEAXI@Z @ 0x1C004E790 (--_E-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTP.c)
 *     ?Clear@?$Set@VDMMVIDPNPRESENTPATH@@@@UEAAXXZ @ 0x1C004EAB0 (-Clear@-$Set@VDMMVIDPNPRESENTPATH@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0017DAC (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::Clear(
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
    NonReferenceCounted::Release((NonReferenceCounted *)(v3 + 8));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
