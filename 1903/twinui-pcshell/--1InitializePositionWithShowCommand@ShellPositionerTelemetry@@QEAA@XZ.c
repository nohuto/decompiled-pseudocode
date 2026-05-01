/*
 * XREFs of ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x18007B7C4
 * Callers:
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18007B690 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 *     _ShellPositionerManager::InitializePositionWithShowCommand_::_1_::dtor$0 @ 0x1800C6B39 (_ShellPositionerManager--InitializePositionWithShowCommand_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180048530 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall ShellPositionerTelemetry::InitializePositionWithShowCommand::~InitializePositionWithShowCommand(
        ShellPositionerTelemetry::InitializePositionWithShowCommand *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::InitializePositionWithShowCommand::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
