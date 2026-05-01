/*
 * XREFs of ??1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180416DF4
 * Callers:
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x1804171F0 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$1 @ 0x1804175FC (_VirtualPinnedAppsHandler--PinAppID_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018FC50 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
