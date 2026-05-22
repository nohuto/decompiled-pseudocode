/*
 * XREFs of ??$emplace@AEAKAEAPEAVControllerProcessor@@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAPEAVControllerProcessor@@@Z @ 0x180071E8C
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180073678 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     ??$_Buynode@AEAKAEAPEAVControllerProcessor@@@?$_List_buy@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@1@PEAU21@0AEAKAEAPEAVControllerProcessor@@@Z @ 0x18007185C (--$_Buynode@AEAKAEAPEAVControllerProcessor@@@-$_List_buy@U-$pair@$$CBKPEAVControllerProcessor@@@.c)
 *     ??$_Insert@AEAU?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAVControllerProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@1@@Z @ 0x180071AF4 (--$_Insert@AEAU-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$_List_unchecked_iterator@V-$_List_v.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::emplace<unsigned long &,ControllerProcessor * &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  _QWORD **v4; // rax
  __int64 v7; // rsi
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rax

  v4 = *(_QWORD ***)(a1 + 8);
  v7 = (__int64)*v4;
  v8 = (_QWORD *)(*v4)[1];
  v9 = std::_List_buy<std::pair<unsigned long const,ControllerProcessor *>>::_Buynode<unsigned long &,ControllerProcessor * &>(
         a1,
         *v4,
         v8,
         a3,
         a4);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Insert<std::pair<unsigned long const,ControllerProcessor *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>(
    (_QWORD *)a1,
    a2,
    (unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(_QWORD **)(a1 + 8));
  return a2;
}
