/*
 * XREFs of ??A?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAAAEAUSize@Foundation@Windows@@AEBI@Z @ 0x18032AA80
 * Callers:
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x18032C6F0 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18032A60C (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 */

__int64 __fastcall std::map<unsigned int,Windows::Foundation::Size>::operator[](__int64 *a1, _DWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(a1, (__int64)v3, a2);
  return v3[0] + 32LL;
}
