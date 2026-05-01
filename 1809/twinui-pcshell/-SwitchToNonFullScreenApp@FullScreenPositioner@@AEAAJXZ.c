/*
 * XREFs of ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x18005FDE8
 * Callers:
 *     ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18005FB00 (-ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_.c)
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18005FC50 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?HideFullScreenView@FullScreenPositioner@@UEAAJXZ @ 0x180141B30 (-HideFullScreenView@FullScreenPositioner@@UEAAJXZ.c)
 * Callees:
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180141CB0 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180141FF0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180142A38 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
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
