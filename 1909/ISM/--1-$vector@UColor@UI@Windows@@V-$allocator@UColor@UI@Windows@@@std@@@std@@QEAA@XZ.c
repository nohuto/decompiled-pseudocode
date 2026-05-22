/*
 * XREFs of ??1?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x180093AA0
 * Callers:
 *     _MPCRawInputProvider::FlushQueuedDeviceChanges_::_1_::dtor$1 @ 0x180094340 (_MPCRawInputProvider--FlushQueuedDeviceChanges_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$1 @ 0x1800AF625 (_LampArrayDevice--ProcessLampState_--_1_--dtor$1.c)
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$4 @ 0x1800BC203 (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$4.c)
 *     _ButtonRecognizer::FindExactComboButtonMatch_::_1_::dtor$0 @ 0x1800FD478 (_ButtonRecognizer--FindExactComboButtonMatch_--_1_--dtor$0.c)
 *     _ButtonRecognizer::IsComboButtonCandidate_::_1_::dtor$0 @ 0x1800FD884 (_ButtonRecognizer--IsComboButtonCandidate_--_1_--dtor$0.c)
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$0 @ 0x1800FDD4A (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Windows::UI::Color>::~vector<Windows::UI::Color>(__int64 a1)
{
  std::vector<Windows::UI::Color>::_Tidy(a1);
}
