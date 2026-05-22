/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@Z @ 0x180144264
 * Callers:
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Insert_std::pair_DWMPointerMapping_const__CursorId__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_DWMPointerMapping_const__CursorId__________::_1_::catch$90 @ 0x18003B046 (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPoi_ea_18003B046.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18014403C (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@2@@Z @ 0x1800A2664 (-erase@-$list@U-$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V-$allocator@U-$pair@$.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // r10
  __int64 v6; // rax
  unsigned __int8 *v7; // rsi
  __int64 v8; // rcx
  unsigned __int8 *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rax

  v4 = 0xCBF29CE484222325uLL;
  v6 = 0xCBF29CE484222325uLL;
  v7 = (unsigned __int8 *)(a3 + 2);
  if ( a3 + 2 <= (__int64 *)((char *)a3 + 20) )
  {
    do
    {
      v8 = *v7++;
      v6 = 0x100000001B3LL * (v8 ^ v6);
    }
    while ( v7 - (unsigned __int8 *)(a3 + 2) != ((__int64 *)((char *)a3 + 20) >= a3 + 2 ? 4 : 0) );
  }
  v9 = (unsigned __int8 *)a3 + 20;
  if ( (__int64 *)((char *)a3 + 20) < a3 + 3 )
  {
    do
    {
      v10 = *v9++;
      v4 = 0x100000001B3LL * (v10 ^ v4);
    }
    while ( v9 - ((unsigned __int8 *)a3 + 20) != (a3 + 3 >= (__int64 *)((char *)a3 + 20) ? 4 : 0) );
  }
  v11 = a1[3];
  v12 = 2 * (a1[6] & (v6 ^ v4));
  if ( *(__int64 **)(v11 + 8 * v12 + 8) == a3 )
  {
    if ( *(__int64 **)(v11 + 8 * v12) == a3 )
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
  else if ( *(__int64 **)(v11 + 8 * v12) == a3 )
  {
    *(_QWORD *)(v11 + 8 * v12) = *a3;
  }
  std::list<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>::erase((__int64)(a1 + 1), a2, a3);
  return a2;
}
