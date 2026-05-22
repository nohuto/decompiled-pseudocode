/*
 * XREFs of ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x1800261F4
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180023BA0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180024520 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800C9540 (-StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAUDeviceInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@1@@Z @ 0x180026654 (--$_Insert@AEAU-$pair@$$CBKPEAUDeviceInfo@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Li.c)
 *     ??$_Buynode@AEBKAEAPEAUIRawInputProvider@@@?$_List_buy@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@1@PEAU21@0AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800269E0 (--$_Buynode@AEBKAEAPEAUIRawInputProvider@@@-$_List_buy@U-$pair@$$CBKPEAUIRawInputProvider@@@std@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax

  v4 = *(__int64 **)(a1 + 8);
  v7 = *v4;
  v8 = *(__int64 **)(*v4 + 8);
  v9 = std::_List_buy<std::pair<unsigned long const,IRawInputProvider *>>::_Buynode<unsigned long const &,IRawInputProvider * &>(
         a1,
         *v4,
         (_DWORD)v8,
         a3,
         a4);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Insert<std::pair<unsigned long const,DeviceInfo *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DeviceInfo *>>>>>(
    a1,
    a2,
    **(_QWORD **)(a1 + 8) + 16LL);
  return a2;
}
