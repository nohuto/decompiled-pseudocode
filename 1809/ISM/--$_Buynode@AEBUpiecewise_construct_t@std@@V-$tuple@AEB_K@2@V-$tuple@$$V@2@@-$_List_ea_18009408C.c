/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18009408C
 * Callers:
 *     ??A?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursor@@@1@AEB_K@Z @ 0x18009437C (--A-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@V-$allocat.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000F854 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD **a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(a1, a2, a3);
  result[2] = **a5;
  result[3] = 0LL;
  result[4] = 0LL;
  return result;
}
