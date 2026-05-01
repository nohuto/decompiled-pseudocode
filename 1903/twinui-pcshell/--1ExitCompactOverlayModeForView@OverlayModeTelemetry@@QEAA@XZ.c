/*
 * XREFs of ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x1803941D8
 * Callers:
 *     ??4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180394368 (--4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x180394950 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     _ShellPositionerManager::ChangePositionerForView_::_1_::dtor$3 @ 0x180394C5A (_ShellPositionerManager--ChangePositionerForView_--_1_--dtor$3.c)
 *     _ShellPositionerManager::ChangePositionerForView_::_1_::dtor$4 @ 0x180394C66 (_ShellPositionerManager--ChangePositionerForView_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180170860 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView(
        OverlayModeTelemetry::ExitCompactOverlayModeForView *this)
{
  *(_QWORD *)this = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
