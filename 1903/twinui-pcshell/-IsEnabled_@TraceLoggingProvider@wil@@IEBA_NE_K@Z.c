/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718
 * Callers:
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000E9C0 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800479E4 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180049BE0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x18004B834 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18007C4E8 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 *     ?IsEnabled@AppCloseTelemetry@@SA_NE_K@Z @ 0x180114354 (-IsEnabled@AppCloseTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1801143E0 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x180114474 (-IsEnabled@IamTraceLogging@@SA_NE_K@Z.c)
 *     ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAX_NPEBDPEAD@Z @ 0x18016DFE0 (-ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAX_NPEBDPEAD@Z.c)
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x180194460 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1801DED2C (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 *     ??$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneViewChange@@@Z @ 0x18021E2EC (--$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneVi.c)
 *     ?IsEnabled@TabViewManagerMeasures@@SA_NE_K@Z @ 0x180231D38 (-IsEnabled@TabViewManagerMeasures@@SA_NE_K@Z.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x180231DC4 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x180265484 (-TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicat.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18029866C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x1802CBFD8 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x1803208F4 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x1803488DC (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x180367B1C (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 *     ?IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z @ 0x1803A26A8 (-IsEnabled@DesktopPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x1803AE270 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 *     ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x180408814 (-IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this, unsigned __int8 a2)
{
  const struct _TlgProvider_t *v2; // rcx
  char v3; // r9

  v2 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 && (unsigned int)a2 < *(_DWORD *)v2 )
    return TlgKeywordOn(v2, 0LL) != 0;
  return v3;
}
