/*
 * XREFs of ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802E36D0
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802E7FC0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_IAllUpViewHost_::DismissView_::_1_::dtor$1 @ 0x1802E8185 (_CMultitaskingViewHostBase_IAllUpViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802F82B0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_IAltTabViewHost_::DismissView_::_1_::dtor$1 @ 0x1802F849D (_CMultitaskingViewHostBase_IAltTabViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1802FC080 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_ISnapAssistViewHost_::DismissView_::_1_::dtor$1 @ 0x1802FC26D (_CMultitaskingViewHostBase_ISnapAssistViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180370DA0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018FC50 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView(
        MultitaskingViewTelemetry::DismissMultitaskingView *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
