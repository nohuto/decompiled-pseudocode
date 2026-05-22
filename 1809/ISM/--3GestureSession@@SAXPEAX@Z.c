/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x180001B4C
 * Callers:
 *     _KeyboardModifierState::Create_::_1_::dtor$0 @ 0x18012DDF3 (_KeyboardModifierState--Create_--_1_--dtor$0.c)
 *     _MPCInputRouter::Initialize3DComponents_::_1_::dtor$3 @ 0x18012DE3B (_MPCInputRouter--Initialize3DComponents_--_1_--dtor$3.c)
 *     _CreateSystemInputRouter_::_1_::dtor$3 @ 0x18012DE71 (_CreateSystemInputRouter_--_1_--dtor$3.c)
 *     _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$2 @ 0x18012DF86 (_MPCInputRouter--UpdateFocusedInputTarget3D_--_1_--dtor$2.c)
 *     _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x18012E055 (_Win32kInterop--DeliverInputToTarget_--_1_--dtor$1.c)
 *     _ComboButtonProcessor::Initialize_::_1_::dtor$1 @ 0x18012E0C0 (_ComboButtonProcessor--Initialize_--_1_--dtor$1.c)
 *     _ButtonProcessor::Create_::_1_::dtor$0 @ 0x18012ECCE (_ButtonProcessor--Create_--_1_--dtor$0.c)
 *     _HeatProcessor::Initialize_::_1_::dtor$0 @ 0x18012F3FE (_HeatProcessor--Initialize_--_1_--dtor$0.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$2 @ 0x180130F43 (_RIMRawInputProvider--Initialize_--_1_--dtor$2.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$8 @ 0x180130F79 (_RIMRawInputProvider--Initialize_--_1_--dtor$8.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$32 @ 0x180132375 (_DWMInputRouter--Initialize_--_1_--dtor$32.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$1 @ 0x180132DF7 (_InputConfigContextProvider--Create_--_1_--dtor$1.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$1 @ 0x1801341F8 (_TouchProcessor--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
