/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXXZ @ 0x1C00543F8
 * Callers:
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C00535B0 (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@UEAAPEAXI@Z @ 0x1C0053E20 (--_G-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRESEN.c)
 *     ?Clear@?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ @ 0x1C0054550 (-Clear@-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::Clear(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD **v4; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v4 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    result = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)result[1] != v4 || (v6 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    --*(_QWORD *)(a1 + 32);
    result[1] = 0LL;
    *result = 0LL;
    ReferenceCounted::Release((ReferenceCounted *)(result + 7), a2, a3);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v7 + 24) = 394LL;
    return (_QWORD *)WdLogEvent5_WdAssertion(v7);
  }
  return result;
}
