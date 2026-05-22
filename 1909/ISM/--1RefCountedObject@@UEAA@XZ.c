/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18000E01C
 * Callers:
 *     _SystemContextProvider::SystemContextProvider_::_1_::dtor$0 @ 0x18003B45A (_SystemContextProvider--SystemContextProvider_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x18003B5C7 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x18003B609 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x18003B6C5 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMInputRouter::OnFocusedThreadChanged_::_1_::dtor$12 @ 0x18003BA00 (_DWMInputRouter--OnFocusedThreadChanged_--_1_--dtor$12.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x18003C0A6 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x18005722E (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x18006A336 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x18007AB78 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x1800C5CD5 (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x1800FCD6A (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$0 @ 0x1800FE303 (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x180141C86 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 *     _InputInfoValidator::InputInfoValidator_::_1_::dtor$0 @ 0x180142D84 (_InputInfoValidator--InputInfoValidator_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
