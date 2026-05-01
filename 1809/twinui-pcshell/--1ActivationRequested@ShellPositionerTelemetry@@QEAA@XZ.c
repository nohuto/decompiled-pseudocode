/*
 * XREFs of ??1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x180333F00
 * Callers:
 *     _ShellPositionerManager::ActivationRequested_::_1_::dtor$0 @ 0x1800ACC22 (_ShellPositionerManager--ActivationRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002FA94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall ShellPositionerTelemetry::ActivationRequested::~ActivationRequested(
        ShellPositionerTelemetry::ActivationRequested *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::ActivationRequested::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
