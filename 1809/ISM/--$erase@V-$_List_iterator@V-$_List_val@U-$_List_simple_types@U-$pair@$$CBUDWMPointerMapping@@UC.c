/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@V21@@Z @ 0x180107570
 * Callers:
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180106F3C (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Insert_std::pair_DWMPointerMapping_const__CursorId__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_DWMPointerMapping_const__CursorId__________::_1_::catch$0 @ 0x180135880 (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPoi_ea_180135880.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<DWMPointerMapping const,CursorId>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx

  v4 = 0xCBF29CE484222325uLL;
  v5 = 0LL;
  v7 = 0LL;
  v8 = 0xCBF29CE484222325uLL;
  do
  {
    v9 = *((unsigned __int8 *)a3 + v7 + 16);
    ++v7;
    v8 = 0x100000001B3LL * (v9 ^ v8);
  }
  while ( v7 < 4 );
  do
  {
    v10 = *((unsigned __int8 *)a3 + v5++ + 20);
    v4 = 0x100000001B3LL * (v10 ^ v4);
  }
  while ( v5 < 4 );
  v11 = a1[3];
  v12 = 2 * (a1[6] & (v8 ^ v4));
  if ( *(_QWORD **)(v11 + 8 * v12 + 8) == a3 )
  {
    if ( *(_QWORD **)(v11 + 8 * v12) == a3 )
    {
      *(_QWORD *)(v11 + 8 * v12) = a1[1];
      v11 = a1[3];
      v13 = a1[1];
    }
    else
    {
      v13 = a3[1];
    }
    *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
  }
  else if ( *(_QWORD **)(v11 + 8 * v12) == a3 )
  {
    *(_QWORD *)(v11 + 8 * v12) = *a3;
  }
  v14 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8LL) = a3[1];
  --a1[2];
  operator delete(a3, (const struct std::nothrow_t *)0x28);
  *a2 = v14;
  return a2;
}
