/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x180032868
 * Callers:
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x18012F29B (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x18012F2B4 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$8 @ 0x18012F2CD (_ControllerProcessor--ControllerProcessor_--_1_--dtor$8.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$9 @ 0x18012F2E6 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$9.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$3 @ 0x180134A0F (_MouseProcessor--MouseProcessor_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 992) )
    *((_BYTE *)this + 992) = (*(int (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(
                               *(_QWORD *)this,
                               (char *)this + 8) < 0;
}
