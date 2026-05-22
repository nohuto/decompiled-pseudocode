/*
 * XREFs of ??$_Buynode@UDWMPointerMapping@@AEAUCursorId@@@?$_List_buy@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@1@PEAU21@0$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180013890
 * Callers:
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x1800137D0 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@2@PEAU32@0@Z @ 0x180011498 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V-.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<DWMPointerMapping const,CursorId>>::_Buynode<DWMPointerMapping,CursorId &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _OWORD *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<DWMPointerMapping const,CursorId>>>::_Buynode0(a1, a2, a3);
  result[2] = *a4;
  *(_OWORD *)(result + 3) = *a5;
  return result;
}
