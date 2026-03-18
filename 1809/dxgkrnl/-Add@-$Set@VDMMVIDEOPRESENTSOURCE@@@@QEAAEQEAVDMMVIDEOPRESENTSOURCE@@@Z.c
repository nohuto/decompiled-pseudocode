/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C001FAA4
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C0159B5C (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C001FB38 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r11
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 != a1 + 24 )
  {
    v3 -= 8LL;
    if ( v3 )
    {
      do
      {
        if ( v3 == a2 )
          break;
        v4 = *(_QWORD *)(v3 + 8);
        v3 = v4 - 8;
        if ( v4 == a1 + 24 )
          v3 = 0LL;
      }
      while ( v3 );
      if ( v3 )
        return 0;
    }
  }
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
                          a1 + 8,
                          a2,
                          v3) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v10 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v10);
  }
  else
  {
    v7 = *(_QWORD **)(v6 + 24);
    v8 = (_QWORD *)(a2 + 8);
    if ( *v7 != v6 + 16 )
      __fastfail(3u);
    *v8 = v6 + 16;
    *(_QWORD *)(a2 + 16) = v7;
    *v7 = v8;
    *(_QWORD *)(v6 + 24) = v8;
    ++*(_QWORD *)(v6 + 32);
  }
  return 1;
}
