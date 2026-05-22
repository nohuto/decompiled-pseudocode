/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800132E4
 * Callers:
 *     ??$_Buynode@AEBKAEAPEAUIRawInputProvider@@@?$_List_buy@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@1@PEAU21@0AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800132A4 (--$_Buynode@AEBKAEAPEAUIRawInputProvider@@@-$_List_buy@U-$pair@$$CBKPEAUIRawInputProvider@@@std@.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800135A8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@$.c)
 *     ??0?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@1@@Z @ 0x18001541C (--0-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 *     ??0Win32kInterop@@QEAA@XZ @ 0x180015ACC (--0Win32kInterop@@QEAA@XZ.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18001E8E8 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
