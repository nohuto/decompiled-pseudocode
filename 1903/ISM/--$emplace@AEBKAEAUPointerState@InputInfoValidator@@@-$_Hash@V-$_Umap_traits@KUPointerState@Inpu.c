/*
 * XREFs of ??$emplace@AEBKAEAUPointerState@InputInfoValidator@@@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x180142C5C
 * Callers:
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z @ 0x180142EA8 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBK_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBK_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@1@@Z @ 0x180069CD0 (--$_Insert@AEAU-$pair@$$CBK_K@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_type.c)
 *     ??$_Buynode@AEBKAEAUPointerState@InputInfoValidator@@@?$_List_buy@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@PEAX@1@PEAU21@0AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x180142BF8 (--$_Buynode@AEBKAEAUPointerState@InputInfoValidator@@@-$_List_buy@U-$pair@$$CBKUPointerState@Inp.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::emplace<unsigned long const &,InputInfoValidator::PointerState &>(
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
  v9 = std::_List_buy<std::pair<unsigned long const,InputInfoValidator::PointerState>>::_Buynode<unsigned long const &,InputInfoValidator::PointerState &>(
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
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Insert<std::pair<unsigned long const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned __int64>>>>>(
    a1,
    a2,
    (unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(_QWORD **)(a1 + 8));
  return a2;
}
