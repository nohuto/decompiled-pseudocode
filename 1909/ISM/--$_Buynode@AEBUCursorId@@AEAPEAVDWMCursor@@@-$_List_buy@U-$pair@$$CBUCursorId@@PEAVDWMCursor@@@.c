/*
 * XREFs of ??$_Buynode@AEBUCursorId@@AEAPEAVDWMCursor@@@?$_List_buy@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@1@PEAU21@0AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x1800114EC
 * Callers:
 *     ??$emplace@AEBUCursorId@@AEAPEAVDWMCursor@@@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x18001157C (--$emplace@AEBUCursorId@@AEAPEAVDWMCursor@@@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18001152C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 */

__int64 __fastcall std::_List_buy<std::pair<CursorId const,DWMCursor *>>::_Buynode<CursorId const &,DWMCursor * &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        _QWORD *a5)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(a1);
  *(_OWORD *)(result + 16) = *a4;
  *(_QWORD *)(result + 32) = *a5;
  return result;
}
