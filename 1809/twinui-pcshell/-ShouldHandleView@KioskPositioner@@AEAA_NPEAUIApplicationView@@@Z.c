/*
 * XREFs of ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18009A008
 * Callers:
 *     ?AllowClose@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAE@Z @ 0x180097200 (-AllowClose@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAE@Z.c)
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180097500 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180097DD0 (-GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicati.c)
 *     ?HandleSwitchToView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180098480 (-HandleSwitchToView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180098750 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180099130 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 *     ?ShouldHandleActivation@KioskPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180099F30 (-ShouldHandleActivation@KioskPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleFrameworkViewTypeChange@KioskPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180099F90 (-ShouldHandleFrameworkViewTypeChange@KioskPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIE.c)
 * Callees:
 *     ?IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800989FC (-IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall KioskPositioner::ShouldHandleView(KioskPositioner *this, struct IApplicationView *a2)
{
  char v2; // bl

  v2 = 0;
  if ( *((_BYTE *)this + 608)
    && (*((_BYTE *)this + 609) || (unsigned __int8)KioskPositioner::IsPrimaryAppView(this, a2)) )
  {
    return 1;
  }
  return v2;
}
