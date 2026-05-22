/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C8390
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C8BF0 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Hash@_ea_1800C8BF0.c)
 *     ?OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800CD8B0 (-OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800CDA70 (-OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800A2328 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUUsageList@MobileButtonDeviceCollectio.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD **a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>>::_Buynode0(
             a1,
             a2,
             a3);
  result[2] = **a5;
  result[3] = 0LL;
  result[4] = 0LL;
  return result;
}
