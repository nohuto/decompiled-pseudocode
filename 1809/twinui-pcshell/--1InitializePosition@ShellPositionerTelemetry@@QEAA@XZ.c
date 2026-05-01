/*
 * XREFs of ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x180333F84
 * Callers:
 *     _ShellPositionerManager::InitializePosition_::_1_::dtor$0 @ 0x1800AE94E (_ShellPositionerManager--InitializePosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002FA94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall ShellPositionerTelemetry::InitializePosition::~InitializePosition(
        ShellPositionerTelemetry::InitializePosition *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::InitializePosition::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
