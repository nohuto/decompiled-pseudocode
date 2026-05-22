/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x180074E14
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$3 @ 0x18003C640 (_MouseProcessor--MouseProcessor_--_1_--dtor$3.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x180074AAC (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x180074ABF (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$8 @ 0x180074AD2 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$8.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$9 @ 0x180074AE5 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$9.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$26 @ 0x180074AF8 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$26.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180076F90 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1576) )
    InjectionDevice::Remove(this);
}
