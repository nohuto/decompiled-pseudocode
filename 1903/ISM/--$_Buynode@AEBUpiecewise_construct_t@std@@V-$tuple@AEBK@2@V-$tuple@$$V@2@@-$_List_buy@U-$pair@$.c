/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800135A8
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KPEAUDeviceInfo@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180013488 (--$_Try_emplace@AEBK$$V@-$unordered_map@KPEAUDeviceInfo@@U-$hash@K@std@@U-$equal_to@K@3@V-$alloc.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800132E4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V-$allocat.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,DeviceInfo *>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _DWORD **a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>::_Buynode0(
             a1,
             a2,
             a3);
  *((_DWORD *)result + 4) = **a5;
  result[3] = 0LL;
  return result;
}
