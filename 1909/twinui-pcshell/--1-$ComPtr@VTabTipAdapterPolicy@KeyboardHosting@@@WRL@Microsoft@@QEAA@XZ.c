/*
 * XREFs of ??1?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x18018ABB8
 * Callers:
 *     __lambda_280d05e5955ef1ef6fea1bffa32e8a2c_::operator()_::_1_::dtor$0 @ 0x1800AD246 (__lambda_280d05e5955ef1ef6fea1bffa32e8a2c_--operator()_--_1_--dtor$0.c)
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1800E6514 (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::ApplyPendingPositioningOperations_::_1_::dtor$0 @ 0x18018B3D6 (_FullScreenPositioner--ApplyPendingPositioningOperations_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x18018D08A (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _FullScreenPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x18018D89C (_FullScreenPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EnsureHolographicViewConfiguration_::_1_::dtor$1 @ 0x180222E49 (_HolographicPositioner--_EnsureHolographicViewConfiguration_--_1_--dtor$1.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$2 @ 0x1802251E4 (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$2.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$1 @ 0x18023D0B1 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$1.c)
 *     _wil::MakeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x180265CBF (_wil--MakeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     _TitleBarController::AttachTitleBarToView_::_1_::dtor$4 @ 0x180267804 (_TitleBarController--AttachTitleBarToView_--_1_--dtor$4.c)
 *     _TitleBarController::OnViewRecovered_::_1_::dtor$1 @ 0x180268BE7 (_TitleBarController--OnViewRecovered_--_1_--dtor$1.c)
 *     _TabTransferManager::PrepareTabAndViewForDrag_::_1_::dtor$3 @ 0x180277FD6 (_TabTransferManager--PrepareTabAndViewForDrag_--_1_--dtor$3.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$8 @ 0x18027F9BE (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$8.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$9 @ 0x18027F9CA (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_KeyboardHosting::TabTipAdapterPolicy_KeyboardHosting::TabTipAdapterPolicy__::_1_::dtor$2 @ 0x18033B6C0 (_Microsoft--WRL--Details--MakeAndInitialize_KeyboardHosting--TabTipAdapterPolicy_Ke_ea_18033B6C0.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1803B9B35 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x1803B9DEA (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1803BA513 (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$1 @ 0x1803BBA8F (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$1.c)
 *     _CDesktopPositioner::DragCompleted_::_1_::dtor$4 @ 0x1803C1314 (_CDesktopPositioner--DragCompleted_--_1_--dtor$4.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0_0 @ 0x1803C2A51 (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0_0.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x1803C2CCB (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _CDesktopPositioner::ResizeView_::_1_::dtor$0 @ 0x1803C2F70 (_CDesktopPositioner--ResizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_MinimizeView_::_1_::dtor$0 @ 0x1803C5635 (_CDesktopPositioner--_MinimizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_RestoreView_::_1_::dtor$0 @ 0x1803C5A71 (_CDesktopPositioner--_RestoreView_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::~ComPtr<KeyboardHosting::TabTipAdapterPolicy>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
