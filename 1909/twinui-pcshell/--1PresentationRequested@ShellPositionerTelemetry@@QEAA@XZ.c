/*
 * XREFs of ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803B3B8C
 * Callers:
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803B4D80 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     _ShellPositionerManager::PresentationRequested_::_1_::dtor$0 @ 0x1803B53F0 (_ShellPositionerManager--PresentationRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003B6E4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall ShellPositionerTelemetry::PresentationRequested::~PresentationRequested(
        ShellPositionerTelemetry::PresentationRequested *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::PresentationRequested::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
