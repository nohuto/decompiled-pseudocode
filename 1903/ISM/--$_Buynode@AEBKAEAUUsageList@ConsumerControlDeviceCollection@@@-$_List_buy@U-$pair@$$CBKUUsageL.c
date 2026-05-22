/*
 * XREFs of ??$_Buynode@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@?$_List_buy@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@1@PEAU21@0AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@Z @ 0x1800A0774
 * Callers:
 *     ??$emplace@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@?$_Hash@V?$_Umap_traits@KUUsageList@MobileButtonDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x1800A0E50 (--$emplace@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@-$_Hash@V-$_Umap_traits@KUUsageList@.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800A2328 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUUsageList@MobileButtonDeviceCollectio.c)
 */

__int64 __fastcall std::_List_buy<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>::_Buynode<unsigned long const &,ConsumerControlDeviceCollection::UsageList &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _OWORD *a5)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>>::_Buynode0(a1);
  *(_DWORD *)(result + 16) = *a4;
  *(_OWORD *)(result + 24) = *a5;
  return result;
}
