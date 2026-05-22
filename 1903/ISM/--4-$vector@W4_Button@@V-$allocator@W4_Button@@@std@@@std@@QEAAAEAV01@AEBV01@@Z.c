/*
 * XREFs of ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FD0A0
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800FD278 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800FDD8C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??$_Assign_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800FC040 (--$_Assign_range@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXPEA.c)
 */

void **__fastcall std::vector<enum _Button>::operator=(void **a1, __int64 a2)
{
  if ( a1 != (void **)a2 )
    std::vector<enum _Button>::_Assign_range<enum _Button *>(a1, *(void **)a2, *(_QWORD *)(a2 + 8));
  return a1;
}
