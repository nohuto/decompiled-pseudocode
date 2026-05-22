/*
 * XREFs of ??1KeyboardInjectionDevice@@QEAA@XZ @ 0x180074BFC
 * Callers:
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$10 @ 0x1800748C4 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$10.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180076D50 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardInjectionDevice::~KeyboardInjectionDevice(KeyboardInjectionDevice *this)
{
  if ( *((_BYTE *)this + 1576) )
    InjectionDevice::Remove(this);
}
