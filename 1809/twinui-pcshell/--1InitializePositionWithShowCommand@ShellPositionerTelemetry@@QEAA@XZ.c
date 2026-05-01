/*
 * XREFs of ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x180333FB0
 * Callers:
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180334AE0 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 *     _ShellPositionerManager::InitializePositionWithShowCommand_::_1_::dtor$0 @ 0x180334C0A (_ShellPositionerManager--InitializePositionWithShowCommand_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002FA94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall ShellPositionerTelemetry::InitializePositionWithShowCommand::~InitializePositionWithShowCommand(
        ShellPositionerTelemetry::InitializePositionWithShowCommand *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::InitializePositionWithShowCommand::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
