/*
 * XREFs of ??1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ @ 0x180394204
 * Callers:
 *     _ShellPositionerManager::FrameworkViewTypeChanged_::_1_::dtor$0 @ 0x1800C5521 (_ShellPositionerManager--FrameworkViewTypeChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180048530 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall ShellPositionerTelemetry::FrameworkViewTypeChanged::~FrameworkViewTypeChanged(
        ShellPositionerTelemetry::FrameworkViewTypeChanged *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::FrameworkViewTypeChanged::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
