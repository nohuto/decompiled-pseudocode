/*
 * XREFs of ?erase@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@0@Z @ 0x1800CE098
 * Callers:
 *     ?OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800CD420 (-OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 *     ?OnCursorDestroyed@SystemCursorService@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800CD570 (-OnCursorDestroyed@SystemCursorService@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800FD048 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800FDB5C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18000A240 (--$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

_QWORD *__fastcall std::vector<CursorDeviceInfo>::erase(__int64 a1, _QWORD *a2, void *a3, void *a4)
{
  _QWORD *result; // rax

  if ( a3 != a4 )
    *(_QWORD *)(a1 + 8) = std::_Move_unchecked<enum _Button *,enum _Button *>(a4, *(_QWORD *)(a1 + 8), a3);
  result = a2;
  *a2 = a3;
  return result;
}
