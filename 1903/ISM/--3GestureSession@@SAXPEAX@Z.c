/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x18004ED04
 * Callers:
 *     _Win32kInterop::Create_::_1_::dtor$0 @ 0x18003AE1E (_Win32kInterop--Create_--_1_--dtor$0.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$0 @ 0x18003B8A0 (_KeyboardModifierState--Create_--_1_--dtor$0.c)
 *     _DWMInputRouter::OnFocusedThreadChanged_::_1_::dtor$11 @ 0x18003BEF0 (_DWMInputRouter--OnFocusedThreadChanged_--_1_--dtor$11.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$1 @ 0x18003CAA7 (_InputConfigContextProvider--Create_--_1_--dtor$1.c)
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x18003CBFA (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _SpatialRimDeviceCollection::Create_::_1_::dtor$1 @ 0x18003CDC2 (_SpatialRimDeviceCollection--Create_--_1_--dtor$1.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x18003CFCB (_AugmentedInputDeviceCollection--Create_--_1_--dtor$1.c)
 *     _MouseProcessor::Create_::_1_::dtor$0 @ 0x18003DE21 (_MouseProcessor--Create_--_1_--dtor$0.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x180054036 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$3 @ 0x1800549A8 (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$3.c)
 *     _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$2 @ 0x180055977 (_MPCInputRouter--OnExclusiveModeStateChangedInputThread_--_1_--dtor$2.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$2 @ 0x180056427 (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$2.c)
 *     _DragNDropProcessor::Create_::_1_::dtor$1 @ 0x18006AF20 (_DragNDropProcessor--Create_--_1_--dtor$1.c)
 *     _ControllerProcessor::Create_::_1_::dtor$0 @ 0x180075EE8 (_ControllerProcessor--Create_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::Create_::_1_::dtor$0 @ 0x18007B13E (_ISMHeatFrameworkHost--Create_--_1_--dtor$0.c)
 *     _MobileButtonDeviceCollection::Create_::_1_::dtor$1 @ 0x1800A1401 (_MobileButtonDeviceCollection--Create_--_1_--dtor$1.c)
 *     _ConsumerControlDeviceCollection::Create_::_1_::dtor$1 @ 0x1800A2B39 (_ConsumerControlDeviceCollection--Create_--_1_--dtor$1.c)
 *     _SystemControlDeviceCollection::Create_::_1_::dtor$1 @ 0x1800A3AA0 (_SystemControlDeviceCollection--Create_--_1_--dtor$1.c)
 *     _DWMInputRouter::Create_::_1_::dtor$1 @ 0x1800C301C (_DWMInputRouter--Create_--_1_--dtor$1.c)
 *     _DWMFocusedInputTarget::Create_::_1_::dtor$0 @ 0x1800C5FE6 (_DWMFocusedInputTarget--Create_--_1_--dtor$0.c)
 *     _ButtonRecognizer::Create_::_1_::dtor$1 @ 0x1800FD266 (_ButtonRecognizer--Create_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::Create_::_1_::dtor$1 @ 0x1800FEB12 (_DragNDropProcessorLegacy--Create_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$0 @ 0x1801035C5 (_EdgyProcessorTarget--Initialize_--_1_--dtor$0.c)
 *     _GestureRecognizerCreate_::_1_::dtor$0 @ 0x18010A650 (_GestureRecognizerCreate_--_1_--dtor$0.c)
 *     _GazeProcessor::Create_::_1_::dtor$0 @ 0x180125694 (_GazeProcessor--Create_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x1801411AA (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
