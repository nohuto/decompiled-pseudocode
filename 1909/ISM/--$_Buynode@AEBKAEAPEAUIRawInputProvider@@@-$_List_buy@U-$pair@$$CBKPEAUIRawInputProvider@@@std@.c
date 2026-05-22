/*
 * XREFs of ??$_Buynode@AEBKAEAPEAUIRawInputProvider@@@?$_List_buy@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@1@PEAU21@0AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180013214
 * Callers:
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800130F0 (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@2@PEAU32@0@Z @ 0x180013254 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V-$allocat.c)
 */

__int64 __fastcall std::_List_buy<std::pair<unsigned long const,IRawInputProvider *>>::_Buynode<unsigned long const &,IRawInputProvider * &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>::_Buynode0(a1);
  *(_DWORD *)(result + 16) = *a4;
  *(_QWORD *)(result + 24) = *a5;
  return result;
}
