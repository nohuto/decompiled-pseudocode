/*
 * XREFs of ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x180065FB0
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180065C20 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180065E60 (-ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_.c)
 *     ?HideFullScreenView@FullScreenPositioner@@UEAAJXZ @ 0x18018C920 (-HideFullScreenView@FullScreenPositioner@@UEAAJXZ.c)
 * Callees:
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18018CAA8 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x18018CE00 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18018D8C8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::SwitchToNonFullScreenApp(FullScreenPositioner *this)
{
  struct IApplicationView *v1; // rdx

  v1 = (struct IApplicationView *)*((_QWORD *)this + 30);
  if ( v1 )
  {
    if ( !FullScreenPositioner::IsLightweightFullScreen(this, v1) )
      FullScreenPositioner::PositionView(this, *((_QWORD *)this + 30), 2LL);
    FullScreenPositioner::SetVisibleView(this, 0LL);
  }
  return 0LL;
}
