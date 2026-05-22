/*
 * XREFs of ??$_Buynode@AEBUCursorId@@AEAPEAVDWMCursor@@@?$_List_buy@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@1@PEAU21@0AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x180107AA4
 * Callers:
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180106D34 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000F854 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<CursorId const,DWMCursor *>>::_Buynode<CursorId const &,DWMCursor * &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _OWORD *a4,
        _QWORD *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(a1, a2, a3);
  *((_OWORD *)result + 1) = *a4;
  result[4] = *a5;
  return result;
}
