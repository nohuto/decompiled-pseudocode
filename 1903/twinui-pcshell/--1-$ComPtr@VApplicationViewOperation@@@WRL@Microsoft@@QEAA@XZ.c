/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x18016B818
 * Callers:
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1800C4F34 (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::ApplyPendingPositioningOperations_::_1_::dtor$0 @ 0x18016C05F (_FullScreenPositioner--ApplyPendingPositioningOperations_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x18016DCFA (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _FullScreenPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x18016E50C (_FullScreenPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EnsureHolographicViewConfiguration_::_1_::dtor$1 @ 0x180203D69 (_HolographicPositioner--_EnsureHolographicViewConfiguration_--_1_--dtor$1.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$2 @ 0x1802060F4 (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$2.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$1 @ 0x18021DA31 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$1.c)
 *     _wil::MakeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1802466DF (_wil--MakeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     _TitleBarController::AttachTitleBarToView_::_1_::dtor$4 @ 0x180248201 (_TitleBarController--AttachTitleBarToView_--_1_--dtor$4.c)
 *     _TitleBarController::OnViewRecovered_::_1_::dtor$1 @ 0x1802495E7 (_TitleBarController--OnViewRecovered_--_1_--dtor$1.c)
 *     _TabTransferManager::PrepareTabAndViewForDrag_::_1_::dtor$3 @ 0x180258A76 (_TabTransferManager--PrepareTabAndViewForDrag_--_1_--dtor$3.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$8 @ 0x1802603FE (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$8.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$9 @ 0x18026040A (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$9.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x18039A255 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x18039A50A (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x18039AC27 (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     __lambda_490495f22ac349c27ec948cdb66a4eae_::operator()_::_1_::dtor$0 @ 0x18039B822 (__lambda_490495f22ac349c27ec948cdb66a4eae_--operator()_--_1_--dtor$0.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$1 @ 0x18039C29F (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$1.c)
 *     _CDesktopPositioner::DragCompleted_::_1_::dtor$4 @ 0x1803A1E24 (_CDesktopPositioner--DragCompleted_--_1_--dtor$4.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0_0 @ 0x1803A3561 (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0_0.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x1803A37DB (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _CDesktopPositioner::ResizeView_::_1_::dtor$0 @ 0x1803A3A80 (_CDesktopPositioner--ResizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_MinimizeView_::_1_::dtor$0 @ 0x1803A6145 (_CDesktopPositioner--_MinimizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_RestoreView_::_1_::dtor$0 @ 0x1803A6581 (_CDesktopPositioner--_RestoreView_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
