/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x180074BD4
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$3 @ 0x18003C110 (_MouseProcessor--MouseProcessor_--_1_--dtor$3.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x18007486C (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x18007487F (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$8 @ 0x180074892 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$8.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$9 @ 0x1800748A5 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$9.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$26 @ 0x1800748B8 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$26.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180076D50 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1576) )
    InjectionDevice::Remove(this);
}
