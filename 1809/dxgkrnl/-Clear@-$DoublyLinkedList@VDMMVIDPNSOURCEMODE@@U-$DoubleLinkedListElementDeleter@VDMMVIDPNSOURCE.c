/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C0015540
 * Callers:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C000AB34 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@UEAAPEAXI@Z @ 0x1C004E460 (--_E-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMOD.c)
 *     ?Clear@?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ @ 0x1C004E550 (-Clear@-$Set@VDMMVIDPNSOURCEMODE@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear(
        void (__fastcall ***a1)(_QWORD, __int64))
{
  void (__fastcall ***v1)(_QWORD, __int64); // rdi
  _QWORD **v2; // rbx
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  v1 = a1;
  v2 = a1 + 2;
  while ( 1 )
  {
    result = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)result[1] != v2 || (v4 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    a1 = (void (__fastcall ***)(_QWORD, __int64))(result + 7);
    v1[4] = (void (__fastcall **)(_QWORD, __int64))((char *)v1[4] - 1);
    *result = 0LL;
    result[1] = 0LL;
    if ( result != (_QWORD *)-56LL )
      (**a1)(a1, 1LL);
  }
  if ( v1[4] )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 394LL;
    return (_QWORD *)WdLogEvent5_WdAssertion(v5);
  }
  return result;
}
