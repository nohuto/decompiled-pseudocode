/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C0017D24
 * Callers:
 *     ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C00054C4 (--1-$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@UEAAPEAXI@Z @ 0x1C0055920 (--_G-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@U.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x1C0055B80 (-Clear@-$Set@VDMMVIDPNTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(
        void (__fastcall ***a1)(_QWORD, __int64),
        __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rdi
  _QWORD **v3; // rbx
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax

  v2 = a1;
  v3 = a1 + 2;
  while ( 1 )
  {
    result = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)result[1] != v3 || (v5 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    v2[4] = (void (__fastcall **)(_QWORD, __int64))((char *)v2[4] - 1);
    result[1] = 0LL;
    *result = 0LL;
    a1 = (void (__fastcall ***)(_QWORD, __int64))(result + 9);
    if ( result != (_QWORD *)-72LL )
      (**a1)(a1, 1LL);
  }
  if ( v2[4] )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 394LL;
    return (_QWORD *)WdLogEvent5_WdAssertion(v6);
  }
  return result;
}
