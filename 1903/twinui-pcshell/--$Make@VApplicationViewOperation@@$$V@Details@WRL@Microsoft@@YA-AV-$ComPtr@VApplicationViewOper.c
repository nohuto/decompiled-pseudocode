/*
 * XREFs of ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18016AEDC
 * Callers:
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x18016DA70 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18016E3B0 (-SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180203B24 (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180205F00 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18021D7E0 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 *     ?PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180235F4C (-PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@C.c)
 *     ??$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x180246690 (--$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOperation@@@WRL.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180399FE8 (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039A28C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1803A1A70 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803A349C (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W_ea_1803A349C.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803A3580 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1803A37F0 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_MinimizeView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803A60BC (-_MinimizeView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RestoreView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803A64F8 (-_RestoreView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803AB820 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 * Callees:
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x18003CC3C (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Attach@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@Z @ 0x18016C204 (-Attach@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<ApplicationViewOperation,>(_QWORD *a1)
{
  ApplicationViewOperation *v2; // rax
  ApplicationViewOperation *v3; // rbx
  ApplicationViewOperation *v4; // rax

  *a1 = 0LL;
  v2 = (ApplicationViewOperation *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x118uLL);
    v4 = ApplicationViewOperation::ApplicationViewOperation(v3);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::Attach(a1, v4);
  }
  return a1;
}
