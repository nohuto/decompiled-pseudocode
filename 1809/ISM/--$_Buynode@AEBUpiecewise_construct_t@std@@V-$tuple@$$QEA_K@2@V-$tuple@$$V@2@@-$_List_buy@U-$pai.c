/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEA_K@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEA_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000919C
 * Callers:
 *     ??A?$unordered_map@_KPEAUIMPCTarget@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@@std@@QEAAAEAPEAUIMPCTarget@@$$QEA_K@Z @ 0x1800086E4 (--A-$unordered_map@_KPEAUIMPCTarget@@U-$hash@_K@std@@U-$equal_to@_K@3@V-$allocator@_ea_1800086E4.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180008EA4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned __int64 const,IMPCTarget *>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 &&>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD **a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
             a1,
             a2,
             a3);
  result[2] = **a5;
  result[3] = 0LL;
  return result;
}
