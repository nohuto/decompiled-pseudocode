/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18000DFAC
 * Callers:
 *     _SystemContextProvider::SystemContextProvider_::_1_::dtor$0 @ 0x18003B98A (_SystemContextProvider--SystemContextProvider_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x18003BAF7 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x18003BB39 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x18003BBF5 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMInputRouter::OnFocusedThreadChanged_::_1_::dtor$12 @ 0x18003BF10 (_DWMInputRouter--OnFocusedThreadChanged_--_1_--dtor$12.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x18003C5D6 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x1800574CE (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x18006A576 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x18007ADB8 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x1800C5EC5 (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x1800FCF9A (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$0 @ 0x1800FE533 (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x180141C46 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 *     _InputInfoValidator::InputInfoValidator_::_1_::dtor$0 @ 0x180142D44 (_InputInfoValidator--InputInfoValidator_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
