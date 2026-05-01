/*
 * XREFs of ??1?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x1801400C8
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x180096002 (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     __lambda_f2d251a8fca91fba8309c9b36f0f2507_::operator()_::_1_::dtor$0 @ 0x180096EB2 (__lambda_f2d251a8fca91fba8309c9b36f0f2507_--operator()_--_1_--dtor$0.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$1 @ 0x18009781F (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$1.c)
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1800AC783 (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::ApplyPendingPositioningOperations_::_1_::dtor$0 @ 0x180140896 (_FullScreenPositioner--ApplyPendingPositioningOperations_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x180142290 (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _FullScreenPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x180142A0C (_FullScreenPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EnsureHolographicViewConfiguration_::_1_::dtor$1 @ 0x1801B6870 (_HolographicPositioner--_EnsureHolographicViewConfiguration_--_1_--dtor$1.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$1 @ 0x1801B88A0 (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$1.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$1 @ 0x1801C564E (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$1.c)
 *     _wil::MakeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1801CFB33 (_wil--MakeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     _TabViewManager::UngroupAndCloakForDrag_::_1_::dtor$3 @ 0x1801EE829 (_TabViewManager--UngroupAndCloakForDrag_--_1_--dtor$3.c)
 *     _TitleBarController::AttachTitleBarToView_::_1_::dtor$4 @ 0x1801F71D4 (_TitleBarController--AttachTitleBarToView_--_1_--dtor$4.c)
 *     _TitleBarController::OnViewRecovered_::_1_::dtor$1 @ 0x1801F86A7 (_TitleBarController--OnViewRecovered_--_1_--dtor$1.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$8 @ 0x180207A5B (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$8.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$9 @ 0x180207A67 (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_KeyboardHosting::TabTipAdapterPolicy_KeyboardHosting::TabTipAdapterPolicy__::_1_::dtor$2 @ 0x1802BF0D0 (_Microsoft--WRL--Details--MakeAndInitialize_KeyboardHosting--TabTipAdapterPolicy_Ke_ea_1802BF0D0.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x180339BA2 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x180339E74 (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _CDesktopPositioner::DragCompleted_::_1_::dtor$4 @ 0x18033CE7F (_CDesktopPositioner--DragCompleted_--_1_--dtor$4.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$6 @ 0x18033E33F (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$6.c)
 *     _CDesktopPositioner::ResizeView_::_1_::dtor$0 @ 0x18033EB5D (_CDesktopPositioner--ResizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_MinimizeView_::_1_::dtor$0 @ 0x180341205 (_CDesktopPositioner--_MinimizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_RestoreView_::_1_::dtor$0 @ 0x180341479 (_CDesktopPositioner--_RestoreView_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::~ComPtr<KeyboardHosting::TabTipAdapterPolicy>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
