/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x180001B38
 * Callers:
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x18012E27E (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x18012EB84 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x18012F567 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x180130720 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x180131CBD (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x180131FE4 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$0 @ 0x180132DE1 (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$0.c)
 *     _ComboButtonProcessor::Initialize_::_1_::dtor$2 @ 0x180133E78 (_ComboButtonProcessor--Initialize_--_1_--dtor$2.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$2 @ 0x180135699 (_TouchProcessor--Initialize_--_1_--dtor$2.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$1 @ 0x1801356AB (_KeyboardModifierState--Create_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
