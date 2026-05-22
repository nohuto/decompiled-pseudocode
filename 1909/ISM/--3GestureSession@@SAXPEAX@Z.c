/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x18004EA64
 * Callers:
 *     _Win32kInterop::Create_::_1_::dtor$0 @ 0x18003A8EE (_Win32kInterop--Create_--_1_--dtor$0.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$0 @ 0x18003B370 (_KeyboardModifierState--Create_--_1_--dtor$0.c)
 *     _DWMInputRouter::OnFocusedThreadChanged_::_1_::dtor$11 @ 0x18003B9E0 (_DWMInputRouter--OnFocusedThreadChanged_--_1_--dtor$11.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$1 @ 0x18003C577 (_InputConfigContextProvider--Create_--_1_--dtor$1.c)
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x18003C6CA (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _SpatialRimDeviceCollection::Create_::_1_::dtor$1 @ 0x18003C892 (_SpatialRimDeviceCollection--Create_--_1_--dtor$1.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x18003CA9B (_AugmentedInputDeviceCollection--Create_--_1_--dtor$1.c)
 *     _MouseProcessor::Create_::_1_::dtor$0 @ 0x18003D8F1 (_MouseProcessor--Create_--_1_--dtor$0.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x180053D96 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$3 @ 0x180054708 (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$3.c)
 *     _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$2 @ 0x1800556D7 (_MPCInputRouter--OnExclusiveModeStateChangedInputThread_--_1_--dtor$2.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$2 @ 0x180056187 (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$2.c)
 *     _DragNDropProcessor::Create_::_1_::dtor$1 @ 0x18006ACE0 (_DragNDropProcessor--Create_--_1_--dtor$1.c)
 *     _ControllerProcessor::Create_::_1_::dtor$0 @ 0x180075CA8 (_ControllerProcessor--Create_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::Create_::_1_::dtor$0 @ 0x18007AEFE (_ISMHeatFrameworkHost--Create_--_1_--dtor$0.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$1 @ 0x1800A1241 (_MobileButtonDeviceCollection--Create_--_1_--dtor$1.c)
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$1 @ 0x1800A2979 (_ConsumerControlDeviceCollection--Create_--_1_--dtor$1.c)
 *     _SystemControlDeviceCollection::Create_::_1_::dtor$1 @ 0x1800A38E0 (_SystemControlDeviceCollection--Create_--_1_--dtor$1.c)
 *     _DWMInputRouter::Create_::_1_::dtor$1 @ 0x1800C2ECC (_DWMInputRouter--Create_--_1_--dtor$1.c)
 *     _DWMFocusedInputTarget::Create_::_1_::dtor$0 @ 0x1800C5DF6 (_DWMFocusedInputTarget--Create_--_1_--dtor$0.c)
 *     _ButtonRecognizer::Create_::_1_::dtor$1 @ 0x1800FD036 (_ButtonRecognizer--Create_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::Create_::_1_::dtor$1 @ 0x1800FE8E2 (_DragNDropProcessorLegacy--Create_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$0 @ 0x180103395 (_EdgyProcessorTarget--Initialize_--_1_--dtor$0.c)
 *     _GestureRecognizerCreate_::_1_::dtor$0 @ 0x18010A420 (_GestureRecognizerCreate_--_1_--dtor$0.c)
 *     _GazeProcessor::Create_::_1_::dtor$0 @ 0x180125694 (_GazeProcessor--Create_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x1801411EA (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
