/*
 * XREFs of ??1?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800BFE98
 * Callers:
 *     _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x18003AB60 (_DWMCursorBroker--GetCursors_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x18003AD32 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessOrientationChangeNotification_::_1_::dtor$0 @ 0x1800BFFE7 (_CursorNotificationProcessor--ProcessOrientationChangeNotification_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::~vector<Microsoft::WRL::ComPtr<ICursor>>(__int64 a1)
{
  std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Tidy(a1);
}
