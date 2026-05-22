/*
 * XREFs of ??$emplace@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@?$_Hash@V?$_Umap_traits@KUUsageList@MobileButtonDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x1800A0E50
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A18B0 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A2E20 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Buynode@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@?$_List_buy@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@1@PEAU21@0AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@Z @ 0x1800A0774 (--$_Buynode@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@-$_List_buy@U-$pair@$$CBKUUsageL.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@1@@Z @ 0x1800A097C (--$_Insert@AEAU-$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V-$_List_unchecked_.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,MobileButtonDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>,0>>::emplace<unsigned long const &,MobileButtonDeviceCollection::UsageList &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _OWORD *a4)
{
  __int64 *v4; // rax
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax

  v4 = *(__int64 **)(a1 + 8);
  v7 = *v4;
  v8 = *(__int64 **)(*v4 + 8);
  v9 = std::_List_buy<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>::_Buynode<unsigned long const &,ConsumerControlDeviceCollection::UsageList &>(
         a1,
         *v4,
         (__int64)v8,
         a3,
         a4);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0x666666666666665LL )
    std::_Xlength_error("list<T> too long");
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_Insert<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>>>>(
    a1,
    a2,
    (unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(__int64 ***)(a1 + 8));
  return a2;
}
