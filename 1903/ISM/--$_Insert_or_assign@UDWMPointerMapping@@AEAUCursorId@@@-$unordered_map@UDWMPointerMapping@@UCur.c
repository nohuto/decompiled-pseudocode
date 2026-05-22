/*
 * XREFs of ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180013860
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x1800120D0 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ??$_Buynode@UDWMPointerMapping@@AEAUCursorId@@@?$_List_buy@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@1@PEAU21@0$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180013920 (--$_Buynode@UDWMPointerMapping@@AEAUCursorId@@@-$_List_buy@U-$pair@$$CBUDWMPointerMapping@@UCurs.c)
 *     ??$_Insert@AEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@@Z @ 0x180013960 (--$_Insert@AEAU-$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V-$_List_unchecked_iterator@V-$_L.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@AEBUDWMPointerMapping@@@Z @ 0x180013AE4 (-lower_bound@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPointe.c)
 */

__int64 __fastcall std::unordered_map<DWMPointerMapping,CursorId,DWMMappingHash,std::equal_to<DWMPointerMapping>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>>::_Insert_or_assign<DWMPointerMapping,CursorId &>(
        __int64 a1,
        __int64 a2,
        int a3,
        _OWORD *a4)
{
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::lower_bound(
    a1,
    &v15);
  v8 = *(__int64 **)(a1 + 8);
  v9 = v15;
  if ( (__int64 *)v15 == v8 )
  {
    v10 = *v8;
    v11 = *(__int64 **)(*v8 + 8);
    v12 = std::_List_buy<std::pair<DWMPointerMapping const,CursorId>>::_Buynode<DWMPointerMapping,CursorId &>(
            (_DWORD)v8,
            *v8,
            (_DWORD)v11,
            a3,
            (__int64)a4);
    v13 = *(_QWORD *)(a1 + 16);
    if ( v13 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    *(_QWORD *)(a1 + 16) = v13 + 1;
    *(_QWORD *)(v10 + 8) = v12;
    *v11 = v12;
    std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Insert<std::pair<DWMPointerMapping const,CursorId> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<DWMPointerMapping const,CursorId>>>>>(
      a1,
      a2,
      **(_QWORD **)(a1 + 8) + 16LL);
  }
  else
  {
    *(_OWORD *)(v15 + 24) = *a4;
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
