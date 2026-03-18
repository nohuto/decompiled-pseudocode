/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x1C00543A8
 * Callers:
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C00535C4 (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@UEAAPEAXI@Z @ 0x1C0053E10 (--_G-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMOD.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ @ 0x1C0054570 (-Clear@-$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C001A588 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear(
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
    NonReferenceCounted::Release((NonReferenceCounted *)(result + 7));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 394LL;
    return (_QWORD *)WdLogEvent5_WdAssertion(v6);
  }
  return result;
}
